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

#include "../includes/MutantStack.hpp"

int	main()
{
	{
		std::cout << "MutantStack list" << std::endl;

		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "   " << mstack.top() << "\t";

		std::list<int> test_list;
		test_list.push_back(5);
		test_list.push_back(17);
		std::list<int>::reverse_iterator reiter = test_list.rbegin();
		std::cout << "    " << *reiter << std::endl;

		mstack.pop();
		std::cout << "   " << mstack.size() << "\t";
	
		test_list.pop_back();
		std::cout << "    " << test_list.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;

		test_list.push_back(3);
		test_list.push_back(5);
		test_list.push_back(737);
		test_list.push_back(0);
		std::list<int>::iterator itbegin = test_list.begin();
		++itbegin;
		--itbegin;

		while (it != ite)
		{
			std::cout << "   " << *it << "\t";
			std::cout << "    " << *itbegin << std::endl;
			++itbegin;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "---------------------" << std::endl;
	{
		std::cout << "MutantStack vector" << std::endl;

		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "   " << mstack.top() << "\t";

		std::vector<int> test_vector;
		test_vector.push_back(5);
		test_vector.push_back(17);
		std::vector<int>::reverse_iterator reiter = test_vector.rbegin();
		std::cout << "    " << *reiter << std::endl;

		mstack.pop();
		std::cout << "   " << mstack.size() << "\t";
	
		test_vector.pop_back();
		std::cout << "    " << test_vector.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;

		test_vector.push_back(3);
		test_vector.push_back(5);
		test_vector.push_back(737);
		test_vector.push_back(0);
		std::vector<int>::iterator itbegin = test_vector.begin();
		++itbegin;
		--itbegin;

		while (it != ite)
		{
			std::cout << "   " << *it << "\t";
			std::cout << "    " << *itbegin << std::endl;
			++itbegin;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "---------------------" << std::endl;
	{
		std::cout << "MutantStack copy constructor" << std::endl;
		MutantStack<int> mstack;
		
		mstack.push(5);
		mstack.push(17);
		std::cout << "   " << mstack.top() << std::endl;

		mstack.pop();
		std::cout << "   " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		
		MutantStack<int> mstack1 = mstack;
		MutantStack<int>::iterator it = mstack1.begin();
		MutantStack<int>::iterator ite = mstack1.end();
		++it;
		--it;

		while (it != ite)
		{
			std::cout << "   " << *it << std::endl;
			++it;
		}
	}

	std::cout << "---------------------" << std::endl;
	{
		std::cout << "MutantStack copy assignment operator overload" << std::endl;
		MutantStack<int> mstack;
		
		mstack.push(5);
		mstack.push(17);
		std::cout << "   " << mstack.top() << std::endl;

		mstack.pop();
		std::cout << "   " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		
		MutantStack<int> mstack1;
		mstack1 = mstack;
		MutantStack<int>::iterator it = mstack1.begin();
		MutantStack<int>::iterator ite = mstack1.end();
		++it;
		--it;

		while (it != ite)
		{
			std::cout << "   " << *it << std::endl;
			++it;
		}
	}
	return 0;
}

/* __attribute__((destructor))
static void destructor(void)
{
	system("leaks -q ex02");
} */
