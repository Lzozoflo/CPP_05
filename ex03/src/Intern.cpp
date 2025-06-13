/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:59:44 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/13 09:10:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void ){}
Intern::Intern( const Intern &other  ){	(void)other;}
Intern &Intern::operator=( const Intern &other )
{
	if (this != &other)
	{
		//...
	}
	return (*this);
}

Intern::~Intern( void ){}

AForm *Intern::makeShrubberyCreationForm( std::string &target)	{return (new ShrubberyCreationForm(target));}

AForm *Intern::makeRobotomyRequestForm( std::string &target)	{return (new RobotomyRequestForm(target));}

AForm *Intern::makePresidentialPardonForm( std::string &target)	{return (new PresidentialPardonForm(target));}



AForm *Intern::makeForm( std::string &name, std::string &target)
{

	std::string tab[] = { "shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(Intern::*functptr[])(std::string &) = { &Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm };
	for(int i = 0; i < 4; i++){
		if (name == tab[i]){
			AForm *tmp = (this->*functptr[i])(target);
			std::cout << "Intern creates "<< tmp->getName()<< std::endl;
			return (tmp);
		}
	}
	throw ParameterDoesntExist();
	return (NULL);
}
