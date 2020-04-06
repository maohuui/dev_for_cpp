#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << " Animal 的构造函数 " << endl;
	}
	virtual void speak()
	{ 
		cout << " 动物会说话" << endl;
	}
	//virtual ~Animal() // 解决子类中堆区释放不干净内存泄漏的问题
	//{
	//	cout << " Animal 的析构函数 " << endl;
	//}
	//纯虚析构函数：有声明也有实现，类外实现
	//如果有纯虚析构，也是抽象类
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << " Animal 的纯虚析构函数 " << endl;
}

class Cat : public Animal
{
public:
	Cat(const char *name)
	{
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
		cout << " Cat 的构造函数 " << endl;
	}
	virtual void speak()
	{
		cout << " 小猫会 喵喵" << endl;
	}
	~Cat()
	{
		cout << " Cat 的析构函数 " << endl;
	}

	char* m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();

	delete animal; //只会调用父类的析构函数，不会调用子类的析构，造成内存泄漏。
	//解决方法：在父类的析构函数前加上virtual ，虚析构或纯虚析构 
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}