/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:10:52 by apuyane           #+#    #+#             */
/*   Updated: 2026/05/07 14:48:12 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook()
{
	this->nb_contacts = 0;
}

bool	is_digit(std::string string)
{
	for (int j = 0;string[j];j++) {
		if (!std::isdigit(string[j]))
			return (false);
	}
	return (true);
}

int Phonebook::get_nb_contacts()
{
	return (this->nb_contacts);
}

void Phonebook::add_contact()
{
	Contact new_contact;
	std::string str;

	std::cout << "\033[32mEnter first name : ";
	std::getline(std::cin, str);
	if (str == "") {
		std::cout << "\033[31mYou cannot have empty fields" << std::endl;
		return ;
	}
	new_contact.set_first_name(str);
	std::cout << "\033[32mEnter last name : ";
	std::getline(std::cin, str);
	if (str == "") {
		std::cout << "\033[31mYou cannot have empty fields" << std::endl;
		return ;
	}
	new_contact.set_last_name(str);
	std::cout << "\033[32mEnter nickname : ";
	std::getline(std::cin, str);
	if (str == "") {
		std::cout << "\033[31mYou cannot have empty fields" << std::endl;
		return ;
	}
	new_contact.set_nickname(str);
	std::cout << "\033[32mEnter phone_number : ";
	std::getline(std::cin, str);
	if (str == "") {
		std::cout << "\033[31mYou cannot have empty fields" << std::endl;
		return ;
	}
	new_contact.set_phone_number(str);
	std::cout << "\033[90mEnter darkest_secret : ";
	std::getline(std::cin, str);
	if (str == "") {
		std::cout << "\033[31mYou cannot have empty fields" << std::endl;
		return ;
	}
	new_contact.set_darkest_secret(str);
	this->contacts[this->nb_contacts % 8] = new_contact;
	this->nb_contacts++;
}

std::string	formatColumn(std::string value)
{
	if (value.length() > 10)
		return value.substr(0, 9) + ".";
	else
		return value;
}

void	Phonebook::display_contacts()
{
	std::string str;
	Contact *contact = this->contacts;
	
	if (this->get_nb_contacts() == 0) {
		std::cout << "\033[31mYou can't search for contacts before adding any of them" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << std::right << "Index" << "|"
              << std::setw(10) << std::right << "First Name" << "|"
              << std::setw(10) << std::right << "Last Name" << "|"
              << std::setw(10) << std::right << "Nickname" << "|" << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << std::setw(10) << std::right << i << "|"
                  << std::setw(10) << std::right << formatColumn(contact[i].get_first_name()) << "|"
                  << std::setw(10) << std::right << formatColumn(contact[i].get_last_name()) << "|"
                  << std::setw(10) << std::right << formatColumn(contact[i].get_nickname()) << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
    }
	std::cout << "\033[32mEnter Index : ";
	std::getline(std::cin, str);
	if (is_digit(str.c_str()) == false) {
		std::cout << "\033[31mEnter an integer vaue" << std::endl;
		return ;
	}
	int index = atoi(str.c_str());
	if (index > this->get_nb_contacts() - 1 || index < 0)
		std::cout << "\033[31mEnter a value in the range [0 - " << (this->get_nb_contacts() <= 8 ? this->get_nb_contacts() - 1 : 8) << "] : " << std::endl;
	else
	{
		std::cout << "\033[32mIndex : " << index << std::endl;
		std::cout << "\033[32mFirst Name : " << contact[index].get_first_name() << std::endl;
		std::cout << "\033[32mLast Name : " << contact[index].get_last_name() << std::endl;
		std::cout << "\033[32mNickname : " << contact[index].get_nickname() << std::endl;
		std::cout << "\033[32mPhone number : " << contact[index].get_phone_number() << std::endl;
	}
}
