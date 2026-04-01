/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 10:46:49 by apuyane           #+#    #+#             */
/*   Updated: 2025/11/30 11:36:01 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac < 2)
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int j = 1;av[j];j++) {
		for (int i = 0; i < (int)strlen(av[j]); i++)
		{
			std::cout << (char)toupper(av[j][i]);
		}
	}
	std::cout << '\n';
}
