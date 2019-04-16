//------------------------------------------------------------
//2019.STL 4.16 목9,10
// - smart pointer
// 언제나 그러하듯이 프로그래밍은 훈련을 동반한다.
// 모르면 맞아야지
// STL은 속도를 우선한다
// C++의 장점은 프로그래머 마음대로 제한없이 들여다 볼 수 있다는 것이다.
// 반복자의 정체는? - STL 반복자가 되기에 필요한 것은?
// 반복자 어댑터
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

	save("소스.cpp");
}

template <typename Iter>
void cat(Iter iter)
{
	cout << typeid(iterator_traits<Iter>::iterator_category).name() << endl;
}

