/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 21:38:21 by apuyane           #+#    #+#             */
/*   Updated: 2026/05/17 21:59:10 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

int main( int ac, char **av )
{
    Harl harl;

    if (ac != 2)
        return 1;
    std::cout << "--- Testing ---" << std::endl;
    harl.complain(av[1]);
    std::cout << "--- Test Done ---" << std::endl;

    return 0;
}
