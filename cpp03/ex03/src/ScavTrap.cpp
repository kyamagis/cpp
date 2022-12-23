
#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->set_name("Tina");
	this->set_hit_point(100);
	this->set_energy_point(50);
	this->set_attack_damage(20);
	std::cout << "\x1b[31mScavTrap\033[m "<< this->get_name() << " called Default constructor\n" << std::endl;
}

ScavTrap::ScavTrap(const std::string &_Name)
{
	this->set_name(_Name);
	this->set_hit_point(100);
	this->set_energy_point(50);
	this->set_attack_damage(20);
	std::cout << "\x1b[31mScavTrap\033[m "<< this->get_name() << " called specific constructor\n" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &_scavtrap): ClapTrap()
{
	*this = _scavtrap;
	std::cout  << "\x1b[31mScavTrap\033[m " << this->get_name() << " called Copy constructor\n" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &_scavtrap)
{
	if (this != &_scavtrap)
	{
		this->set_name(_scavtrap.get_name()); 
		this->set_hit_point(_scavtrap.get_hit_point());
		this->set_energy_point(_scavtrap.get_energy_point());
		this->set_attack_damage(_scavtrap.get_attack_damage());
	}
	std::cout << "\x1b[31mScavTrap\033[m " << this->get_name() << " called assignment operator\n" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\n\x1b[31mScavTrap\033[m called Destructor" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->get_energy_point() <= 0)
	{	
		std::cout << "\x1b[31mScavTrap\033[m " << this->get_name() <<" no energy points\n" << std::endl;
		return ;
	}
	if (this->get_hit_point() <= 0)
	{	
		std::cout << "\x1b[31mScavTrap\033[m " << this->get_name() <<" is died\n" << std::endl;
		return ;
	}
	this->set_energy_point(get_energy_point() - 1);
	std::cout << "\x1b[31mScavTrap\033[m " <<this->get_name() <<" attacks " << target << " causing "
				<< this->get_attack_damage() << " points of damage!\n"
				<< std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->get_hit_point() <= 0)
	{	
		std::cout << "\x1b[31mScavTrap\033[m is not Gate keeper mode." << std::endl;
		return ;
	}
	std::cout << "\x1b[31mScavTrap\033[m is now in Gate keeper mode." << std::endl;
}
