#include <iostream>
using namespace std;


class Person
{
public:
    Person()
    {

    }
    Person(int age)
    {

    }
    Person(const Person& p)
    {

    }
    ~Person()
    {

    }

    int m_Age;

};

// 1.ϵͳ��Ĭ�ϸ�������������������� Ĭ�Ϲ��캯���� ���������� �������캯�����򵥵�ֵ������
void test01()
{
    Person p1;
    p1.m_Age = 10;
    Person p2(p1);

    cout << p2.m_Age << endl;
}

//2. ����Լ�д���вι��캯������ôϵͳ�����ṩĬ�ϵĹ��캯����������Ȼ���ṩ�������캯��
void test02()
{
    Person p1(20);
    Person p2(p1);

    cout << p2.m_Age << endl;

}

//3. ����Լ�д�˿������캯������ôϵͳ�Ͳ����ṩ��������ͨ���캯��
void test03()
{
    Person p1;
}


int main()
{
    test01();
    test02();
    test03();

    system("pause");
    return EXIT_SUCCESS;
}