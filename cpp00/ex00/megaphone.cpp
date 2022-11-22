/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:26:12 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/10 13:02:27 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static  int	put_error(void)
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	return (1);
}

static	void	put_toupper_chr(char *str)
{
	for (size_t i = 0; str[i]; i++)
		std::cout << (char)toupper(str[i]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (put_error());
	for (size_t i = 1; argv[i]; i++)
		put_toupper_chr(argv[i]);
	std::cout << "\n";
	return (0);
}

/* $>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$> */