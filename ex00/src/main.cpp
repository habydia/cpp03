#include "ClapTrap.hpp"

int	main(void)
{
	std::string name = "Solder1";
	ClapTrap solder1(name);

	solder1.attack("Enemy1");
	solder1.takeDamage(5);
	solder1.beRepaired(3);
	return (0);
}