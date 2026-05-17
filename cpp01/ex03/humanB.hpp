/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:33:32 by apuyane           #+#    #+#             */
/*   Updated: 2026/05/13 23:27:33 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>
#include "weapon.hpp"

class	HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		void	attack();
		void	setWeapon(Weapon &Weapon);
		HumanB(std::string name);
};
