/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 22:30:58 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/23 00:36:10 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string lowerSentence;
	int			nbArg = 1;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (argv[nbArg])
	{
		lowerSentence = argv[nbArg];
		for (std::string::size_type i = 0 ; i < lowerSentence.length() ; i++)
			lowerSentence[i] = ::toupper(lowerSentence[i]);
		std::cout << lowerSentence;
		nbArg++;
	}
	std::cout << "\n";
	return (0);
}
