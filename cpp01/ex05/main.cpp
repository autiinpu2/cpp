/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuyane <apuyane@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 21:38:21 by apuyane           #+#    #+#             */
/*   Updated: 2026/05/17 21:41:34 by apuyane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

int main( void )
{
    Harl harl;

    std::cout << "--- Testing DEBUG level ---" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "--- Testing INFO level ---" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "--- Testing WARNING level ---" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "--- Testing ERROR level ---" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "--- Testing UNKNOWN level (Should do nothing) ---" << std::endl;
    harl.complain("UNKNOWN");
    harl.complain("");
    harl.complain("debug"); // Testing case sensitivity
    std::cout << "--- End of tests ---" << std::endl;

    return 0;
}
