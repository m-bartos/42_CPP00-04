/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:58:35 by mbartos           #+#    #+#             */
/*   Updated: 2024/07/05 15:04:00 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

#define FLOOR_SIZE 42


class Character : public ICharacter{

	private:
		AMateria*			inventory[4];
		std::string			name;
		static AMateria*	floor[FLOOR_SIZE];

	public:
		Character();
		Character(const Character&);
		Character& operator=(const Character&);
		~Character();
		Character(std::string name);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		static void clearFloor();
};

#endif