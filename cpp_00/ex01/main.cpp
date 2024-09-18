/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:08:02 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:08:04 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>
#include <Contact.hpp>
#include <iostream>
#include <string.h>
#include <main.hpp>
#include <limits>

int	main()
{
	PhoneBook book = PhoneBook();
	std::string command = std::string();

	while (std::cin.good())
	{
		std::cout << "PhoneBook>";
		std::getline(std::cin, command);
		if (command == "ADD")
			book.add_contact(Contact::add_contact());
		else if (command == "SEARCH")
		{
			book.display();
			int contact_index = -1;
			std::cout << "Search for: ";

			std::cin >> contact_index;
			if (std::cin.fail())
            {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << RED << "Invalid input! " << RESET << std::endl;
					continue;
            }
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (contact_index < 0 || contact_index >= book.get_count())
				std::cout << RED << "Invalid contact index!" << RESET << std::endl;
			else
				book.get_contact(contact_index).display();
		}
		else if (command == "EXIT")
		{
			std::cout << GREEN << "Program exited successfully!" << RESET << std::endl;
			break;
		}
		else if (!command.empty())
			std::cout << RED << "Invalid Command!" << RESET << std::endl;

	}
	return 0;
}
