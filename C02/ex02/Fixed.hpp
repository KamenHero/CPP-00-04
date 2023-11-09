/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:31:03 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/23 18:54:25 by oryadi           ###   ########.fr       */
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
		Fixed operator+(const Fixed &obj)const;
		Fixed operator*(const Fixed &obj)const;
		Fixed operator/(const Fixed &obj)const;
		Fixed operator-(const Fixed &obj)const;
		Fixed operator++(void);
		Fixed operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		bool operator>(Fixed&);
		bool operator<(Fixed&);
		bool operator>=(Fixed&);
		bool operator<=(Fixed&);
		bool operator==(Fixed&);
		bool operator!=(Fixed&);
		~Fixed();
		int getRawBits(void)const;
		void setRawBits(int const raw);
		float toFloat(void)const;
		int toInt(void)const;
		static Fixed & max(Fixed& a, Fixed& b);
		static const Fixed & max(const Fixed& a, const Fixed& b);
		static Fixed & min(Fixed& a, Fixed& b);
		static const Fixed & min(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream&, Fixed& obj);
std::ostream& operator<<(std::ostream&, const Fixed& obj);
