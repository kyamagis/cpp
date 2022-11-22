/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:54:32 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/08 16:11:01 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "\n" << "Each memory address." << "\n";
	std::cout << std::setw(21) << "str address = ";std::cout << &str << "\n";
	std::cout << std::setw(21) << "stringPTR address = ";std::cout << stringPTR << "\n";
	std::cout << std::setw(21) << "stringREF address = ";std::cout << &stringREF << "\n";

	std::cout << "\n" << "Each variable." << "\n";
	std::cout << std::setw(21) << "str variable = ";std::cout << str << "\n";
	std::cout << std::setw(21) << "stringPTR variable = ";std::cout << *stringPTR << "\n";
	std::cout << std::setw(21) << "stringREF variable = ";std::cout << stringREF << "\n";

	return (0);
}
