#include "ScavTrap.hpp"

// ScavapTrap construit en premmier
// puis ClapTrap
// scavtrap destruct en premier
// puis claptrap destructeur

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructed." << std::endl;
	// Constructor implementation
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructed." << std::endl;
	// Destructor implementation
}

void ScavTrap::attack(ClapTrap &clapTrap)
{
	std::cout << "ScavTrap attacks " << clapTrap.getName() << " causing " << ClapTrap::getAttackDamage() << " points of damage!" << std::endl;
	// Attack implementation
}