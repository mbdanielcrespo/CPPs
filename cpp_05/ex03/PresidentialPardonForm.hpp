/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:55:22 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 21:55:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <AForm.hpp>


class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& cp);
		PresidentialPardonForm(const PresidentialPardonForm& cp);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm(const std::string& target);

		virtual void executeAction() const;
};
