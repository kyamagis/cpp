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

#include "../includes/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	inputed_str;

	for(;;)
	{
		std::cout << "accept only ADD, SEARCH or EXIT>> ";
		std::cin >> inputed_str;
		if (std::cin.eof() || inputed_str == "EXIT")
			return (0);
		if (inputed_str == "ADD")
			phonebook.add();
		else if (inputed_str == "SEARCH")
			phonebook.search();
		else
			std::cout << "\x1b[31mInvalid input\033[m" << "\n";
	}
	return (0);
}
