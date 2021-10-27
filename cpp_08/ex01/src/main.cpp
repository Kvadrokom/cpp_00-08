#include <span.hpp>

int main()
{
	span a(5);
	std::srand(std::time(NULL));

	for (size_t i = 0; i < 5; i++)
		a.addNumber(rand()%20);

	for (size_t i = 0; i < 5; i++)
		std::cout << a[i] << " ";
	std::cout << "\n";

	span b = a;
	for (size_t i = 0; i < 5; i++)
		std::cout << b[i] << " ";
	std::cout << "\n";

	try
	{
		a.addNumber(17);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << a.longestSpan() << "\n";
	std::cout << a.shortestSpan() << "\n";

	span f(20);
	f.spanfill(f.getDeq().begin(), f.getDeq().end(), rand()%10);
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << f[i] << " ";
	}
	std::cout << "\n";

	span g(5);
	try
	{
		std::cout << g.longestSpan() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	span r(20000);
	for (size_t i = 0; i < 20000; i++)
		r.addNumber(rand()%20);
	std::cout << r.longestSpan() << "\n";
	std::cout << r.shortestSpan() << "\n";
	return 0;
}