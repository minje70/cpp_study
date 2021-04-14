#include "contact.hpp"

class Phonebook
{
private:
	Contacts	contacts[8];
	int			total;
public:
	Phonebook();
	~Phonebook();
	int			GetTotal();
	void		AddTotal();
	Contacts	*GetContacts();
	void		ExitContact();
	void		AddContact();
	void		SearchContact();
};
