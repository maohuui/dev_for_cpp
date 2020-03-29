#include <iostream>
using namespace std;

//常量引用
//引用必须引用一块合法的内存空间地址
void test()
{
	//int& ref = 10;

	//相当于int tmp =10, const int& ref = tmp;
	const int& ref = 10; //加入const之后就可以了，编译器优化
	//ret = 1000; //不可以直接修改
	int* p = (int*)&ref;
	*p = 1000;
	cout << "ref: " << ref << endl;
}
//常量引用的使用场景
void show(const int& a)
{
	cout << "a: " << a << endl;
}

// 引用的本质是：指针常量
// Type* const b = &a;
void test01()
{
	int a = 20;
	int& b = a; //int* const b = &a;

	b = 100; // *b = 100;
}

//指针的引用
struct Person
{
	int age;
};
void allocateSpace(Person** p)
{
	*p = (Person*)malloc(sizeof(Person));

	(*p)->age = 10;
}
void test02()
{
	Person* p = NULL;
	allocateSpace(&p);

	cout << "年龄" << p->age << endl;
 }

void allocateSpace02(Person* &p) //Person* &p = p
{
	p = (Person*)malloc(sizeof(Person));

	p->age = 30;
}
void test03()
{
	Person* p = NULL;
	allocateSpace02(p);

	cout << "年龄" << p->age << endl;
}

int main()
{
	test();
	test01();
	test02();
	test03();


	system("pause");
	return EXIT_SUCCESS;
}