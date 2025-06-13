/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:33:43 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/13 09:09:51 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>

class AForm;
class Intern
{
	private:
	// {
		/*------Func------*/
		AForm *makePresidentialPardonForm( std::string &target);
		AForm *makeRobotomyRequestForm( std::string &target);
		AForm *makeShrubberyCreationForm( std::string &target);
	// }
	public:
	// {
		Intern( void );						//Canonical
		Intern( const Intern &other );					//Canonical
		Intern &operator=( const Intern &other );			//Canonical
		~Intern( void );									//Canonical


		/*------Constructor------*/


		/*------Func------*/
		AForm *makeForm( std::string &name, std::string &target);


		/*------Exceptions------*/
		class  ParameterDoesntExist : public std::exception
		{
			public:
			const char* what() const throw() {
				return "This type of form doesn't exist.";
			}
		};

	// }
};

std::ostream& operator<<( std::ostream &refo , Intern *employee );

#endif
