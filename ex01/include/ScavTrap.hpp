#include "ClapTrap.hpp"
#include <iostream>
#include <string>

// ScavapTrap construit en premmier
// puis ClapTrap
// scavtrap destruct en premier
// puis claptrap destructeur

class ScavTrap : public ClapTrap
{
  private:
	const std::string name;

  public:
	// constructor
	ScavTrap(std::string &name);
	// destructor
	~ScavTrap();

	// getters/setters
	std::string getName() const
	{
		return (ClapTrap::getName());
	}
	// member functions
	void attack(ClapTrap &clapTrap);
	void guardGate();
};

// ScavTrap use ClapTrap's attribute
// void sethitPoints(unsigned int hitPointsScav)
// {
// 	hitPointsScav = hitPoints;
// }
// unsigned int gethitPoints()
// {
// 	return (hitPoints);
// }