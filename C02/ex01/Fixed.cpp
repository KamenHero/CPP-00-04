/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:14:57 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/21 16:45:33 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():x(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	x = i * (1 << x2);
}

Fixed::Fixed(const float i)
{
	std::cout << "Float constructor called" << std::endl;
	x = roundf(i * (1 << x2));
}

Fixed &Fixed::operator=(const Fixed &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->x = b.x;
	return *this;
}

Fixed::Fixed(const Fixed &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return x;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	x = raw;
}

float Fixed::toFloat(void) const
{
	float j = (float)x / (1 << x2);
	return j;
}

int Fixed::toInt(void) const
{
	int j = x >> x2;
	return j;
}

std::ostream& operator<<(std::ostream& os,Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
