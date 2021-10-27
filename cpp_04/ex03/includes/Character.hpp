#ifndef CHARACTER_H
# define CHARACTER_H

# include <string>
# include <iostream>
# include <iomanip>
# include "AMateria.hpp"
# include "ICharacter.hpp"


class Character:public ICharacter
{
	private:
		int			idx;
		std::string name;
		AMateria**	inventory;
		

	public:
		Character(void);
		Character(const std::string& _name);
		~Character();
		Character(const Character &other);
		Character &operator=(const Character &other);

		std::string const& 	getName() const;
		int const& 			getIdx() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};

#endif