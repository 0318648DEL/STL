#include <iostream>
#include <string>

class X
{
	int value;
public:
	X(int value) :value(value) {};
	friend std::ostream& operator<<(std::ostream& os, const X& x);
};

std::ostream& operator<<(std::ostream& os, const X& x)
{
	os << x.value;
	return os;
}

template<class T>

void change(T& a, T& b)
{
	T temp{ a };
	a = b;
	b = temp;
}

int main()
{
	X a{ 1 };
	X b{ 2 };

	change(a, b);

	std::cout << a << ", " << b << std::endl;
	std::string c{ "먼지" };
	std::string d{ "미세" };

	change(c, d);
	c += d;
	std::cout << c << std::endl;

	int x;
	std::cin >> x;
}