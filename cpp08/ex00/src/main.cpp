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

#include "../includes/easyfind.hpp"

int main( void ) 
{
	std::vector<int> vector_test;
	for (int i = 0; i < 44; i++)
		vector_test.push_back(i);

	{
		try
		{
			int num = 42;
			std::vector<int>::iterator iter = ::easyfind(vector_test, num);
		
			std::cout << *iter << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "------------------------" << std::endl;
	{
		try
		{
			int num = -1;
			std::vector<int>::iterator iter = ::easyfind(vector_test, num);
		
			std::cout << *iter << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::list<int> list_test;
	for (int i = 0; i < 44; i++)
		list_test.push_back(i);
	
	std::cout << "------------------------" << std::endl;
	{
		try
		{
			int num = 42;
			std::list<int>::iterator iter = ::easyfind(list_test, num);
		
			std::cout << *iter << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "------------------------" << std::endl;
	{
		try
		{
			int num = -1;
			std::list<int>::iterator iter = ::easyfind(list_test, num);
		
			std::cout << *iter << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
