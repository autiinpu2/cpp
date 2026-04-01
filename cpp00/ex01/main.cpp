/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:17:02 by apuyane           #+#    #+#             */
/*   Updated: 2026/04/01 21:53:22 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
	Phonebook	phonebook;
	std::string str;
	
	while(1) {
		std::cout << "\033[94mEnter your command : \033[0m";
		if (!std::getline(std::cin, str))
			break;
		if (str == "ADD")
			phonebook.add_contact();
		else if (str == "SEARCH")
			phonebook.display_contacts();
		else if (str == "EXIT")
			return (0);
		}
}
