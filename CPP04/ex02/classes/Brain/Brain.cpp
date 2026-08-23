/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:44:08 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/18 11:21:58 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Standard idea";
}

Brain::Brain(std::string idea) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

Brain::Brain(const Brain &other) {
	*this = other;
}

Brain	&Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "[Brain] remove instance" << std::endl;
}

std::string	Brain::giveMeAnIdea(int index) {
	if (index < 0 || index > 100)
		return "Bro !! this index is anavailable !!";
	return this->ideas[index];
}