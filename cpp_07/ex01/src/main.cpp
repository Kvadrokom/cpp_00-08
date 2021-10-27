#include "Iter.hpp"
#include "Awesome.hpp"

int main()
{
	int arr_int[] = {14, 52, 56, 7, 9};
	char arr_char[] = {'h', 'e', 'l', 'l', 'o'};
	std::string str[] = {"Hello", "world", "people", "welcome"};

	iter(arr_int, 5, print);
	iter(arr_char, 5, print);
	iter(str, 4, print);

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}