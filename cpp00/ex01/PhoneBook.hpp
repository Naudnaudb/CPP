#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

typedef enum e_commands
{
	ADD,
	SEARCH,
	EXIT,
	OTHERS
}	t_cmd;

class PhoneBook
{
	public:
		void	accept_command(void);

	private:
		void	command_announce(void);
		t_cmd	command_input(void);

		Contact contact_list[8];
};

#endif
