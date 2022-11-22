/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:42:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/10 12:28:34 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    contact_idx = 0;
    for (int i = 0; i < 8; i++)
        contact[i].init_member(i);
}

void	PhoneBook::set_contact_idx(int idx)
{
	contact_idx = idx;
}

int	PhoneBook::get_contact_idx(void)
{
	return (contact_idx);
}

Contact	PhoneBook::get_contact(int idx)
{
    return (contact[idx]);
}

void	PhoneBook::set_data_member(std::string	str, int idx, int member_num)
{
	std::string	input_str;

	std::cout << str; std::cin >> input_str;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	if (member_num == FIRST)
		contact[idx].set_first_name(input_str);
	else if (member_num == LAST)
		contact[idx].set_last_name(input_str);
	else if (member_num == NICK)
		contact[idx].set_nickname(input_str);
	else if (member_num == PHONE)
		contact[idx].set_phone_number(input_str);
	else if (member_num == SECRET)
		contact[idx].set_darkest_secret(input_str);
}

void	PhoneBook::add(void)
{
	int	idx = contact_idx;

	set_data_member("    first name>> ", idx, FIRST);
	set_data_member("     last name>> ", idx, LAST);
	set_data_member("      nickname>> ", idx, NICK);
	set_data_member("  phone number>> ", idx, PHONE);
	set_data_member("darkest secret>> ", idx, SECRET);
	contact_idx = (contact_idx + 1) % 8;
}

static void	put_cont(int space_num, std::string str)
{
	if (10 < str.length())
	{
		std::cout << std::setw(space_num) << str.substr(0, 9);
		std::cout << ".|";
		return ;
	}
	std::cout << std::setw(space_num) << str.substr(0, 10);
	std::cout << " |";
}

void	PhoneBook::put_idx_contact_member(int idx)
{
	std::cout << "\n";
	std::cout << "    first name: " << contact[idx].get_first_name() << "\n";
	std::cout << "     last name: "<< contact[idx].get_last_name()<< "\n";
	std::cout << "      nickname: "<< contact[idx].get_nickname()<< "\n";
	std::cout << "  phone number: "<< contact[idx].get_phone_number()<< "\n";
	std::cout << "darkest secret: " << contact[idx].get_darkest_secret()<< "\n";
}

void	PhoneBook::search_index_contact_member(void)
{
	std::string	input_str;
	std::cout << "\n";
	std::cout << "Search index: " ; std::cin >> input_str;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	if (input_str == "0")
		put_idx_contact_member(0);
	else if (input_str == "1")
		put_idx_contact_member(1);
	else if (input_str == "2")
		put_idx_contact_member(2);
	else if (input_str == "3")
		put_idx_contact_member(3);
	else if (input_str == "4")
		put_idx_contact_member(4);
	else if (input_str == "5")
		put_idx_contact_member(5);
	else if (input_str == "6")
		put_idx_contact_member(6);
	else if (input_str == "7")
		put_idx_contact_member(7);
	else
		std::cout << "\x1b[31mInvalid index\033[m" << "\n"; 
}

void	PhoneBook::search(void)
{
	std::cout << "\n";
	std::cout << " index | first name | last name |  nickname |" << "\n";
	for(int idx = 0; idx < 8; idx++)
	{
		std::cout << std::setw(6) << contact[idx].get_index() << " |";
		put_cont(11, contact[idx].get_first_name());
		put_cont(10, contact[idx].get_last_name());
		put_cont(10, contact[idx].get_nickname()); 
		std::cout << "\n";
	}
	search_index_contact_member();
	std::cout << "\n";
}
