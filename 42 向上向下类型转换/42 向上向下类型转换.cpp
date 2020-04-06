
#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << " " << endl;
	}
};

class Cat : public Animal
{
public:
	Cat()
	{
		m_Age = 10;
	}
	virtual void speak()
	{
		cout << " " << endl;
	}
	int m_Age;
};

void test01()
{
	//向下转换 父 ----> 子  不安全， 
	/*
	Animal* animal = NULL;
	Cat* cat = (Cat*)animal;
	*/
	
	//向上转换 子 ----> 父 安全
	/*
	Cat* cat = NULL;
	Animal* animal = (Animal*)cat;
	*/
	

	//发了多态， 总是安全的
	/*
	Animal* animal = new Cat;
	animal->speak();
	*/
}

/*
重载：
	1. 同一个作用域
	2. 参数个数，参数顺序，参数类型不同
	3. 和函数返回值没有关系
	4. const也可以作为重载条件

重写
	1. 继承
	2. 子类重写父类的virtual的函数
	3. 函数的返回值，函数名字，函数参数都一样

重定义
	1. 继承
	2. 子类重写定义子类的同名非virtual 函数
	隐藏父类所有同名函数func() func(int)案例

*/

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}