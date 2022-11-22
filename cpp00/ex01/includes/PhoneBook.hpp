/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/10 12:12:05 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Contact.hpp"

#define FIRST 0
#define LAST 1
#define NICK 2
#define PHONE 3
#define SECRET 4

class	PhoneBook
{
	private:
		int		contact_idx;
		Contact contact[8];
	
	public :
		PhoneBook();

		void		set_contact_idx(int idx);
		int			get_contact_idx();
		Contact		get_contact(int idx);

		void		add();
		void		set_data_member(std::string	str, int idx, int member_num);

		void		search();
		void		put_idx_contact_member(int idx);
		void		search_index_contact_member();

};

#endif