#include "Zombie.hpp"

void heapTest(std::string name)
{
  Zombie *zombie;

  zombie = newZombie(name);
  zombie->announce();
  delete zombie;
}

int main(int argc, char *argv[])
{

  for (int i = 1; i < argc; i++)
  {
    if (i % 2)
      heapTest(std::string(argv[i]));
    else
      randomChump(std::string(argv[i]));
  }
}
