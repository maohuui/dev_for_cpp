#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1. 
int a;
int a = 10;

//2.
int getRectArea(w, h)
{
	//return w * h;
}

void test02()
{
	getRectArea(10, 20, 30); //�������
}

//3.
void test03()
{
	char* p = malloc(10);
}

//4.
struct Person
{
	int age;
	//void func(); //c�����нṹ�岻�����к���
};

void test04()
{
	struct Person p; //c������ �����ṹ������struct�ؼ���
	p.age = 10;
}

//5. c����û��bool����
//bool flag = true;

//6. 
void test06()
{
	int a = 10;
	int b = 20;

	printf("ret = %d\n", a > b ? a : b);

	//c�����У���Ŀ��������ص���ֵ�� 20 = 100
	//a > b ? a : b = 100; //���ʽ�����ǿ��޸���ֵ 
	*(a > b ? &a : &b) = 100; //ʵ�ֺ�c++��Ч��
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

int main()
{
	test02();
	test03();
	test04();
	test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;
}