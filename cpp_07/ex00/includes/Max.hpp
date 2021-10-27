#ifndef MAX_H
#define MAX_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

 template <typename T>
 T	ft_max(const T& a, const T& b)
 {
	return (b >= a ? b : a);
 }

#endif