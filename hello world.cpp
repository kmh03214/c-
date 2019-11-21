#include <iostream>
#include <stdio.h>

int name(int);
double sum();
int section_sum();

int main()
{
	int num = 20;
	int ret;
	int ret2;

	//std::cout << "hello world" << std::endl;
	//std::cout << "hello " << std::endl;
	//std::cout << 'h\n' << std::endl;
	//std::cout << num << std::endl;
	//ret = name(1);
	//std::cout << ret << std::endl;

	//std::cout << 'a\n' << std::endl << 'b\n' << std::endl << 'c\n' << std::endl << 'd\n' << std::endl << 'e' << std::endl;

	//std::cout << "sum:"<< sum() <<std::endl;
	std::cout << "section sum:" << section_sum();

}

int name(int a)
{
	printf("hello world\n");
	printf("a\n");

	return 'e';
}

double sum()
{
	double val1, val2;
	std::cin >> val1;
	std::cin >> val2;

	return val1 + val2;

}

int section_sum()
{
	int s=0,val1,val2;
	std::cin >> val1;
	std::cin >> val2;
	
	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
		{
			s += i;
			std::cout << i << std::endl;
		}
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
		{
			s += i;
			std::cout << i << std::endl;
		}

	}

	return s;
}