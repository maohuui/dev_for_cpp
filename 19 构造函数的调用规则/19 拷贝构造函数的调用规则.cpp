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

// 1.系统会默认给类添加至少三个函数： 默认构造函数， 析构函数， 拷贝构造函数（简单的值拷贝）
void test01()
{
    Person p1;
    p1.m_Age = 10;
    Person p2(p1);

    cout << p2.m_Age << endl;
}

//2. 如果自己写了有参构造函数，那么系统不会提供默认的构造函数，但是依然会提供拷贝构造函数
void test02()
{
    Person p1(20);
    Person p2(p1);

    cout << p2.m_Age << endl;

}

//3. 如果自己写了拷贝构造函数，那么系统就不会提供其他的普通构造函数
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