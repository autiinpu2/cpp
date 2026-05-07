/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:07:45 by apuyane           #+#    #+#             */
/*   Updated: 2026/05/06 21:21:25 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>

class Phonebook
{
	private:
		Contact	contacts[8];
		int		nb_contacts;
	public:
		Phonebook();
		int		get_nb_contacts();
		void 	add_contact();
		void	display_contacts();
};

#endif
