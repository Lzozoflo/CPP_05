/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:12:21 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/08 16:36:29 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

AForm::AForm( void ) : _Name("Random Aform"), _SignGrade(150), _ExecGrade(150), _Signed(false)
{}

AForm::AForm( const AForm &other ) : _Name(other._Name), _SignGrade(other._SignGrade), _ExecGrade(other._ExecGrade), _Signed(other._Signed)
{}

AForm &AForm::operator=( const AForm &other )
{
	if (this != &other)
	{
		this->_Signed = other._Signed;
	}
	return (*this);
}

AForm::~AForm( void )
{}


/*---------------constructor------Canonical-------destructor----------------*/


/*------Constructor------*/

AForm::AForm( std::string name, int beSigned, int beExec) : _Name(name), _SignGrade(beSigned), _ExecGrade(beExec), _Signed(false)
{}


/*------Constructor------*/


/*------Func------*/

std::string AForm::getName()const {return (this->_Name);}
int AForm::getSignGrade()const {return (this->_SignGrade);}
int AForm::getExecGrade()const {return (this->_ExecGrade);}
bool AForm::getSigned()const {return (this->_Signed);}

void AForm::beSigned(const Bureaucrat &employee)
{
	if (employee.getGrade() <= this->_SignGrade)
	{
		this->_Signed = true;
		std::cout << employee.getName() << " signed " << this->_Name << std::endl;
	}
	else
	{
		std::cout << employee.getName() << " couldn't sign " << this->_Name << " because ";
		throw AForm::GradeTooLowException();
	}

}

// void AForm::execute(Bureaucrat const & executor) const
// {
// 	(void)executor;
// }


/*------Func------*/



std::ostream& operator<<( std::ostream &refo , AForm *f )
{
	if (f->getSigned() == true){
		refo << "Form Name '" << f->getName() << "' SignGrade '" << f->getSignGrade() << "' ExecGrade '" << f->getExecGrade() << "' Signed";
	} else {
		refo << "Form Name " << f->getName() << " SignGrade " << f->getSignGrade() << " ExecGrade " << f->getExecGrade() << " not Signed";
	}
	return refo;
}
