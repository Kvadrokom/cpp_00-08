#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap A("Dark");
	ScavTrap B("Sin");
	FragTrap C = A;
	ScavTrap D = B;

	A.attack("Sin");
	B.attack("Dark");
	D.guardGate();
	std::cout << "D.Hitpoints = " << D.ClapTrap::getHitpoints() << '\n';


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
	A.highFivesGuys();
	return 0;
}