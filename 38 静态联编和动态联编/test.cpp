#include <iostream>
using namespace std;

/* 
��̬��̬���������� �� ��������� ����ʱ��̬  ��󶨣���̬���ࣩ
��̬��̬�������� �� �麯�� ����ʱ��̬        ��󶨣���̬���ࣩ
*/

class Animal
{
public:
	virtual void speak()
	{
		cout << " ���� �� ˵��" << endl;
	}
	virtual void eat(int a)
	{
		cout << " ���� �� �Է�" << endl;
	}
};

class Cat : public Animal
{
public:
	virtual void speak()
	{
		cout << " è �� ����" << endl;
	}
	virtual void eat(int a)
	{
		cout << " è �� ��è��" << endl;
	}
};

class Dog : public Animal
{
public:
	virtual void speak()
	{
		cout << " �� �� ����" << endl;
	}
	virtual void eat(int a)
	{
		cout << " �� �� �Թ���" << endl;
	}
};

//���ڸ��ӹ�ϵ�������࣬c++����Ҫ��������ת��
//��̬����--> ��ַ���
//��̬���� --> ��ַ���
//���н׶� ��ȥ���� ����virtual
/*
��̬�����������
	1. ���������麯����������д�麯�������ڼ̳й�ϵ
	2. �����ָ��������ã�ָ������Ķ���
*/
//��д��������дʵ�ָ����е��麯���� ���뷵��ֵ������������������һ��
//��������������д��ʱ��virtual���Լ�Ҳ���Բ���

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
	//((void (*)()) (*((int*)*(int*)animal+1)))(); //����û�в�����������

	//����в�������������
	// c++��Ĭ�ϵ��ù�����__stdcall 
	// ������ǣ�__cdecl
	//�޸�һ�µ��ù���
	typedef void(__stdcall *Func)(int);
	(Func (*((int*)*(int*)animal + 1)))(10);
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}