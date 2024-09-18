 ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:05:13 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:05:13 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <main.h>

Base* generate()
{
    srand(static_cast<unsigned int>(time(0)));
    int random = rand() % 3;

    switch (random)
	{
        case 0:
            std::cout << GREEN << "Generated instance of A" << RESET << std::endl;
            return new A;
        case 1:
            std::cout << GREEN << "Generated instance of B" << RESET << std::endl;
            return new B;
        case 2:
            std::cout << GREEN << "Generated instance of C" << RESET << std::endl;
            return new C;
        default:
            return NULL;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << YELLOW << "Pointer type: A" << RESET << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << YELLOW << "Pointer type: B" << RESET << std::endl;
    else if (dynamic_cast<C*>(p))
  		std::cout << YELLOW << "Pointer type: C" << RESET << std::endl;
    else
  		std::cout << YELLOW << "Unknown type" << RESET << std::endl;
}

void identify(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << YELLOW << "Reference type: A" << RESET << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << YELLOW << "Reference type: B" << RESET << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << YELLOW << "Reference type: C" << RESET << std::endl;
    else
        std::cout << YELLOW << "Unknown" << RESET << std::endl;
}
