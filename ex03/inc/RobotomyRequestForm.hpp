/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:05:21 by fcretin           #+#    #+#             */
/*   Updated: 2025/07/02 16:11:10 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"
class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
	private:
	// {

		RobotomyRequestForm( void );												//Canonical
		RobotomyRequestForm( const RobotomyRequestForm &other );					//Canonical
		RobotomyRequestForm &operator=( const RobotomyRequestForm &other );			//Canonical

	// }
	public:
	// {

		virtual ~RobotomyRequestForm( void );										//Canonical

		/*------Constructor------*/
		RobotomyRequestForm( std::string &target);
		void executeAction(Bureaucrat const & executor) const;
		void executeAction() const;


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
