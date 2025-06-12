/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:33:43 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/12 15:20:39 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP


#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"
class Bureaucrat;

class AForm
{
	private:
	// {

		const std::string	_Name;
		const int			_SignGrade;
		const int			_ExecGrade;
		bool				_Signed; //0 is unsigned, 1signed

		AForm( void );						//Canonical
		AForm( const AForm &other );					//Canonical
		AForm &operator=( const AForm &other );			//Canonical

	// }
	public:
	// {
		virtual ~AForm( void );									//Canonical


		/*------Constructor------*/
		AForm( std::string name, int beSigned, int beExec);
		// AForm( std::string &name, int beSigned, int beExec);


		/*------Func------*/
		std::string getName()const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getSigned()const;
		void beSigned(const Bureaucrat &employee);
		virtual void execute(Bureaucrat const & executor) const;
		virtual void executeAction(Bureaucrat const & executor) const = 0;


		/*------Exceptions------*/
		class FormNotSignedExeception : public std::exception
		{
			public:
			const char* what() const throw() {
				return "Unable to execute, the form has not been signed.";
			}
		};

		class GradeTooHighException : public std::exception
		{
			public:
			const char* what() const throw() {
				return "Grade too high.";
			}
		};

		class GradeTooLowException : public std::exception
		{
			public:
			const char* what() const throw() {
				return "Grade too low.";
			}
		};

	// }
};

std::ostream& operator<<( std::ostream &refo , AForm *employee );

#endif
