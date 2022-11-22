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

#include "../includes/Data.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
	{	
		std::cout << "Invalid argument" << "\n";
		return 1;
	}

	Data	data((std::string)argv[1], (std::string)argv[2], (std::string)argv[3]);
	if (!data.detect_open_fail())
		return 1;
	data.replace();
	return (0);
}
