/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:07:45 by apuyane           #+#    #+#             */
/*   Updated: 2026/04/01 21:06:12 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class Phonebook
{
	private:
		Contact	contacts[8];
		int		nb_contacts;
	public:
		int		get_nb_contacts();
		void 	add_contact();
		void	display_contacts();
};

#endif
