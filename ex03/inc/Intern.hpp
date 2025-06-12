/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:33:43 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/12 15:08:34 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>

class Intern
{
	public:
	// {
		Intern( void );						//Canonical
		Intern( const Intern &other );					//Canonical
		Intern &operator=( const Intern &other );			//Canonical
		~Intern( void );									//Canonical


		/*------Constructor------*/


		/*------Func------*/
		Aform *makePresidentialPardonForm( std::string &target);
		Aform *makeRobotomyRequestForm( std::string &target);
		Aform *makeShrubberyCreationForm( std::string &target);
		Aform *makeForm( std::string &name, std::string &target);


		/*------Exceptions------*/
		// class FormNotSignedExeception : public std::exception
		// {
		// 	public:
		// 	const char* what() const throw() {
		// 		return "Unable to execute, the form has not been signed.";
		// 	}
		// };

	// }
};

std::ostream& operator<<( std::ostream &refo , Intern *employee );

#endif
