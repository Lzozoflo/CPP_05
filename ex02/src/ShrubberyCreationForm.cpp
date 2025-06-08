/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:12:21 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/08 13:47:19 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("Random ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other ) : AForm(other.getName(), 145, 137)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
{
	if (this != &other)
	{
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{}


/*---------------constructor------Canonical-------destructor----------------*/


/*------Constructor------*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) : AForm(target, 145, 137) {}

/*------Constructor------*/


/*------Func------*/


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSigned() == false)
		throw AForm::FormNotSignedExeception();
	else
	{
	//	file creation and << putstream
	// 			<<                                   .         ;
	// 			<<      .              .              ;%     ;;
	// 			<<        ,           ,                :;%  %;
	// 			<<         :         ;                   :;%;'     .,
	// 			<<,.        %;     %;            ;        %;'    ,;
	// 			<<  ;       ;%;  %%;        ,     %;    ;%;    ,%'
	// 			<<   %;       %;%;      ,  ;       %;  ;%;   ,%;'
	// 			<<    ;%;      %;        ;%;        % ;%;  ,%;'
	// 			<<     `%;.     ;%;     %;'         `;%%;.%;'
	// 			<<      `:;%.    ;%%. %@;        %; ;@%;%'
	// 			<<         `:%;.  :;bd%;          %;@%;'
	// 			<<           `@%:.  :;%.         ;@@%;'
	// 			<<             `@%.  `;@%.      ;@@%;
	// 			<<               `@%%. `@%%    ;@@%;
	// 			<<                 ;@%. :@%%  %@@%;
	// 			<<                   %@bd%%%bd%%:;
	// 			<<                     #@%%%%%:;;
	// 			<<                     %@@%%%::;
	// 			<<                     %@@@%(o);  . '
	// 			<<                     %@@@o%;:(.,'
	// 			<<                 `.. %@@@o%::;
	// 			<<                    `)@@@o%::;
	// 			<<                     %@@(o)::;
	// 			<<                    .%@@@@%::;
	// 			<<                    ;%@@@@%::;.
	// 			<<                   ;%@@@@%%:;;;.
	// 			<<               ...;%@@@@@%%:;;;;,..
	}

	// ShrubberyCreationForm: Required grades: sign 145, exec 137
	// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
	// inside it.
}

/*------Func------*/
