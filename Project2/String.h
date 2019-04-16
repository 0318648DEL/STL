// String.h - 소문자를 random하게 HEAP에 저장하고 있다.
// 이 클래스는 이동을 지원합니다.
#pragma once
#include <iostream>
#include <random>

class String {
	int num{ 0 };
	char *p{ nullptr };
public:
	String() = default;

	String(int n);

	~String();

	//복사
	String(const String& other);

	String& operator=(const String& other);

	//이동
	String(String&& other);		//이동생성자(move constructor)
	String& operator=(String&& other);	//move assignment operator

	bool operator<(const String& rhs);

	bool operator==(const String& rhs);

	void reset(int n);

	int getNum() const;

	char* getData() const;

	friend std::ostream& operator<<(std::ostream&, const String&);
};
