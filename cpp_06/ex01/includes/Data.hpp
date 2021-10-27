#ifndef DATA_H
#define DATA_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>


struct Data
{
	int		weight;
	double	price;

	Data(int w, double pr);
};

uintptr_t serialize(Data *ptr);
Data* deserialize(uintptr_t raw);


#endif