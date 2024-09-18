/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:07:53 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:07:55 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string.h>
#include <iomanip>

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
		bool 			isValid(void);

	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};
