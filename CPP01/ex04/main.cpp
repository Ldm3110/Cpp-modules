/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:38:49 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/17 08:57:30 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceAndWrite(std::ifstream &file, std::string filename, std::string s1, std::string s2)
{
    std::string line;
    std::string before;
    std::string result;
    size_t      word;

    while (std::getline(file, line))
    {
        while ((word = line.find(s1)) != std::string::npos)
        {
            before = line.substr(0, word);
            line = line.substr(word + s1.length());
            result += before + s2;
        }
        result += line;
        if (!file.eof())
            result += '\n';
    }
    std::ofstream outFile((filename + ".replace").c_str());
    outFile << result;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "bad number of args" << std::endl;
        return 1;
    }
    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cout << "impossible to open file" << std::endl;
        return 1;
    }
    replaceAndWrite(file, argv[1], argv[2], argv[3]);
    return 0;
}