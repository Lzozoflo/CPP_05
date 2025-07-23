/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:51:20 by fcretin           #+#    #+#             */
/*   Updated: 2025/07/23 13:25:18 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Bureaucrat::Bureaucrat( void )	:	_Name("steve"), _Grade(150){}
Bureaucrat::Bureaucrat( const Bureaucrat &other )	:	_Name(other._Name), _Grade(other._Grade){}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &other )
{
	if (this != &other){
		// this->_Name = other._Name; // const
		this->_Grade = other._Grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat( void ){}

/*---------------constructor------Canonical-------destructor----------------*/

Bureaucrat::Bureaucrat( std::string &name, int grade )	:	_Name(name), _Grade(grade){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException("Grade too high.");
}

/*------func------*/


int Bureaucrat::getGrade() const {return (this->_Grade);}
const std::string Bureaucrat::getName() const {return (this->_Name);}


void Bureaucrat::upGrade(int value)
{
	int res = this->_Grade - value;
	if (res <= 0)
		throw Bureaucrat::GradeTooHighException("Grade too high.");
	this->_Grade = res;
}


void Bureaucrat::downGrade(int value)
{
	int res = this->_Grade + value;
	if (res > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_Grade = res;
}


void Bureaucrat::signForm( AForm *f)
{
	f->beSigned(*this);
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);

		std::cout << this->_Name <<" exectued " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}


/*------func------*/


std::ostream& operator<<( std::ostream &refo , Bureaucrat &employee )
{
	refo <<  employee.getName() << ", bureaucrat grade " << employee.getGrade();
	return refo;
}
