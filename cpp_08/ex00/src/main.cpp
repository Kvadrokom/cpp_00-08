#include "easyfind.hpp"



int main()
{
	std::vector<int> vect;
	std::deque<int> deq; 

	for (int count = 0; count < 5; ++count)
	{
        vect.push_back(10 - count);
		deq.push_front(10 - count);
	}
	for (int count = 0; count < 5; ++count)
		std::cout << "vect[" << count << "] = " << vect[count] << " ";
		std::cout << "\n";

	for (int count = 0; count < 5; ++count)
		std::cout << "deq[" << count << "] = " << deq[count] << " ";
		std::cout << "\n";
	try
	{
		std::vector<int>::iterator it = easyfind(vect, 5);
		std::cout << *it << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::deque<int>::iterator it = easyfind(deq, 7);
		std::cout << *it << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}