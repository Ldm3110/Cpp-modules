/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:21:33 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/27 12:33:39 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "str -> " << &str << " value -> " << str << std::endl;
    std::cout << "stringPTR -> " << (void *)stringPTR << " value - > " << &stringPTR << std::endl;
    std::cout << "stringREF -> " << &stringREF << " value -> " << stringREF << std::endl;
}