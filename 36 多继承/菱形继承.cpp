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
//	yt.LuoTuo::m_Age = 20; //m_Age ֻ��Ҫһ�����ݣ������������˷�
//
//	cout << sizeof(yt) << endl; //8
//	 // vs������Ա���� �ն˲鿴�� cl /d1 reportSingleClassLayoutYangTuo test.cpp
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}