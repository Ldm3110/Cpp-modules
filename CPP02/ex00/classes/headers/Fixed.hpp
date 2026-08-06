/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:52:20 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/20 07:22:22 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    private:
        int                 _value;
        static const int    _fractBits;

    public:
        Fixed(); // default constructor
        Fixed(const Fixed &other); // copy constructor
        Fixed&  operator=(const Fixed &other); // copy assignment operator
        ~Fixed(); // destructor

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif