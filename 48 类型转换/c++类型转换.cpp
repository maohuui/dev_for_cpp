#include <iostream>
using namespace std;

/*
1. 静态转换：子类和父类转换
支持内置类型转换
static_cast
*/

class Base
{
public:
	virtual void show() = 0;
};

class Son : public Base
{
public:
	virtual void show()
	{
		cout << "" << endl;
	}
};

class Other
{

};


void test01()
{
	//内置类型转换
	char a = 'a';
	double d = static_cast<double>(a);// static_cast<目标类型>(原对象)

	cout << d << endl;

	// 自定义类型
	Base* base = NULL;
	Son* son = NULL;

	//base 转换为Son*类型，向下类型转换 不安全
	Son* son2 = static_cast<Son*>(base);
	//son转换为Base*类型，向上类型转换安全
	Base* base2 = static_cast<Base*>(son);

	// 转换为其他类型
	//Other* other = static_cast<Other*>(son);//类型转换无效
}

/*
2. 动态类型转换:
不支持内置类型转换
在类层次进行上行转换时，和static_cast效果一样的
在类层次进行下行转换时，dynamic_cast具有类型检查，比static_cast更安全
dynamic_cast
*/

void test02()
{
	//内置类型转换
	char a = 'a';
	//double d = dynamic_cast<double>(a);// 不支持

	// 自定义类型
	Base* base = NULL;
	Son* son = NULL;

	//base 转换为Son*类型，向下类型转换  
	// 不安全 转换失败
	//Son* son2 = dynamic_cast<Son*>(base); //不支持

	//如果发生多态，向下类型转换就是安全的,是安全的
	Base* base3 = new Son;
	Son* son3 = dynamic_cast<Son*>(base3);

	//son转换为Base*类型，向上类型转换安全
	Base* base2 = dynamic_cast<Base*>(son);

	// 转换为其他类型
	//Other* other = dynamic_cast<Other*>(son);//不支持
}

/*
3. 常量类型转换
const_cast 去掉const
加上const
不能对非指针和非引用进行转换
*/
void test03()
{
	//指针之间转换
	const int* p = NULL;
	//将const int * 转为int*
	int* p2 = const_cast<int*>(p);
	const int* p3 = const_cast<const int*>(p2);

	//引用之间类型
	const int a = 10;
	const int& aR = a;
	int& aR = const_cast<int&>(aR);

	//不可以对非指针非引用转
	//int b = const_cast<int>(a);
}

/*
4. 重新解释转换,最不安全 不建议
reinterpret_cast
*/
void test04()
{
	int a = 10;
	int* p = reinterpret_cast<int*>(a);

	Base* base = NULL;
	Son* son = NULL;
	Other* other = reinterpret_cast<Other*>(son);
}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();


	system("pause");
	return EXIT_SUCCESS;
}