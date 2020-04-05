//#include <iostream>
//using namespace std;
//
////
//class Building
//{
//	//有一个类，作为本类的友元类，可以访问私有属性
//	friend class GoodFriend;
//public:
//	Building()
//	{
//		this->m_SittingRoom = " 客厅 ";
//		this->m_BedRoom = " 卧室 ";
//	}
//
//public:
//	//客厅
//	string  m_SittingRoom;
//
//private:
//	string m_BedRoom;
//
//};
//
//class GoodFriend
//{
//public:
//	void visit()
//	{
//		cout << "朋友进入 " << build.m_SittingRoom << endl;
//
//		cout << "朋友进入 " << build.m_BedRoom << endl;
//	}
//
//private:
//	Building build;
//};
//
//void test01()
//{
//	GoodFriend f;
//	f.visit();	
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}