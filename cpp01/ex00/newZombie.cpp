#include "Zombie.hpp"

#include <string>
#include <cstdlib>
#include <cstdio>

Zombie* newZombie( std::string name )
{
  Zombie *heap;
  heap = new (std::nothrow) Zombie(name);
  if (heap == NULL)
  {
    std::perror("error: new");
    std::exit(EXIT_FAILURE);
  }
  return heap;
}
