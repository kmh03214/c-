#include <iostream>

int main(void)
{
	/*
	char name[100];
	char lang[100];
	std::cout << "이름이 뭐니?";
	std::cin >> name;
	std::cout << "내이름은" << name << "이야" << std::endl;

	std::cout << "좋아하는 프로그래밍 언어는 뭐니?";
	std::cin >> lang;
	std::cout << "그건 바로" << lang << "이야" << std::endl;

	return 123;
	*/
	int s=0;

	for (int i = 0; i < 5; i++)
	{
		int a;
		std::cout << i << "번 째 변수입력";
		std::cin >> a;
		s += a;
	}

	std::cout << s;

}

