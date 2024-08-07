/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:54:50 by mbartos           #+#    #+#             */
/*   Updated: 2024/07/08 13:15:48 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	
public:
	Animal();
	Animal(const Animal&);
	Animal& operator=(const Animal&);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;
	virtual void printBrainAdress() const;

protected:
	std::string type;
};


#endif