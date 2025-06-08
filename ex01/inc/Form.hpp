/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:33:43 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/08 11:17:25 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP


#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"
class Bureaucrat;

class Form
{
	private:
	// {

		const std::string	_Name;
		const int			_SignGrade;
		const int			_ExecGrade;
		bool				_Signed; //0 is unsigned, 1signed

		Form( void );									//Canonical
		Form( const Form &other );						//Canonical
		Form &operator=( const Form &other );			//Canonical

	// }
	public:
	// {

		~Form( void );									//Canonical


		/*------Constructor------*/
		Form( std::string name, int beSigned, int beExec);


		/*------Func------*/
		std::string getName()const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getSigned()const;
		void beSigned(const Bureaucrat &employee);


		/*------Exceptions------*/
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

std::ostream& operator<<( std::ostream &refo , Form &employee );

#endif
