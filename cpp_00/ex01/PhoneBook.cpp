#include <iostream>
#include <string>
#include <cctype>
#include <cstddef>
#include <iomanip>
#include <PhoneBook.hpp>
#include <main.hpp>

PhoneBook::PhoneBook(): _cursor(0), _count(0)
{}

void PhoneBook::add_contact (Contact contact)
{
	if (_count >= MAX_CONTACTS)
	{
		if (_cursor >= MAX_CONTACTS)
			_cursor = 0;
		_contacts[_cursor] = contact;
		std::cout << YELLOW << "Contact added succesfully! index nº" << _cursor << " got truncated." << RESET << std::endl;
		_cursor += 1;
	}
	else
	{
		_contacts[_cursor] = contact;
		_count++;
		_cursor++;
		std::cout << GREEN << "Contact added succesfully!" << RESET << std::endl;
	}
}

static std::string truncate (const std::string &str, size_t size, const std::string &replace)
{
	if (str.length() > size)
		return str.substr(0, size - replace.length()) + replace;
	return str;
}

void PhoneBook::display() const
{
	static const char	*COLS[] = {
		"Index",
		"First name",
		"Last name",
		"Nickname"
	};
	for (int i = 0; i < 4; i += 1)
		std::cout << "|" << std::setw (10) << std::right << COLS[i];
	std::cout << "|" << std::endl;
	for (int i = 0; i < 4; i += 1)
		std::cout << "===========";
	std::cout << "=" << std::endl;
	for (int i = 0; i < _count; i += 1)
	{
		std::cout << "|" << std::setw (10) << std::right << i;
		std::cout << "|" << std::setw (10) << std::right << truncate (_contacts[i].first_name, 10, ".");
		std::cout << "|" << std::setw (10) << std::right << truncate (_contacts[i].last_name, 10, ".");
		std::cout << "|" << std::setw (10) << std::right << truncate (_contacts[i].nickname, 10, ".");
		std::cout << "|" << std::endl; 
	}
}

Contact PhoneBook::get_contact(int index) const
{
	if (index < 0 || index >= _count)
		return Contact();
	return _contacts[index];
}

int	PhoneBook::get_count() const
{
	return _count;
}

bool PhoneBook::is_full() const
{
	return (_count >= MAX_CONTACTS);
}