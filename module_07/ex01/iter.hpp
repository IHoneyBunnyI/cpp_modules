#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void cout(T& name)
{
	std::cout << name << std::endl;
}

template<typename T>
void multiply(T& name)
{
	std::cout << name << std::endl;
}

template<typename T>
void iter(T* arr, int len, void(*function)(T&))
{
	for (int i = 0; i < len; i++)
		function(arr[i]);
}

#endif
