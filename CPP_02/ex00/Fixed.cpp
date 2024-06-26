/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 09:26:34 by mbartos           #+#    #+#             */
/*   Updated: 2024/05/29 13:32:07 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& oldObj) {
	std::cout << "Copy constructor called" << std::endl;
	fixedPointValue = oldObj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& oldObj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &oldObj)
		fixedPointValue = oldObj.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called." << std::endl;
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fixedPointValue = raw;
}