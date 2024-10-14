/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:07:29 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 18:47:46 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstddef>
#include <Contact.hpp>
#include <main.hpp>

bool is_alphab(const std::string& str)
{
	int	i = 0;
	while (i < static_cast<int>(str.size()))
	{
		if (!std::isalpha(static_cast<unsigned char>(str[i])))
			return false;
		i++;
	}
	return true;
}

bool is_numeric(const std::string& str)
{
	int	i = 0;
	while (i < static_cast<int>(str.size()))
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return false;
		i++;
	}
	return true;
}

void get_valid_input(std::string& field, const std::string& prompt, bool (*validationFunc)(const std::string&), const std::string& errorMessage)
{
	while (true)
	{
		std::cout << prompt << std::endl;
		if (!std::getline(std::cin, field))
		{
			std::cerr << RED << "Input interrupted or EOF encountered!" << RESET << std::endl;
			std::cin.clear();
			return;
		}
		if (field.empty())
			std::cerr << RED << "You must input a non-empty string!" << RESET << std::endl;
		else if (!validationFunc(field))
			std::cerr << RED << errorMessage << RESET << std::endl;
		else
			break;
	}
}

bool always_true(const std::string&)
{
	return true;
}

bool is_valid_phone_number(const std::string& input)
{
	return is_numeric(input) && input.size() == 9;
}

bool Contact::isValid(void)
{
	if (this->first_name == "" || this->last_name == "")
		return (false);
	return (true);
}

Contact::Contact()
{
	first_name 		=	std::string ();
	last_name		=	std::string ();
	nickname		=	std::string();
	phone_number	=	std::string();
	darkest_secret		=	std::string();
	
}

Contact::Contact (std::string first_name,std::string last_name,std::string nickname,std::string phone_number,std::string darkest_secret) : 
	first_name (first_name),
	last_name (last_name),
	nickname (nickname),
	phone_number (phone_number),
	darkest_secret (darkest_secret)
{}

Contact Contact::add_contact()
{
	Contact res = Contact();
	get_valid_input(res.first_name, "Input first name:", is_alphab, "You must input only alphabetic characters!");
	get_valid_input(res.last_name, "Input last name:", is_alphab, "You must input only alphabetic characters!");
	get_valid_input(res.nickname, "Input nick name:",always_true, "");
	get_valid_input(res.phone_number, "Input phone number:", is_valid_phone_number, "You must input only numeric values and it must have 9 digits!");
	get_valid_input(res.darkest_secret, "Input darkest secret:", always_true, "");
	return res;
}

void Contact::display () const
{
	std::cout << first_name << " " << last_name << " (aka " << nickname << "): " << phone_number << std::endl;
}
