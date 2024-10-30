/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:18:53 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 13:18:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dummy.hpp>

Dummy::Dummy() : ATarget("Target Practice Dummy") {}
Dummy::~Dummy() {}
ATarget* Dummy::clone(void) const {return (new Dummy());}