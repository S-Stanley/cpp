#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
template <typename T>

typename T::iterator	easyfind(T t, int x)
{
	typename T::iterator	iter;

	iter = std::find(t.begin(), t.end(), x);
	if (iter == t.end())
		throw std::out_of_range("cannot find element in range");
	return (iter);
}

#endif