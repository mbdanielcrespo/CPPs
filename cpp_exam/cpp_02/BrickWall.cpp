/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:45:49 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 22:45:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BrickWall .hpp>

BrickWall ::BrickWall () : ATarget("Inconspicuous Red-brick Wall") {}
BrickWall ::~BrickWall () {}
ATarget* BrickWall ::clone(void) const {return (new BrickWall ());}