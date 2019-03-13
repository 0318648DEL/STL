#include "save.h"

void save(std::string data)
{
	//name�� �б� ���� �����Ѵ�.
	std::ifstream in(data);
	//����� ������ ���� ���(�����̱�)�� �����Ѵ�.
	std::ofstream out("2019 STL ȭ��910.txt", std::ios::app);
	//���� �ð��� string�� �����ϱ�.
	auto now = std::chrono::system_clock::now();
	auto date = std::chrono::system_clock::to_time_t(now);
	std::string time(ctime(&date));
	//������ �ð��� �߿��Ѵ�.
	out << std::endl << std::endl;
	out << "=========================" << std::endl;
	out << time;
	out << "=========================" << std::endl;
	out << std::endl;

	//��� ������ �о ����.
	std::copy(std::istreambuf_iterator<char>(in),
		std::istreambuf_iterator<char>(),
		std::ostreambuf_iterator<char>(out));
}