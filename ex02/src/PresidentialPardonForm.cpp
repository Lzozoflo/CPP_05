/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:12:21 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/08 13:47:19 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("Random PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &other ) : AForm(other.getName(), 25, 5)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &other )
{
	if (this != &other)
	{
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{}


/*---------------constructor------Canonical-------destructor----------------*/


/*------Constructor------*/

PresidentialPardonForm::PresidentialPardonForm( std::string target) : AForm(target, 25, 5) {}

/*------Constructor------*/


/*------Func------*/


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSigned() == false)
		throw AForm::FormNotSignedExeception();
	else
		std::cout << "Informs that " << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/*------Func------*/
