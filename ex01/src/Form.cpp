/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:12:21 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/12 15:11:02 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Form::Form( void ) : _Name("Random form"), _SignGrade(150), _ExecGrade(150), _Signed(false)
{}

Form::Form( const Form &other ) : _Name(other._Name), _SignGrade(other._SignGrade), _ExecGrade(other._ExecGrade), _Signed(other._Signed)
{}

Form &Form::operator=( const Form &other )
{
	if (this != &other)
	{
		this->_Signed = other._Signed;
	}
	return (*this);
}

Form::~Form( void )
{}


/*---------------constructor------Canonical-------destructor----------------*/


/*------Constructor------*/

Form::Form( std::string &name, int beSigned, int beExec) : _Name(name), _SignGrade(beSigned), _ExecGrade(beExec), _Signed(false)
{}


/*------Constructor------*/


/*------Func------*/

std::string Form::getName()const {return (this->_Name);}
int Form::getSignGrade()const {return (this->_SignGrade);}
int Form::getExecGrade()const {return (this->_ExecGrade);}
bool Form::getSigned()const {return (this->_Signed);}

void Form::beSigned(const Bureaucrat &employee)
{
	if (employee.getGrade() <= this->_SignGrade)
	{
		this->_Signed = true;
		std::cout << employee.getName() << " signed " << this->_Name << std::endl;
	}
	else
	{
		std::cout << employee.getName() << " couldn't sign " << this->_Name << " because ";
		throw Form::GradeTooLowException();
	}

}

/*------Func------*/



std::ostream& operator<<( std::ostream &refo , Form &f )
{
	if (f.getSigned() == true){
		refo << "Form Name '" << f.getName() << "' SignGrade '" << f.getSignGrade() << "' ExecGrade '" << f.getExecGrade() << "' Signed";
	} else {
		refo << "Form Name " << f.getName() << " SignGrade " << f.getSignGrade() << " ExecGrade " << f.getExecGrade() << " not Signed";
	}
	return refo;
}
