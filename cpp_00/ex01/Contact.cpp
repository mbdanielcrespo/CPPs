#include <iostream>
#include <string>
#include <cctype>
#include <cstddef>
#include <Contact.hpp>
#include <main.hpp>

//int Contact::next_index = 0;

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

	while ((res.first_name.empty() && std::cin.good()) || !is_alphab(res.first_name))
	{
		std::cout << "Input first name:" << std::endl;
		std::getline(std::cin, res.first_name);
		if (res.first_name.empty())
			std::cerr << RED << "You must input a non-empty string!" << RESET << std::endl;
		else if (!is_alphab(res.first_name))
			std::cerr << RED << "You must input only alphabetic characters!" << RESET << std::endl;
	}
	while ((res.last_name.empty() && std::cin.good()) || !is_alphab(res.last_name))
	{
		std::cout << "Input last name:" << std::endl;
		std::getline(std::cin, res.last_name);
		if (res.last_name.empty())
			std::cerr << RED << "You must input a non-empty string!" << RESET << std::endl;
		else if (!is_alphab(res.last_name))
			std::cerr << RED << "You must input only alphabetic characters!" << RESET << std::endl;
	}
	while (res.nickname.empty() && std::cin.good())
	{
		std::cout << "Input nick name:" << std::endl;
		std::getline(std::cin, res.nickname);
		if (res.nickname.empty())
			std::cerr << RED << "You must input a non-empty string!" << RESET << std::endl;
	}
	while ((res.phone_number.empty() && std::cin.good()) || !is_numeric(res.phone_number) || (res.phone_number.size() != 9))
	{
		std::cout << "Input phone number:" << std::endl;
		std::getline(std::cin, res.phone_number);
		if (res.phone_number.empty())
			std::cerr << RED << "You must input a non-empty string!" << RESET << std::endl;
		else if (!is_numeric(res.phone_number))
			std::cerr << RED << "You must input only numeric values!" << RESET << std::endl;
		else if (res.phone_number.size() != 9)
			std::cerr << RED << "Your phone number hasn't the correct number of digits!" << RESET << std::endl;
	}
	while (res.darkest_secret.empty() && std::cin.good())
	{
		std::cout << "Input darkest secret:" << std::endl;
		std::getline(std::cin, res.darkest_secret);
		if (res.darkest_secret.empty())
			std::cerr << RED << "You must input a non-empty string!" << RESET << std::endl;
	}
	return res;
}


void Contact::display () const
{
	std::cout << first_name << " " << last_name << " (aka " << nickname << "): " << phone_number << std::endl;
}
