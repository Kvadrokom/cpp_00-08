#include "Karen.hpp"

int	main(int arc, char **argv)
{
	Karen test;
	if (arc != 2)
		return (0);
	test.complain(argv[1]);
	return (0);
}