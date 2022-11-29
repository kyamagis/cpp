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

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data	data;
	Data	*tmp = NULL;

	data.int_num = 42;
	data.double_num = 4.2;
	data.str = "tomarunjaneezo";
	tmp	= deserialize(serialize(&data));
	if (&data == tmp)
	{
		std::cout << "Match" << std::endl
				<< tmp->int_num << std::endl
				<< tmp->double_num << std::endl
				<< tmp->str << std::endl;
	}
	else
		std::cout << "Do not match" << std::endl;
	return 0;
}
