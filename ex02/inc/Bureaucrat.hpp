/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:33:30 by fcretin           #+#    #+#             */
/*   Updated: 2025/07/02 13:42:53 by fcretin          ###   ########.fr       */
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

class Form;

class Bureaucrat
{
	private:
	// {
		const std::string	_Name;
		int					_Grade;


	// }
	public:
	// {

		Bureaucrat( void );									//Canonical
		Bureaucrat( const Bureaucrat &b );							//Canonical
		Bureaucrat &operator=( const Bureaucrat &b );				//Canonical
		~Bureaucrat( void );									//Canonical


		/*------Constructor------*/
		Bureaucrat( std::string &name, int grade );


		/*------func------*/
		const std::string	getName() const;
		int					getGrade() const;

		void				upGrade(int value);
		void				downGrade(int value);
		void				signForm( AForm *f);
		void				executeForm(AForm const & form);


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

			const char* what() const throw() {
				return "Grade too low.";
			}
		};

	// }
};

std::ostream& operator<<( std::ostream &refo , Bureaucrat &employee );

#endif
