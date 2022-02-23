#include <sstream>

#include "Zombie.hpp"

int main(int argc, char *argv[])
{
  int count;
  Zombie *horde;

  count = 10;
  if (argc != 1) {
    std::stringstream(argv[1]) >> count;
    if (count < 0)
      count = 10;
  }

  horde = zombieHorde(count, "z-");

  for (int i = 0; i < count; i++) {
    horde[i].announce();
  }
  delete [] horde;
}
