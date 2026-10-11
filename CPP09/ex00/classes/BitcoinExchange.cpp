/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 23:35:02 by ludovic           #+#    #+#             */
/*   Updated: 2026/10/12 00:10:04 by ludovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cstdlib>
#include <cctype>

// ============ Utilities ==============

static bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

bool isValidDate(const std::string &s) {
    if (s.size() != 10 || s[4] != '-' || s[7] != '-')
        return false;
    for (size_t i = 0; i < s.size(); ++i) {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(static_cast<unsigned char>(s[i])))
            return false;
    }
    int	y = std::atoi(s.substr(0, 4).c_str());
    int	m = std::atoi(s.substr(5, 2).c_str());
    int	d = std::atoi(s.substr(8, 2).c_str());
    if (m < 1 || m > 12 || d < 1)
        return false;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int maxDay = days[m - 1];
    if (m == 2 && isLeap(y))
        maxDay = 29;
    return d <= maxDay;
}

int	parseNumber(const std::string &s, double &out) {
    size_t i = 0;
    bool negative = false;
    if (!s.empty() && s[0] == '-') {
        negative = true;
        i = 1;
    }
    size_t before = 0, after = 0;
    bool dot = false;
    for (; i < s.size(); ++i) {
        if (std::isdigit(static_cast<unsigned char>(s[i]))) {
            if (dot) ++after; else ++before;
        } else if (s[i] == '.' && !dot)
            dot = true;
        else
            return 1;
    }
    if (before == 0 || (dot && after == 0))
        return 1;
    out = std::strtod(s.c_str(), NULL);
    return negative ? 2 : 0;
}

std::string	trim(const std::string &s) {
    const char *ws = " \t\r\n";
    size_t start = s.find_first_not_of(ws);
    if (start == std::string::npos)
        return "";
    size_t end = s.find_last_not_of(ws);
    return s.substr(start, end - start + 1);
}

// ============= End of Utilities ===================

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	*this = other;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		;
	}
	return *this;
}


void	BitcoinExchange::initData(std::string datafile) {
	std::ifstream	file(datafile.c_str());
    std::string		line;

    if (!file.is_open())
        throw std::runtime_error("could not open database file.");
    std::getline(file, line);
    while (std::getline(file, line)) {
        size_t pos = line.find(',');
        if (pos == std::string::npos)
            throw std::runtime_error("bad line in database => " + line);
        std::string date = trim(line.substr(0, pos));
        std::string val  = trim(line.substr(pos + 1));
        double rate;
        if (!isValidDate(date) || parseNumber(val, rate) != 0)
            throw std::runtime_error("bad line in database => " + line);
        this->_data[date] = rate;
    }
    if (this->_data.empty())
        throw std::runtime_error("database is empty.");
}

void	BitcoinExchange::processLine(const std::string &path) {
	std::ifstream	file;
	std::string		line;

	file.open(path.c_str());
	if (!file.is_open()) 
		throw std::runtime_error("could not open file");
	std::getline(file, line); // exclude the first line (header)
	while(std::getline(file, line)) {
		size_t pos = line.find ("|");
		if (pos == std::string::npos || pos == 0 || line[pos - 1 ] != ' ' || line[pos + 1] != ' ') {
			std::cout << "no space before and/or after pipe" << std::endl;
			continue;
		}
		std::string	date = trim(line.substr(0, pos));
		std::string value = trim(line.substr(pos + 1));
		std::cout << "data = " << date << " -- value = " << value << std::endl;
	}
}
