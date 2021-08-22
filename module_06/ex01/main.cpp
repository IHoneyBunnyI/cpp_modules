#include <iostream>

struct Data{};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data		data;
	Data		*data_ptr;
	uintptr_t	uiptr;

	std::cout << "Struct data address in memory =: \t" << "\033[32m" << &data << "\033[0m" << std::endl;
	std::cout << "=======================================================" << std::endl;
	uiptr = serialize(&data);
	std::cout << "Uintptr: \t\t\t\t" << "\033[32m" << uiptr << "\033[0m" << std::endl;
	std::cout << "=======================================================" << std::endl;
	data_ptr = deserialize(uiptr);
	std::cout << "New data address with casts: \t\t" << "\033[32m" << data_ptr << "\033[0m" << std::endl;
	return (0);
}
