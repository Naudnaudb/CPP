#include "Zombie.hpp"

#include <string>

void randomChump(std::string name)
{
  Zombie stack(name);

  stack.announce();
}
