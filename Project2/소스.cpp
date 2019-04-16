//------------------------------------------------------------
//2019.STL 4.16 ��9,10
// - smart pointer
// ������ �׷��ϵ��� ���α׷����� �Ʒ��� �����Ѵ�.
// �𸣸� �¾ƾ���
// STL�� �ӵ��� �켱�Ѵ�
// C++�� ������ ���α׷��� ������� ���Ѿ��� �鿩�� �� �� �ִٴ� ���̴�.
// �ݺ����� ��ü��? - STL �ݺ��ڰ� �Ǳ⿡ �ʿ��� ����?
// �ݺ��� �����
//------------------------------------------------------------
#include "String.h"
#include "save.h"
#include <vector>
#include <list>
#include <forward_list>
#include <iterator>
using namespace std;
template <typename Iter>
void cat(Iter b);
class MyIter {

};

int main()
{
	MyIter mi;

	cat(mi);

	save("�ҽ�.cpp");
}

template <typename Iter>
void cat(Iter iter)
{
	cout << typeid(iterator_traits<Iter>::iterator_category).name() << endl;
}

