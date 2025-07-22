/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:27:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/26 14:36:18 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"


class Bureaucrat
{
	private:
	// {
		const std::string	_Name;
		int					_Grade;


	// }
	public:
	// {

		/*------Canonical------*/
		Bureaucrat( void );
		Bureaucrat( const Bureaucrat &b );
		Bureaucrat &operator=( const Bureaucrat &b );
		~Bureaucrat( void );

		/*------Constructor------*/
		Bureaucrat( std::string &name, int grade );
		/*------func------*/
		const std::string getName() const;
		int getGrade() const;
		/*------func-bonus------*/
		void upGrade(int value);
		void downGrade(int value);
		/*------exceptions------*/
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
				virtual const char* what() const throw() {
					return "Grade too low.";
				}
		};


	// }
};

std::ostream& operator<<( std::ostream &refo , Bureaucrat &employee );

#endif
