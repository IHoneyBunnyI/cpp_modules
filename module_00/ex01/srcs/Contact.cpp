#include "Contact.hpp"

int Contact::is_empty(void)
{
	if (this->first_name.empty())
	{
		return (1);
	}
	return (0);
}
