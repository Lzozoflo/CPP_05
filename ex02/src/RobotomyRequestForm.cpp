/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:12:21 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/08 13:47:19 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

#include <ctime>
#include <cstdlib>

/*---------------constructor------Canonical-------destructor----------------*/

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("Random RobotomyRequestForm", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other ) : AForm(other.getName(), 72, 45)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &other )
{
	if (this != &other)
	{
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{}


/*---------------constructor------Canonical-------destructor----------------*/


/*------Constructor------*/

RobotomyRequestForm::RobotomyRequestForm( std::string target) : AForm(target, 72, 45) {}

/*------Constructor------*/


/*------Func------*/


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSigned() == false)
		throw AForm::FormNotSignedExeception();
	else
	{
		std::cout << "Makes some drilling noises." << std::endl;
		srand(time(0));
		int r = rand() % 2;
		if (r % 2 == 1)
			std::cout << this->getName() <<" has been robotomized successfully (50% of the time)." << std::endl;
		else
			std::cout << "The robotomy failed." << std::endl;
	}
	// RobotomyRequestForm: Required grades: sign 72, exec 45
	// Makes some drilling noises. Then, informs that <target> has been robotomized
	// successfully 50% of the time. Otherwise, informs that the robotomy failed.
}

/*------Func------*/
