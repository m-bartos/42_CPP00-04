/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:30:57 by mbartos           #+#    #+#             */
/*   Updated: 2024/07/17 13:46:03 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	{
		std::cout << "------------------" << std::endl;

		Intern intern;
		AForm* form;

		try
		{
			form = intern.makeForm("PresidentialPardonForm", "Target1");
			delete form;

			form = intern.makeForm("RobotomyRequestForm", "Target2");
			delete form;

			form = intern.makeForm("ShrubberyCreationForm", "Target3");
			delete form;

			form = intern.makeForm("UnknownForm", "Target4");
			delete form;
		}
		catch (std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		std::cout << "------------------" << std::endl;
	}
	{
		std::cout << "------------------" << std::endl;
		try
		{
			Intern intern;
			AForm* form;

			Bureaucrat plebAli = Bureaucrat("Ali", 1);
			form = intern.makeForm("ShrubberyCreationForm", "Target3");

			std::cout << plebAli << std::endl;
			std::cout << *form << std::endl;

			plebAli.signForm(*form);
			std::cout << *form << std::endl;
			plebAli.executeForm(*form);

			delete form;
		}
		catch (std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		std::cout << "------------------" << std::endl;
	}

	return (0);
}