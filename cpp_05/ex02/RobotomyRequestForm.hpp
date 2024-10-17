/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:55:15 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 21:55:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <AForm.hpp>


class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& cp);
		RobotomyRequestForm(const RobotomyRequestForm& cp);
		~RobotomyRequestForm();

		RobotomyRequestForm(const std::string& target);

		virtual void executeAction() const;
};
