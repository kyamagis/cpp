/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/11 19:29:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>


class	Data
{
	private:
		std::string		infile_name;
		std::ifstream	ifs;
		std::string		outfile_name;
		std::ofstream	ofs;
		std::string		from_str;
		std::string		to_str;

	public :
		Data();
		Data(std::string _infile_name, std::string _from_str, std::string _to_str);
		~Data();

		bool				detect_open_fail();
		void				replace();
};

/* 

std::string const	&getType() const;
2nd const guarantee not chage argument 

void	f(char &c)
{
	c = 'p';
}

void	F(char *c)
{
	*c = 'p';
}

int		main()
{
	char	c = 'x';
	f(c);
	F(&c);
} */


#endif