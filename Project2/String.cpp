#include "String.h"

std::uniform_int_distribution<> uid('a', 'z');
std::default_random_engine dre;

String::String(int n) :num{ n } {
	p = new char[num];
	for (int i = 0; i < num; ++i)
		p[i] = uid(dre);

	std::cout << "String(int) - 按眉林家 : " << this << ", HEAP : " << (void*)p << std::endl;
}

String::~String() {
	//cout << "家戈" << endl;
	std::cout << "家戈 - 按眉林家 : " << this << ", HEAP : " << (void*)p << std::endl;
	delete[] p;
}

String::String(const String& other) :num{ other.num } {
	p = new char[num];
	memcpy(p, other.p, num);
	std::cout << "汗荤积己 - 按眉林家 : " << this << ", 盔夯按眉 : " << &other
		<< ", HEAP : " << (void*)p << std::endl;

}

String& String::operator=(const String& other) {
	if (this == &other)
		return *this;
	delete[] p;
	num = other.num;
	p = new char[num];
	memcpy(p, other.p, num);
	return *this;
}


String::String(String&& other) :num{ other.num }, p{ other.p } {
	std::cout << "捞悼积己 - 按眉林家 : " << this << ", 盔夯按眉 : " << &other << ", HEAP : " << (void*)p << std::endl;
	other.num = 0;
	other.p = nullptr;
}

String& String::operator=(String&& other) {
	if (this == &other)
		return *this;
	delete[] p;
	num = other.num;
	p = other.p;
	std::cout << "捞悼且寸 - 按眉林家 : " << this << ", 盔夯按眉 : " << &other << ", HEAP : " << (void*)p << std::endl;
	other.num = 0;
	other.p = nullptr;
}


void String::reset(int n) {
	num = n;
	if (p == nullptr)
		delete[] p;

	p = new char[num];
	for (int i = 0; i < num; ++i)
		p[i] = uid(dre);
}

int String::getNum() const {
	return num;
}

char* String::getData() const { return p; }

bool String::operator==(const String& rhs) {
	if (num == rhs.num)
		return true;
	return false;
}

bool String::operator<(const String& rhs) {
	return num < rhs.num;
}

std::ostream& operator<<(std::ostream& os, const String& str)
{
	for (int i = 0; i < str.num; ++i)
		os << str.p[i];
	return os;
}
