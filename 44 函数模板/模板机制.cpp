#include <iostream>
using namespace std;

//1. �����������ǰѺ���ģ�崦����κ����͵ĺ���
//2. ����ģ��ͨ����ͬ�����Ͳ�����ͬ�ĺ���
//3. ��������Ժ���ģ��������α��룬�������ĵط���ģ����뱾����б��룬�ڵ��õĵط��Բ����滻��Ĵ�����б���

template<typename T>
void myPrint01(T a)
{
	cout << " ����ģ�����" << a << endl;
}

/*
���贫���T ��int, ����һ�������� ���������ģ�庯��
void myPrint01(int a)
{
	cout << " ����ģ�����" << a << endl;
}
*/

//�����ԣ�T���������飬����Person�࣬���Ƚϣ���֪����ô��
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}
	string m_Name;
	int m_Age;
};

template<typename T>
void myCompare(T &a, T &b)
{
	if (a == b)
		cout << " == " << endl;
	else
		cout << " != " << endl;
}

//���þ��廰��person���������߱�������person�ĶԱȴ���
template<>void myCompare<Person>(Person &a, Person &b)
{

	if (a.m_Age == b.m_Age &&
		a.m_Name == b.m_Name)
		cout << " == " << endl;
	else
		cout << " != " << endl;
}

void test05()
{
	Person p1("Tom", 19);
	Person p2("Loc", 20);

	myCompare(p1, p2);
}


int main()
{
	test05();

	system("pause");
	return EXIT_SUCCESS;
}