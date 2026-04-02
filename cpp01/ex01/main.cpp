/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 16:24:23 by apuyane           #+#    #+#             */
/*   Updated: 2026/04/02 19:01:13 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	int n = 33;
	Zombie *z3 = zombieHorde(n, "HORDE");
	for (int i = 0; i < n; i++)
	{
		z3[i].announce();
	}
	delete[] z3;
	return 0;
}
