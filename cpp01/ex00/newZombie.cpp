/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 18:18:00 by apuyane           #+#    #+#             */
/*   Updated: 2026/04/02 18:59:00 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(name);
	return new_zombie;
}
