#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int	main()
{
	Base *ptr = generate();
	identify(ptr);

	Base pm;
	try
	{
		B& f = static_cast<B &>(pm);
		f.~B();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	B& f = reinterpret_cast<B &>(pm);
	f.~B();

	delete ptr;

	return 0;
}
