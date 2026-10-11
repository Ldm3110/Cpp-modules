#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>

class BitcoinExchange {
	private:
		std::map<std::string, double>	_data;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();

		BitcoinExchange	&operator=(const BitcoinExchange &other);

		void	initData(std::string datafile);
		void	processLine(const std::string &path);
};

#endif
