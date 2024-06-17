#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string.h>
# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{
	public:
		PhoneBook();

		void	add_contact(Contact contact);
		void	display() const;
		Contact get_contact (int index) const;
		int		get_count() const;
		bool	is_full () const;


	private:
		Contact _contacts[MAX_CONTACTS];
		int		_cursor;
		int		_count;
};

#endif