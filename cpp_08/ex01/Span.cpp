#include <Span.hpp>

Span::Span() : _N(0)
{
	std::cout << GREEN << "Span Default constructor called!" << RESET << std::endl;
}

Span::Span(unsigned int N) : _N(N)
{
	std::cout << GREEN << "Span Parameter constructor called!" << RESET << std::endl;
}

Span::Span(const Span& cp) : _N(cp._N), _numbers(cp._numbers)
{
	std::cout << GREEN << "Span Copy constructor called!" << RESET << std::endl;
}

Span& Span::operator=(const Span& cp)
{
	std::cout << GREEN << "Span Assignment operator called!" << RESET << std::endl;
	if (this != &cp)
	{
		const_cast<unsigned int&>(_N) = cp._N;
		_numbers = cp._numbers;
	}
	return *this;
}

Span::~Span()
{
	std::cout << RED << "Span Default destructor called!" << RESET << std::endl;
}


void			Span::addNumber(unsigned int num)
{
	if (_numbers.size() >= _N)
		throw NotEnoughSpace();
	_numbers.push_back(num);
}

unsigned int	Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw NotEnoughNumbersStoredException();

	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());

	unsigned int minSpan = __UINT16_MAX__;
	for (size_t i = 1; i < sorted.size(); i++)
	{
		unsigned int span = sorted[i] - sorted[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

unsigned int	Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw NotEnoughNumbersStoredException();

	int minElement = *std::min_element(_numbers.begin(), _numbers.end());
	int maxElement = *std::max_element(_numbers.begin(), _numbers.end());

	return (maxElement - minElement);
}
