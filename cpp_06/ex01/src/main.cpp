#include "Data.hpp"

int	main()
{
	int k = 5;
	int &p = k;

	float &g = reinterpret_cast<float &>(k);
	std::cout << g << '\n';

	double &c = reinterpret_cast<double &>(p);
	std::cout << c << '\n';
	Data data(10, 15.25);
	uintptr_t pt = serialize(&data);
	Data *ptr = deserialize(pt);

	std::cout << "Data:        " << &data << '\n';
	std::cout << std::hex << std::showbase << "Serialize:   " << pt << '\n';
	std::cout << "Deserialize: " << ptr << '\n';
	std::cout << std::dec << ptr->price << ' ' << ptr->weight << '\n';

	return 0;
}
