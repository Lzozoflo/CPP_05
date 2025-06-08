/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/08 13:48:27 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main()
{

	try
	{
		throw Bureaucrat::GradeTooHighException();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		throw Bureaucrat::GradeTooLowException();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		// Form f("name", 149, 142);
		Bureaucrat bob("bob", 150);
		std::cout << bob << std::endl;
		bob.upGrade(1);
		// bob.signForm(f);
		// std::cout << f<< std::endl;
		bob.upGrade(1);
		std::cout << bob<< std::endl;
		bob.downGrade(2);
		std::cout << bob<< std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}

// int main()
// {
// 	return 0;
// }
