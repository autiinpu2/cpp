/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:41:57 by apuyane           #+#    #+#             */
/*   Updated: 2026/05/13 23:15:46 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType()
{
	return  this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
