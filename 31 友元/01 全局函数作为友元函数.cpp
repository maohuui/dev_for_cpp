//#include <iostream>
//using namespace std;
//
////
//class Building
//{
//	//��һ��ȫ�ֺ�������Ϊ�������Ԫ���������Է���˽������
//	friend void goodFriend(Building& build);
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
//};
//
//void goodFriend(Building &build)
//{
//	cout << "���ѽ��� " << build.m_SittingRoom << endl;
//
//	cout << "���ѽ��� " << build.m_BedRoom << endl;
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