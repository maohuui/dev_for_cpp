//#include <iostream>
//using namespace std;
//
////
//class Building
//{
//	//有一个全局函数，作为本类的友元函数，可以访问私有属性
//	friend void goodFriend(Building& build);
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
//};
//
//void goodFriend(Building &build)
//{
//	cout << "朋友进入 " << build.m_SittingRoom << endl;
//
//	cout << "朋友进入 " << build.m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building b;
//	goodFriend(b);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}