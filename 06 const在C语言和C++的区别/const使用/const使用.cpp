#include <iostream>
using namespace std;

//1. 对const修饰的变量取地址的时候，会分配临时内存
void test01()
{
	const int a = 10;
	int* p = (int *)&a;
}

//2. const 加入了extern关键字，也会分配内存

//3. 使用变量来初始化const修饰的变量
void test02()
{
	int a = 10;
	const int m_a = a;

	int* p = (int*)&m_a;
	*p = 20;
	cout << m_a << endl;
}

//4. 对于自定义的数据类型，也会分配内存
struct Person
{
	string name;
	int age;
};

void test03()
{
	const Person p;
	//不可以直接修改
	/*p.name = "xiaoming";
	p.age = 10;*/

	//间接修改
	Person* pp = (Person*)&p;
	pp->name = "xx";
	pp->age = 20;

	cout << "name:" << pp->name << "age:" << pp->age << endl;
}
int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}