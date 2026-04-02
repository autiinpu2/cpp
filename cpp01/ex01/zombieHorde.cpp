/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 18:59:09 by apuyane           #+#    #+#             */
/*   Updated: 2026/04/02 18:59:25 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *tab = new Zombie[N];
	for (int i = 0; i < N; i++)
		tab[i].set_name(name);
	return tab;
}
