#include <iostream>
using namespace std;

//malloc free
/*
1. 必须指定对象的长度
2. malloc 返回void* c++必须进行强转
3. malloc可能申请内存失败，所以必须判断返回值来确保内存分配释放成功
4. 用户使用对象之前必须初始化， 构造函数不能显示调用，
*/

// c++ 提供了new /delete
/*
1. new 会调用对象的构造函数，delete会调用对象的析构函数
2. new内部有循环判断分配内存是否成功的机制，分配不成功会报异常
3. 
*/

class Person
{
public:

	Person()
	{
		cout << "Person 构造函数调用" << endl;

	}
	Person(int a)
	{
		cout << "Person 有参构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person 析构函数调用" << endl;

	}
};

void test01()
{
	Person *p = new Person;

	delete p;
}
/*
malloc 与 new 区别
1. new是运算符，malloc是库函数
2. malloc 返回值是void*, new 返回的是new出来的对象指针
3. malloc 需要判断是否开辟成功，而new内部做好了判断操作（内部malloc数据在堆区，判断是否分配成功，调用构造函数）
4. malloc不会调用了构造函，new调用构造函数
*/

//注意事项
//不要用void* 去接收new出来的对象，原因是不能释放
void  test02()
{
	void* p = new Person;
	delete (Person*)p;
}

//3. 利用new创建数组 
void test03()
{
	//利用new在堆区创建数组，类中必须要存在默认构造函数，否则无法创建
	Person* p = new Person[10];
	
	delete[] p; //数组释放
}
//数组对象 内存中， 一开始有对象个数，后面是对象
// |---|------|-------|-------|
// |10 |object| object| object|
// |---|------|-------|-------|

int main()
{
	//test01();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}