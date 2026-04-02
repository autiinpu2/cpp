/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 16:20:58 by apuyane           #+#    #+#             */
/*   Updated: 2026/04/02 18:58:22 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <cstdlib>

class	Zombie
{
	private:
		std::string name;
	public:
		void	announce(void);
		void	randomChump( std::string name );
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	set_name(std::string name);
	};

Zombie	*newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif
