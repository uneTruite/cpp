/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:20:15 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/29 16:16:44 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	availableCmd()
{
	std::cout << "- ADD x\t\tadd a new contact x\n- SEARCH x\tsearch x in repository\n- EXIT\t\tquit the program" << std::endl;
	std::cout << "phone_book: ";
}


int main()
{
	PhoneBook	repo;
	std::string	input;

	availableCmd();
	std::getline(std::cin, input);
	while (input != "EXIT")
	{
		if (input == "ADD")
			repo.add();
		else if (input == "SEARCH")
			repo.search();
		else if (input.size() != 0)
			std::cout << "!!! invalid command !!!" << std::endl;
		std::cout << "phone_book: ";
		std::getline(std::cin, input);
	}
	std::cout << "exit";
	return (0);
}
