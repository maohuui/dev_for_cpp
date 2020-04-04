#include <iostream>
using namespace std;
#include "MyClass.h"

void test01()
{
	//Person p1; //无参构造函数

	////括号法：
	//Person p2(10, "lili"); //有参构造函数
	// 
	//Person p3(p2); //拷贝构造函数

	//显式法：
	//Person p4 = Person(10,"xiaomi"); //有参构造函数
	//Person p5 = Person(p4); // 拷贝构造函数

	//注意点
	//Person p(); //不可以用括号法调用无参构造函数，这行编译器认为是一个函数声明
	//Person(10, "lala");  //匿名对象，特点：当前执行完系统就回收了

	//cout << "----------------" << endl;

	//Person(p5); //不可以用拷贝构造函数来初始化匿名对象 .//error C2086: “Person p5”: 重定义 
	//编译器认为 代码为：Person p5

	//隐式法：
	//Person p6 = 10;
	Person p6(20, "aaa");
	Person p7 = p6;

}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}