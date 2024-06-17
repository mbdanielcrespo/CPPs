#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string.h>
# include <iomanip>


class Contact 
{
	public:
		Contact();
	    //~Contact();
    	//Contact(const Contact &other);
    	//Contact& operator=(const Contact &other);
		Contact (
			std::string first_name,
			std::string last_name,
			std::string nickname,
			std::string phone_number,
			std::string darkest_secret
		);

		static Contact	add_contact();
		void			display() const;

	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};



#endif