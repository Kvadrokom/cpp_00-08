#ifndef MIN_H
#define MIN_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

 template <typename T>
 T	ft_min(const T& a, const T& b)
 {
	return (b <= a ? b : a);
 }

#endif