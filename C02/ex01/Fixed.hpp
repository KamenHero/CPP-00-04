/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:16:05 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/20 18:01:59 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include <cmath>


class Fixed
{
	private:
		int x;
		static const int x2 = 8;
	public:
		Fixed();
		Fixed(const Fixed &);
		Fixed(const int);
		Fixed(const float);
		Fixed & operator=(const Fixed &);
		~Fixed();
		int getRawBits(void)const;
		void setRawBits(int const raw);
		float toFloat(void)const;
		int toInt(void)const;
};

std::ostream& operator<<(std::ostream&, Fixed& obj);
std::ostream& operator<<(std::ostream&, const Fixed& obj);
