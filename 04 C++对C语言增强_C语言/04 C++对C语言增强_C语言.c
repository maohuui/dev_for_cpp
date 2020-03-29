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
	getRectArea(10, 20, 30); //传入参数
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
	//void func(); //c语言中结构体不允许有函数
};

void test04()
{
	struct Person p; //c语言中 声明结构体必须加struct关键字
	p.age = 10;
}

//5. c语言没有bool类型
//bool flag = true;

//6. 
void test06()
{
	int a = 10;
	int b = 20;

	printf("ret = %d\n", a > b ? a : b);

	//c语言中，三目运算符返回的是值， 20 = 100
	//a > b ? a : b = 100; //表达式必须是可修改左值 
	*(a > b ? &a : &b) = 100; //实现和c++的效果
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