#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap A("Dark");
	ClapTrap B("Sin");

	A.attack("Sin");
	B.attack("Dark");

	A.takeDamage(B.getAttackDamage());
	std::cout << A.getHitpoints() << '\n';

	B.takeDamage(A.getAttackDamage());
	std::cout << B.getHitpoints() << '\n';

	A.beRepaired(10);
	std::cout << A.getHitpoints() << '\n';

	B.beRepaired(10);
	std::cout << B.getHitpoints() << '\n';
	return 0;
}