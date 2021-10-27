#include "Array.hpp"
#include "Awesome.hpp"

int main()
{
	Array<int> arr(5);
	for (size_t i = 0; i < 5; i++)
		std::cout << arr[i] << ' ';
	std::cout  << '\n';

	for (size_t i = 0; i < 5; i++)
	{
		arr[i] = i;
		std::cout << arr[i] << ' ';
	}
	std::cout  << '\n';

	Array<char> ach(5);
	for (size_t i = 0; i < 5; i++)
		std::cout << arr[i] << ' ';
	std::cout  << '\n';
	for (size_t i = 0; i < 5; i++)
	{
		ach[i] = i + 48;
		std::cout << ach[i] << ' ';
	}
	std::cout  << '\n';

	Array<std::string> arstr(5);
	for (size_t i = 0; i < 5; i++)
	{
		arstr[i] = std::to_string(i);
		std::cout << arstr[i] << ' ';
	}
	std::cout  << '\n';

	// try
	// {
	// 	std::cout << arr[5];
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	Array <Awesome> aw(5);
	for (size_t i = 0; i < 5; i++)
		std::cout << aw[i] << ' ';
	std::cout  << '\n';
	return 0;
}