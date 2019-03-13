//------------------------------------------------------------
//2019.STL 3.12 화9,10
//
// - 자료를 파일에 저장해 보기
// - 정렬한 결과를 파일에 저장하기
//
// - 이 내용을 객체로 (class Dog)
// - smart pointer
// - callable type
// 언제나 그러하듯이 프로그래밍은 훈련을 동반한다.
// 모르면 맞아야지
// - 알고리즘 시간재기
// 구분자를 넣어도 문법 오류가 아님!
//------------------------------------------------------------
#include "save.h"
#include <random>
#include <iomanip>
using namespace std;

//Dog 1000마리를 임의의 값으로 생성한다.
//이름 순으로 정렬하여 "개천마리.dat"에 저장한다.
//파일 크기를 확인한다.(sizeof(Dog)*1000 바이트가 되어야 한다.)

class Dog {
	char name[10]; //임의의 알파벳 10글자로 이름을 채우자
	int age; //uid(dre) (0,20)사이의 값으로 설정
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

	ofstream out("정수만개오름차순.dat", ios::binary);
	out.write()

	int cnt = 1;
	for (int i = 0; i < 10000; ++i)
	{
		cout << setw(12) << a[i];
		if (cnt++ % 6 == 0)
			cout << '\n';
	}
	save("소스.cpp");
}