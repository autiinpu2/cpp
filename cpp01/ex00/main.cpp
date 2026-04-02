/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 16:24:23 by apuyane           #+#    #+#             */
/*   Updated: 2026/04/02 19:06:38 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie z1("sami");
	
	Zombie *z2 = newZombie("scoubii");

	Zombie z3;
	z3.randomChump("test");
	
	z1.announce();
	z2->announce();
	z3.announce();
	
	delete z2;
	return 0;
}
