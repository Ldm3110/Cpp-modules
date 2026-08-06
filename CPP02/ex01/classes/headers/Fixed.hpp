/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:52:20 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/23 11:47:44 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    public:
        Fixed(); // default constructor
        Fixed(const int value);
        Fixed(const float floatValue);
        Fixed(const Fixed &other); // copy constructor
        ~Fixed(); // destructor
        
        Fixed &operator = (const Fixed &other);
        Fixed &operator + (const Fixed &other);
        Fixed &operator - (const Fixed &other);
        Fixed &operator / (const Fixed &other);
        Fixed &operator * (const Fixed &other);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

    private:
        int                 _value;
        static const int    _fractBits;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif