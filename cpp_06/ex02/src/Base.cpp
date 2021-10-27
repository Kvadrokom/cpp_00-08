#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	std::srand(std::time(nullptr));
	int	ran = rand()%4;
	switch (ran)
	{
	case 0:
		return  new A();
	case 1:
		return new A();
	case 2:
		return new C();
	default:
		return new Base();
	}
	return 0;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	else
		std::cout << "base\n";
}