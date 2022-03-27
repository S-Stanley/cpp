#ifndef ITER_HPP
# define ITER_HPP

template <typename A, typename S, typename F>

void	iter(A *addr, S size, F func)
{
	for (int i = 0; i < size; i++)
		addr[i] = func();
}

#endif