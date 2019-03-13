#include "save.h"

void save(std::string data)
{
	//name을 읽기 모드로 오픈한다.
	std::ifstream in(data);
	//기록할 파일을 쓰기 모드(덧붙이기)로 오픈한다.
	std::ofstream out("2019 STL 화목910.txt", std::ios::app);
	//현재 시간을 string에 저장하기.
	auto now = std::chrono::system_clock::now();
	auto date = std::chrono::system_clock::to_time_t(now);
	std::string time(ctime(&date));
	//저장한 시간도 중요한다.
	out << std::endl << std::endl;
	out << "=========================" << std::endl;
	out << time;
	out << "=========================" << std::endl;
	out << std::endl;

	//모든 내용을 읽어서 쓴다.
	std::copy(std::istreambuf_iterator<char>(in),
		std::istreambuf_iterator<char>(),
		std::ostreambuf_iterator<char>(out));
}