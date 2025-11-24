#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{
  private:
	const std::string name;

  public:
	// constructor
	FragTrap(std::string &name);
	// destructor
	~FragTrap();
	// member functions
	void highFivesGuys(void);
};

#endif // FRAGTRAP_HPP