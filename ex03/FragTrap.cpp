#include "FragTrap.hpp"

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructed." << std::endl;
	// Constructor implementation
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructed." << std::endl;
	// Destructor implementation
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
	// High five implementation requet positif stdcout
}