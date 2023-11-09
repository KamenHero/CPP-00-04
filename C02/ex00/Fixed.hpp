/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <oryadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:26:39 by oryadi            #+#    #+#             */
/*   Updated: 2023/10/18 17:10:52 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int x;
		static const int x2 = 8;
	public:
		Fixed();
		Fixed(const Fixed &);
		Fixed & operator=(const Fixed &);
		~Fixed();
		int getRawBits(void)const;
		void setRawBits(int const raw);
};
