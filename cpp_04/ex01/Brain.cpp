/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:00 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 13:10:00 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(void)
{
	std::cout << GREEN << "Brain default constructor called!" << RESET << std::endl;
}

Brain::Brain(Brain& cp)
{
	std::cout << GREEN << "Brain copy constructor called!" << RESET << std::endl;
	*this = cp;
}

Brain& Brain::operator=(const Brain& cp)
{
    std::cout << GREEN << "Brain assignment operator called!" << RESET << std::endl;
    if (this != &cp)
    {
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = cp.ideas[i];
    }
    return *this;
}

Brain::~Brain(void)
{
	std::cout << RED << "Brain default destructor called!" << RESET << std::endl;
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "Blip Blip ... Mental Breakdown xP";
}
