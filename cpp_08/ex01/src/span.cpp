#include <span.hpp>

span::span(size_t n) : N(n), deq(N), size(0) {};

span::span(const span& other)
{
	deq = other.deq;
	this->N = other.getN();
}

void span::setN(size_t n) { N = n; }

size_t	span::getN () const {return N;}

span& span::operator=(const span& other)
{
	deq = other.deq;
	this->N = other.getN();
	return *this;
}

span::~span(){};

void 	span::addNumber(const int n)
{
	if (size == N)
		throw std::runtime_error("Too many numbers");
	this->deq[size] = n;
	size++;
}

std::deque<int>& span::getDeq() { return deq; }
const std::deque<int>& span::getDeq()const { return deq; }

int span::operator[](size_t i){ return deq[i]; }
int span::operator[](size_t i) const { return deq[i]; }

std::ostream &operator<<(std::ostream &out, const span &other)
{
	out << &other.getDeq();
	return out;
}

size_t	span::shortestSpan()
{
	if (size <= 1)
		throw std::runtime_error("Too few numbers");
	span t = *this;
	std::sort(t.getDeq().begin(), t.getDeq().end());
	std::vector<int> vect;
	for (size_t i = 0; i < t.getDeq().size() - 1; i++)
	{
		vect.push_back(t[i + 1] - t[i]);
	}
	return *std::min_element(vect.begin(), vect.end());
}

size_t	span::longestSpan()
{
	if (size <= 1)
		throw std::runtime_error("Too few numbers");
	return *std::max_element(deq.begin(), deq.end()) -
		   *std::min_element(deq.begin(), deq.end());
}

void	span::spanfill(std::deque<int>::iterator it1,
				std::deque<int>::iterator it2, int val)
{
	std::fill(it1, it2, val);
}