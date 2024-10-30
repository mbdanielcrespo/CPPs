/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:14:26 by marvin            #+#    #+#             */
/*   Updated: 2024/10/30 00:14:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ATarget.hpp>
#include <map>

class TargetGenerator
{
	private:
		std::map<std::string, ATarget*> _targets;
		TargetGenerator(const TargetGenerator& cp);
		TargetGenerator&operator=(const TargetGenerator& cp);
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);
		void forgetTargetType(string const &);
		ATarget* createTarget(string const &);
};
