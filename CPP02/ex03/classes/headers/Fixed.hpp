/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:52:20 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/06 16:19:59 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    //TODO: Confirm if private before or after public in orthodox
    private:
        int                 _value;
        static const int    _fractBits;
    public:
        Fixed(); // default constructor
        Fixed(int value);
        Fixed(const float floatValue);
        Fixed(const Fixed &other); // copy constructor
        ~Fixed(); // destructor

        // copy assignment overload
		Fixed& operator=(const Fixed &other);

		// comparison operator overload
        bool    operator < (const Fixed &other) const;
        bool    operator > (const Fixed &other) const;
        bool    operator >=(const Fixed &other) const;
        bool    operator <= (const Fixed &other) const;
        bool    operator == (const Fixed &other) const;
        bool    operator != (const Fixed &other) const;

		// arithmetic operator overload
        Fixed   operator + (const Fixed &other) const;
        Fixed   operator - (const Fixed &other) const;
        Fixed   operator / (const Fixed &other) const;
        Fixed   operator * (const Fixed &other) const;

		// post incr/decr and incr/decr operator overload
		Fixed&  operator ++ (void);
        Fixed&  operator -- (void);
        Fixed   operator -- (int);
        Fixed   operator ++ (int);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

        static Fixed		&min(Fixed &a, Fixed &b);
        static Fixed		&max(Fixed &a, Fixed &b);
        static const Fixed	&min(const Fixed &a, const Fixed &b);
        static const Fixed	&max(const Fixed &a, const Fixed &b);
};

#endif