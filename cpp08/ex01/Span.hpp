#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &src);
		virtual ~Span(void);

		Span	&operator=(Span const &src);

		void	addNumber(int num);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		void	addALotOfNumbers(unsigned int N);

	private:
		std::vector<int>	_num;
		unsigned int		_max_num;
};

#endif