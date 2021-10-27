#include "Swap.hpp"
#include "Max.hpp"
#include "Min.hpp"
#include "Awesome.hpp"


int main()
{
	int a = 5;
	int b = 6;
	std::string s1 = "hello";
	std::string s2 = "world";

	std::cout << "a = " << a << " ;" << " b = " << b << '\n';
	ft_swap(a, b);
	std::cout << "a = " << a << " ;" << " b = " << b << '\n';

	std::cout << "s1 = " << s1 << " ;" << " s2 = " << s2 << '\n';
	ft_swap(s1, s2);
	std::cout << "s1 = " << s1 << " ;" << " s2 = " << s2 << '\n';

	std::cout << "max(a, b) = " << ft_max(a, b) << '\n';
	std::cout << "max(s1, s2) = " << ft_max(s1, s2) << '\n';

	std::cout << "min(a, b) = " << ft_min(a, b) << '\n';
	std::cout << "min(s1, s2) = " << ft_min<std::string>(s1, s2) << '\n';
	std::cout << "\n\n";

	Awesome x(5);
	Awesome y(6);

	std::cout << "x = " << x << " ;" << " y = " << y << '\n';
	ft_swap(x, y);
	std::cout << "x = " << x << " ;" << " y = " << y << '\n';

	std::cout << "max(x, y) = " << ft_max(x, y) << '\n';

	std::cout << "min(x, y) = " << ft_min(x, y) << '\n';	
	return 0;
}