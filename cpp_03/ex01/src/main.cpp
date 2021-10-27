#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap A("Dark");
	ScavTrap B("Sin");
	ScavTrap C;

	A.attack("Sin");
	B.attack("Dark");

	A.takeDamage(B.getAttackDamage());
	std::cout << A.ClapTrap::getHitpoints() << '\n';

	B.takeDamage(A.getAttackDamage());
	std::cout << B.ClapTrap::getHitpoints() << '\n';

	std::cout << C.getHitpoints() << "\n";

	A.beRepaired(10);
	std::cout << A.ClapTrap::getHitpoints() << '\n';

	B.beRepaired(10);
	std::cout << B.ClapTrap::getHitpoints() << '\n';

	B.guardGate();
	return 0;
}