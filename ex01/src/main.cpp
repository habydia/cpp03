#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string name = "Solder1";
	std::string name2 = "ScavTrap";

	ScavTrap scavTrap(name2);
	ClapTrap Solder1(name);

	scavTrap.attack(Solder1);
	Solder1.takeDamage(20);
	scavTrap.guardGate();
	Solder1.attack(scavTrap.getName());

	return (0);
}