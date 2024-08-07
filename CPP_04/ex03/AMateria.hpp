/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:17:06 by mbartos           #+#    #+#             */
/*   Updated: 2024/07/05 14:05:45 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {

protected:
	std::string	type;
	bool		isEquipped;

public:
	AMateria();
	AMateria(const AMateria&);
	AMateria& operator=(const AMateria&);
	AMateria(std::string const & type);
	virtual ~AMateria();

	void setIsEquipped(bool value);
	bool getIsEquipped();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif