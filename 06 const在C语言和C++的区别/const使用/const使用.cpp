#include <iostream>
using namespace std;

//1. ��const���εı���ȡ��ַ��ʱ�򣬻������ʱ�ڴ�
void test01()
{
	const int a = 10;
	int* p = (int *)&a;
}

//2. const ������extern�ؼ��֣�Ҳ������ڴ�

//3. ʹ�ñ�������ʼ��const���εı���
void test02()
{
	int a = 10;
	const int m_a = a;

	int* p = (int*)&m_a;
	*p = 20;
	cout << m_a << endl;
}

//4. �����Զ�����������ͣ�Ҳ������ڴ�
struct Person
{
	string name;
	int age;
};

void test03()
{
	const Person p;
	//������ֱ���޸�
	/*p.name = "xiaoming";
	p.age = 10;*/

	//����޸�
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