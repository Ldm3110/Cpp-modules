/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 22:30:58 by lude-mat          #+#    #+#             */
/*   Updated: 2026/03/24 22:35:35 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	char c;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	while (argv[i])
	{
		while(argv[i][j])
		{
			if (is_lower(argv[i][j]))
			{
				c = argv[i][j] - 32;
				std::cout << c;
			}
			else
				std::cout << argv[i][j];
			j++;
		}
		i++;
		j = 0;
	}
	std::cout << "\n";
	return (0);
}
