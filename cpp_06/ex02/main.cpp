/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:05:30 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:05:32 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>

int main()
{
    Base* ptr = generate();

    identify(ptr);

    if (ptr)
        identify(*ptr);

    delete ptr;

    return 0;
}
