#include <iostream>
using namespace std;

//���ͱ�̣����Ͳ�����
template<class NameTyep, class AgeType=int>
class Person
{
public:
	Person(NameTyep name,AgeType age) //����ʹ��Ĭ�ϵĲ�������
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	NameTyep m_Name;
	AgeType m_Age;
};


void test01()
{
	//Person p1("Tom", 20); //������ģ�壬����ʹ���Զ��Ƶ�����
	Person<string, int>("Tom", 10);//����ָ������
}
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}