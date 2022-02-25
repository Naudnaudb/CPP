#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &rhs);

		const std::string get_name(void) const;
		int get_hitPoints(void) const;
		int get_energyPoints(void) const;
		int get_attackDamage(void) const;
		void set_name(std::string name);
		void set_hitPoints(int hitPoints);
		void set_energyPoints(int energyPoints);
		void set_attackDamage(int attackDamage);

		ClapTrap(std::string name);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &src);

#endif