#include <iostream>
using namespace std;

/* 
静态动态：函数重载 和 运算符重载 编译时多态  早绑定（静态联编）
动态动态：派生类 和 虚函数 运行时动态        晚绑定（动态联编）
*/

class Animal
{
public:
	virtual void speak()
	{
		cout << " 动物 会 说话" << endl;
	}
	virtual void eat(int a)
	{
		cout << " 动物 会 吃饭" << endl;
	}
};

class Cat : public Animal
{
public:
	virtual void speak()
	{
		cout << " 猫 会 喵喵" << endl;
	}
	virtual void eat(int a)
	{
		cout << " 猫 会 吃猫粮" << endl;
	}
};

class Dog : public Animal
{
public:
	virtual void speak()
	{
		cout << " 狗 会 汪汪" << endl;
	}
	virtual void eat(int a)
	{
		cout << " 狗 会 吃狗粮" << endl;
	}
};

//对于父子关系的两个类，c++不需要进行类型转换
//静态联编--> 地址早绑定
//动态联编 --> 地址晚绑定
//运行阶段 才去调用 加上virtual
/*
多态满足的条件：
	1. 父类中有虚函数，子类重写虚函数，存在继承关系
	2. 父类的指针或者引用，指向子类的对象
*/
//重写：子类重写实现父类中的虚函数， 必须返回值，函数名，参数必须一致
//子类在做函数重写的时候，virtual可以加也可以不加

void doSpeak(Animal & animal)
{
	animal.speak();
}
/*
class Animal    size(4):
		+---
 0      | {vfptr}
		+---

Animal::$vftable@:
		| &Animal_meta
		|  0
 0      | &Animal::speak

 class Cat       size(4):
		+---
 0      | +--- (base class Animal)
 0      | | {vfptr}
		| +---
		+---

Cat::$vftable@:
		| &Cat_meta
		|  0
 0      | &Cat::speak

 class Dog       size(4):
		+---
 0      | +--- (base class Animal)
 0      | | {vfptr}
		| +---
		+---

Dog::$vftable@:
		| &Dog_meta
		|  0
 0      | &Dog::speak

*/

void test01()
{
	Cat cat;
	doSpeak(cat);//

	cout << sizeof(Animal) << endl; // 4

	Animal* animal = new Cat;
	animal->speak();
	((void (*)()) (*(int*)*(int*)animal))();
	//((void (*)()) (*((int*)*(int*)animal+1)))(); //函数没有参数是正常的

	//如果有参数就有问题了
	// c++的默认调用惯例：__stdcall 
	// 上面的是：__cdecl
	//修改一下调用惯例
	typedef void(__stdcall *Func)(int);
	(Func (*((int*)*(int*)animal + 1)))(10);
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}