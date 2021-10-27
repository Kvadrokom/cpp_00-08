#ifndef BASE_H
#define BASE_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>




class Base
{
	public:
		virtual~Base(){};
};

Base *generate(void);
void identify(Base *p);

#endif