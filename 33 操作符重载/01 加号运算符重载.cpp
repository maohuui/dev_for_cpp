//#include <iostream>
//using namespace std;
//
//class Person
//{
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
//	//+运算符重载 成员函数
//	Person operator+(Person& p)
//	{
//		Person tmp;
//		tmp.m_A = this->m_A + p.m_A;
//		tmp.m_B = this->m_B + p.m_B;
//
//		return tmp;
//	}
//
//	//+运算符重载 成员函数
//	Person operator+(int val)
//	{
//		Person tmp;
//		tmp.m_A = this->m_A + val;
//		tmp.m_B = this->m_B + val;
//
//		return tmp;
//	}
//
//	int m_A;
//	int m_B;
//};
//
////Person operator+(Person& p1, Person& p2)
////{
////	Person tmp;
////	tmp.m_A = p1.m_A + p2.m_A;
////	tmp.m_B = p1.m_B + p2.m_B;
////
////	return tmp;
////}
//
//void test01()
//{
//	Person p1(10, 10);
//	Person p2(20, 20);
//
//	Person p3 = p1 + p2; 
//
//	//成员函数的本质：Person 3 = p1.operator+(p2);
//	// 全局函数的本质： Person 3 = operator+(p1, p2);
//	cout << " " << p3.m_A << " " << p3.m_B << endl;
//
//	//运算符重载函数可以重载吗？ 可以
//	Person p4 = p3 + 100;
//	cout << " " << p4.m_A << " " << p4.m_B << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}