//#include <iostream>
//using namespace std;
//
////
//class Building
//{
//	//��һ���࣬��Ϊ�������Ԫ�࣬���Է���˽������
//	friend class GoodFriend;
//public:
//	Building()
//	{
//		this->m_SittingRoom = " ���� ";
//		this->m_BedRoom = " ���� ";
//	}
//
//public:
//	//����
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
//		cout << "���ѽ��� " << build.m_SittingRoom << endl;
//
//		cout << "���ѽ��� " << build.m_BedRoom << endl;
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