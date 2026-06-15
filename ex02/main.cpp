#include "Array.hpp"
#include <iostream>

int main()
{
	try
	{
		Array<int> intarr(5);
		unsigned int i = 0;
		while (i < intarr.size())
		{
			intarr[i] = i;
			std::cout << intarr[i] << "\n";
			i++;
		}
		//error
		std::cout << intarr[10];
	}
	catch(const std::exception &e)
	{
		std::cout << "err\n";
	}

	
	return 0;
}