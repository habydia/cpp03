#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string &name) : name(name)
{
	std::cout << "ClapTrap " << name << " constructed." << std::endl;
	// Constructor implementation
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructed." << std::endl;
	// Destructor implementation
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	// Attack implementation
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	// Take damage implementation
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
	// Be repaired implementation
}
