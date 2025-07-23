/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:33:43 by fcretin           #+#    #+#             */
/*   Updated: 2025/07/23 13:28:39 by fcretin          ###   ########.fr       */
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
		bool				_Signed; //0/false is unsigned, 1/true signed

		AForm( void );									//Canonical
		AForm( const AForm &other );					//Canonical
		AForm &operator=( const AForm &other );			//Canonical

	// }
	public:
	// {
		virtual ~AForm( void );							//Canonical


		/*------Constructor------*/
		AForm( std::string name, int beSigned, int beExec);
		// AForm( std::string &name, int beSigned, int beExec); // & sometime is better sometimes not


		/*------Func------*/
		std::string getName()const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getSigned()const;
		void beSigned(const Bureaucrat &employee);
		virtual void execute(Bureaucrat const & executor) const;
		virtual void executeAction(Bureaucrat const & executor) const = 0;
		virtual void executeAction() const = 0;


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
			private:
				// {
				std::string message;
				// }
			public:
				//{

				// Constructeur qui prend un message personnalisé
				GradeTooHighException(const std::string& msg) : message(msg) {}
				virtual ~GradeTooHighException() throw() {}

				// Méthode what qui renvoie le message personnalisé
				virtual const char* what() const throw(){
					return message.c_str();

				}
				// }
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
