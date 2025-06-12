/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:59:44 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/12 15:10:26 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void ){}
Intern::Intern( const Intern &other  ){}
Intern &Intern::operator=( const Intern &other )
{
	if (this != &other)
	{
		//...
	}
	return (*this);
}

Intern::~Intern( void ){}

Aform *Intern::makePresidentialPardonForm( std::string &target)	{return (new PresidentialPardonForm(target));}

Aform *Intern::makeRobotomyRequestForm( std::string &target)	{return (new );}

Aform *Intern::makeShrubberyCreationForm( std::string &target)	{return (new );}



Aform *Intern::makeForm( std::string &name, std::string &target)
{

	std::string tab[] = { "shrubbery creation", "robotomy request", "presidential pardon"};
	void (Intern::*functptr[])() = { &Intern::, &Intern::, &Intern:: };
}
