/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:21:09 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/08 14:48:52 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

static void	incrementGrade(Bureaucrat *b, int i)
{
	while (i > 0)
	{
		b->incrementGrade();
		i--;
	}
}

static void	decrementGrade(Bureaucrat *b, int i)
{
	while (i > 0)
	{
		b->decrementGrade();
		i--;
	}
}

int main()
{

	Form		apl("APL", 20, 10);
	Bureaucrat	bob("bob");

	std::cout << std::endl << "Formulaire: " << apl << "| sigend = " << apl.getSigned() << "| sGrade = " 
		<< apl.getSGrade() << "| xGrade = " << apl.getXGrade() << std::endl;
	std::cout << std::endl << bob << std::endl;
	std::cout << "Let's try to sign it " << std::endl;
	bob.signForm(apl);
	
	std::cout << std::endl << "increment bob's grade" << std::endl;
	incrementGrade(&bob, 131);
	std::cout << bob << std::endl;
	std::cout << "Let's try to sign it again" << std::endl;
	bob.signForm(apl);
	std::cout << std::endl;

	std::cout << std::endl << "decrement bob's grade" << std::endl;
        decrementGrade(&bob, 2);
        std::cout << bob << std::endl;
        std::cout << "Let's try to sign it again" << std::endl;
        bob.signForm(apl);
        std::cout << std::endl;


	return (0);
}
