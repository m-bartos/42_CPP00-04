/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:24:42 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/07 10:50:58 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:
	Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);
	~Dog();

	void makeSound() const;

private:
	Brain* brain;
};

#endif