/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:04:25 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/12 15:13:26 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"
class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
{
	private:
	// {

		PresidentialPardonForm( void );												//Canonical
		PresidentialPardonForm( const PresidentialPardonForm &other );				//Canonical
		PresidentialPardonForm &operator=( const PresidentialPardonForm &other );		//Canonical
		~PresidentialPardonForm( void );												//Canonical

	// }
	public:
	// {


		/*------Constructor------*/
		PresidentialPardonForm( std::string &target);
		void executeAction(Bureaucrat const & executor) const;


		/*------Func------*/


		/*------Exceptions------*/
		// class GradeTooHighException : public std::exception
		// {
		// 	public:
		// 	const char* what() const throw() {
		// 		return "Grade too high.";
		// 	}
		// };


		// class GradeTooLowException : public std::exception
		// {
		// 	public:
		// 	const char* what() const throw() {
		// 		return "Grade too low.";
		// 	}
		// };


	// }
};


#endif
