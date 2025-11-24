#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
  private:
	const std::string name;
	static unsigned int const hitPoints = 100;
	static unsigned int const energyPoints = 100;
	static unsigned int const attackDamage = 30;

  public:
	// constructor
	ClapTrap(std::string &name);
	// destructor
	~ClapTrap();

	// getters./setters
	std::string getName() const
	{
		return (name);
	};
	unsigned int getAttackDamage() const
	{
		return (attackDamage);
	};
	// member functions
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif // CLAPTRAP_HPP