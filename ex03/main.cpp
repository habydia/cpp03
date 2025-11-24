#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string name3 = "FragTrap";
	std::string name4 = "ScavTrap";
	std::string name = "ClapTrap";

	FragTrap fragTrap(name3);
	ScavTrap scavTrap(name4);
	ClapTrap clapTrap(name);

	fragTrap.attack("scavTrap");
	scavTrap.takeDamage(fragTrap.getAttackDamage());
	fragTrap.highFivesGuys();

	return (0);
}