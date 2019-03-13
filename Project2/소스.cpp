//------------------------------------------------------------
//2019.STL 3.12 ȭ9,10
//
// - �ڷḦ ���Ͽ� ������ ����
// - ������ ����� ���Ͽ� �����ϱ�
//
// - �� ������ ��ü�� (class Dog)
// - smart pointer
// - callable type
// ������ �׷��ϵ��� ���α׷����� �Ʒ��� �����Ѵ�.
// �𸣸� �¾ƾ���
// - �˰��� �ð����
// �����ڸ� �־ ���� ������ �ƴ�!
//------------------------------------------------------------
#include "save.h"
#include <random>
#include <iomanip>
using namespace std;

//Dog 1000������ ������ ������ �����Ѵ�.
//�̸� ������ �����Ͽ� "��õ����.dat"�� �����Ѵ�.
//���� ũ�⸦ Ȯ���Ѵ�.(sizeof(Dog)*1000 ����Ʈ�� �Ǿ�� �Ѵ�.)

class Dog {
	char name[10]; //������ ���ĺ� 10���ڷ� �̸��� ä����
	int age; //uid(dre) (0,20)������ ������ ����
public:
	Dog() {};
	~Dog() {};
	friend ostream& operator<<(ostream& os, const Dog& dog);
};

int main()
{
	uniform_int_distribution<> ure(0, 20);
	default_random_engine dre;

	Dog* wow = new Dog[1000];

	ofstream out("����������������.dat", ios::binary);
	out.write()

	int cnt = 1;
	for (int i = 0; i < 10000; ++i)
	{
		cout << setw(12) << a[i];
		if (cnt++ % 6 == 0)
			cout << '\n';
	}
	save("�ҽ�.cpp");
}