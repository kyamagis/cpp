
#ifndef Brain_HPP
# define Brain_HPP

#include <iostream>
#include <cstdlib>

class	Brain
{
	protected :
		std::string ideas[100];

	public :
		Brain();
		Brain(std::string &_type);
		Brain(Brain &_Brain);
		Brain&	operator=(Brain &_Brain);
		virtual ~Brain();
	
		void		set_idea(const int i, const std::string &_ideas);
		std::string get_idea(const int i)const;
		void		ideasdup(const Brain &_brain);

};

#endif