#include <iostream>
using namespace std;

//引用：给一个内存空间 起别名
//语法：Type&别名 = 原名
void test01()
{
	int a = 10;
	int& b = a;
	b = 100;

	cout << "a: " << a << " b:" << b << endl; //结果：a:100 b:100
}

//引用必须要初始化
void test02()
{
	int b;
	int& c = b;
}

// 一旦初始化后，就不可以修改指向了
//相当于赋值
void test03()
{
	int b = 100;
	int& c = b;

	int d = 200;
	c = d;

	cout << " b:" << b << endl; //200
	cout << " c:" << c << endl; //200
	cout << " d:" << d << endl; //200
}

//建立对数组的引用
void test04()
{
	int arr[10];
	int(&pArr)[10] = arr;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << pArr[i] << " ";
	}
	cout << endl;

	//先定义数组的类型，在定义引用
	typedef int(ARRAY_TYPE)[10];

	ARRAY_TYPE& pArr2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << pArr2[i] << " ";
	}
	cout << endl;
}

//参数的传递方式
//值传递 
void mySwap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "mySwap() a:" << a << endl;
	cout << "mySwap() b:" << b << endl;
}
void test05()
{
	int a = 10;
	int b = 20;
	mySwap(a, b);

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}

//地址传递
void mySwap01(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "mySwap01() a:" << *a << endl;
	cout << "mySwap01() b:" << *b << endl;
}
void test06()
{
	int a = 10;
	int b = 20;
	mySwap01(&a, &b);

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}

//引用传递
void mySwap02(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "mySwap02() a:" << a << endl;
	cout << "mySwap02() b:" << b << endl;
}
void test07()
{
	int a = 10;
	int b = 20;
	mySwap02(a, b);

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}

//引用的注意事项
//1. 不要返回局部变量的引用
int& myFunc()
{
	int a = 10;
	return a;
}
void test08()
{
	int& ret = myFunc();
	cout << "ret:" << ret << endl; //编译器优化结果，保存之前的数据
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;
}

//2. 如果函数的返回值是一个引用，那么这个函数可以作为左值进行运算
int& myFunc2()
{
	static int a = 10;
	return a;
}
void test09()
{
	int& ret = myFunc2();
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;

	myFunc2() = 100;
	cout << "ret:" << ret << endl;
}


int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();

	test08();
	test09();

	system("pause");
	return EXIT_SUCCESS;
}