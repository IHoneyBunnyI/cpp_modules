#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact contacts[8];
	int index;
public:
	void run();
};

void add(Contact contact[8], int index);
int full_exit(void);
void search(Contact contact[8]);

#endif
