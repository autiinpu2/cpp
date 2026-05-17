/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:33:32 by apuyane           #+#    #+#             */
/*   Updated: 2026/05/13 23:14:03 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <ostream>
#include <string>


class	Weapon
{
	private:
		std::string _type;
	public:
		std::string	getType();
		void	setType(std::string type);
		Weapon(std::string type);
		Weapon();
};

#endif