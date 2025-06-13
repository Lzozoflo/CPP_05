/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/13 09:10:14 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"



#include <iostream>

int main()
{

	try
	{
		std::string traget = "corrector";
		std::string str = "shrubbery crean";
		// std::string str = "shrubbery creation";
		// std::string str = "robotomy request";
		// std::string str = "presidential pardon";
		Intern internform;
		AForm *tmp = internform.makeForm(str, traget);
		Bureaucrat bob(traget, 3);
		bob.signForm(tmp);
		tmp->execute(bob);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n------------scf------------\n" << std::endl;

	// try
	// {
		// 	throw Bureaucrat::GradeTooHighException();
		// }
		// catch (const std::exception &e)
		// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << "\n------------scf------------\n" << std::endl;

	// try
	// {
	// 	throw Bureaucrat::GradeTooLowException();
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// try
	// {

	// 	// std::string strf = "name";
	// 	// Form f(strf, 149, 142);
	// 	std::string strb = "mama";
	// 	Bureaucrat bob(strb, 150);
	// 	std::cout << bob << std::endl;
	// 	bob.upGrade(1);
	// 	// bob.signForm(f);
	// 	// std::cout << f<< std::endl;
	// 	bob.upGrade(1);
	// 	std::cout << bob<< std::endl;
	// 	bob.downGrade(2);
	// 	std::cout << bob<< std::endl;
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << "\n------------scf------------\n" << std::endl;

	// try
	// {
	// 	std::string strbob = "bob";
	// 	AForm *scf = new ShrubberyCreationForm(strbob); // 145Sign . 137Exec
	// 	Bureaucrat bob(strbob, 136);
	// 	bob.signForm(scf);
	// 	scf->execute(bob);

	// 	delete scf;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << '\n';
	// }

	// std::cout << "\n------------rrf------------\n" << std::endl;

	// try
	// {
	// 	std::string strbob = "bob";
	// 	AForm *rrf = new RobotomyRequestForm(strbob); // 72Sign . 45Exec
	// 	Bureaucrat bob(strbob, 44);
	// 	bob.signForm(rrf);
	// 	rrf->execute(bob);

	// 	delete rrf;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << '\n';
	// }

	// std::cout << "\n------------ppf------------\n" << std::endl;

	// try
	// {
	// 	std::string strbob = "bob";
	// 	AForm *ppf = new PresidentialPardonForm(strbob); // 25Sign . 5Exec
	// 	Bureaucrat bob(strbob, 5);
	// 	bob.signForm(ppf);
	// 	ppf->execute(bob);

	// 	delete ppf;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << '\n';
	// }

}

// int main()
// {
// 	return 0;
// }
