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

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base *generate(void)
{
	struct timeval	tv;
	if (gettimeofday(&tv, NULL) == -1)
		return NULL;
	int	random = (tv.tv_usec * rand()) % 3;
	if (random == 0)
		return new A;
	if (random == 1)
		return new B;
	else
		return new C;
}


void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is C" << std::endl;
	else
		std::cout << "Not match" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A	a = dynamic_cast<A&>(p);
		std::cout << "This is A" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		B	b = dynamic_cast<B&>(p);
		std::cout << "This is B" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		C	c = dynamic_cast<C&>(p);
		std::cout << "This is C" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	std::cout << "Not match" << std::endl;

}

int	main()
{
	Base *base = NULL;

	try
	{	
		base = generate();
		if (!base)
			return 1;
	}
	catch (std::bad_alloc &e)
	{
		std::cout << e.what() << "\n";
		return 1;
	}
	identify(base);
	identify(*base);
	delete base;
	return 0;
}

/* __attribute__((destructor))
static void destructor(void)
{
	system("leaks -q ex02");
} */
