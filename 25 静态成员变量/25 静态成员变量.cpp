//#include <iostream>
//using namespace std;
//
////静态成员变量，属于类，所有对象共享
///*
//数据共享
//在编译的时候就已经分配了内存
//静态成员变量必须在类内声明，类外定义
//
//*/
//class  Person
//{
//public:
//	static int  m_A;
//
//private:
//	static int m_B;
//};
//
//int Person::m_A = 10;
//int Person::m_B = 100;
//
//void test01()
//{
//	//访问方式：对象访问
//	Person p1;
//	cout << "m_A: " << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 20;
//	cout << "m_A: " << p1.m_A << endl;
//	cout << "m_A: " << p2.m_A << endl;
//
//	//类名访问
//	cout << "m_A: " << Person::m_A << endl;
//
//	// 静态成员变量也是有访问权限的
//	//cout << "m_B: " << Person::m_B << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}