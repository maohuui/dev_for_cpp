//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	int m_Age;
//};
//
//class Sheep : public Animal
//{
//
//};
//
//class LuoTuo : public Animal
//{
//
//};
//
//class YangTuo : public Sheep, public LuoTuo
//{
//
//};
//
//void test02()
//{
//	YangTuo yt;
//	//yt.m_Age = 10;
//	yt.Sheep::m_Age = 10;
//	yt.LuoTuo::m_Age = 20; //m_Age 只需要一份数据，导致了数据浪费
//
//	cout << sizeof(yt) << endl; //8
//	 // vs开发人员命令 终端查看类 cl /d1 reportSingleClassLayoutYangTuo test.cpp
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}