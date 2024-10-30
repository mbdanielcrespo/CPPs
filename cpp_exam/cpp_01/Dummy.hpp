/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:49:37 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 12:49:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ATarget.hpp>

class Dummy : public ATarget
{
public:
	Dummy();
	~Dummy();

	ATarget* clone(void) const;
};