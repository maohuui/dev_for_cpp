//#include <iostream>
//using namespace std;
//#include <string>
//
//class Person
//{
//	friend ostream& operator<<(ostream& out, const Person& p);
//	//friend ostream& operator<<(ostream& out, Person& p);
//public:
//	Person(int a, int b)
//		: m_A(a)
//		, m_B(b)
//	{
//
//	}
//	Person()
//	{
//
//	}
//	//使用成员函数实现 前置++ 运算符重载
//	Person& operator ++()
//	{
//		++this->m_A;
//		++this->m_B;
//		return *this;
//	}
//	//使用成员函数实现 后置++ 运算符重载
//	Person operator ++(int)
//	{
//		Person tmp = *this;
//
//		this->m_A++;
//		this->m_B++;
//
//		return tmp;
//	}
//private:
//
//	int m_A;
//	int m_B;
//};
//
////利用全局函数实现<< 运算符 ，必须使用const,以确保不会修改参数
//ostream& operator<<(ostream& out, const Person& p)
//{
//	out << " " << p.m_A << " " << p.m_B;
//	return out;
//}
//
////ostream& operator<<(ostream& out, Person& p)
////{
////	out << " " << p.m_A << " " << p.m_B;
////	return out;
////}
//
//
//void test01()
//{
//	int a = 10;
//
//	cout << " " << ++a << endl;
//	cout << " " << a << endl;
//	
//	cout << " " << a++ << endl;
//	cout << " " << a << endl;
//
//	cout << " -------------------- " << endl;
//
//	Person p1(10, 10);
//	Person p2(20, 20);
//
//	cout << ++p1 << endl;
//	cout << p1 << endl;
//
//	
//	cout << (p1++) << endl;
//	cout << p1 << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}