#include <iostream>

int main(void)
{
	/*
	char name[100];
	char lang[100];
	std::cout << "�̸��� ����?";
	std::cin >> name;
	std::cout << "���̸���" << name << "�̾�" << std::endl;

	std::cout << "�����ϴ� ���α׷��� ���� ����?";
	std::cin >> lang;
	std::cout << "�װ� �ٷ�" << lang << "�̾�" << std::endl;

	return 123;
	*/
	int s=0;

	for (int i = 0; i < 5; i++)
	{
		int a;
		std::cout << i << "�� ° �����Է�";
		std::cin >> a;
		s += a;
	}

	std::cout << s;

}

