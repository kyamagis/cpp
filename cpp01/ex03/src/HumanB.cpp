
#include "../includes/HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::HumanB(std::string	_name)
{
	this->name = _name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << this->name << " survived" << "\n";
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
	else
		std::cout << this->name << " attacks with their " << "fist" << "\n";
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
}
