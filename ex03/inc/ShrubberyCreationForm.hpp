/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:05:26 by fcretin           #+#    #+#             */
/*   Updated: 2025/07/02 16:11:16 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"
class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
	private:
	// {

		ShrubberyCreationForm( void );												//Canonical
		ShrubberyCreationForm( const ShrubberyCreationForm &other );				//Canonical
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &other );		//Canonical

	// }
	public:
	// {

		virtual ~ShrubberyCreationForm( void );										//Canonical

		/*------Constructor------*/
		ShrubberyCreationForm( std::string &target);
		void executeAction(Bureaucrat const & executor) const;
		void executeAction() const;


		/*------Func------*/


		/*------Exceptions------*/
		class NotOpen : public std::exception
		{
			public:
			const char* what() const throw() {
				return "outfile doesn't open";
			}
		};
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
