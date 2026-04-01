/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:22:27 by apuyane           #+#    #+#             */
/*   Updated: 2026/04/01 21:23:39 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"


void	Contact::set_first_name(std::string name)
{
	this->first_name = name;
}

void	Contact::set_last_name(std::string name)
{
	this->last_name = name;
}

void	Contact::set_nickname(std::string name)
{
	this->nickname = name;
}

void	Contact::set_phone_number(std::string number)
{
	this->phone_number = number;
}

void	Contact::set_darkest_secret(std::string secret)
{
	this->darkest_secret = secret;
}

std::string	Contact::get_first_name()
{
	return this->first_name;
}

std::string	Contact::get_last_name()
{
	return this->last_name;
}

std::string	Contact::get_nickname()
{
	return this->nickname;
}

std::string	Contact::get_phone_number()
{
	return this->phone_number;
}

std::string	Contact::get_darkest_secret()
{
	return this->darkest_secret;
}
