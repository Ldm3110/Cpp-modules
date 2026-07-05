/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:15:39 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/27 20:28:57 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {

    private:
    void    _debug(void);
    void    _info(void);
    void    _warning(void);
    void    _error(void);

    public:
    Harl();

    void    complain(std::string level);
	void	displayComplain(int index);
};

#endif
