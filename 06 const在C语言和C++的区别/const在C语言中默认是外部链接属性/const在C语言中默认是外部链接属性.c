#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test01()
{
	extern const int m_a; //���߱�������һ���ⲿ��������
	printf("m_a = %d\n", m_a);
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}