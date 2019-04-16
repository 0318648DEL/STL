// String.h - �ҹ��ڸ� random�ϰ� HEAP�� �����ϰ� �ִ�.
// �� Ŭ������ �̵��� �����մϴ�.
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

	//����
	String(const String& other);

	String& operator=(const String& other);

	//�̵�
	String(String&& other);		//�̵�������(move constructor)
	String& operator=(String&& other);	//move assignment operator

	bool operator<(const String& rhs);

	bool operator==(const String& rhs);

	void reset(int n);

	int getNum() const;

	char* getData() const;

	friend std::ostream& operator<<(std::ostream&, const String&);
};
