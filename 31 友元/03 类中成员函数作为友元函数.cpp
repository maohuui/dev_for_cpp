#include <iostream>
using namespace std;

class GoodFriend; //vs2019 ǰ��������Ч
class Building
{
	//��һ����ĳ�Ա��������Ϊ�������Ԫ���������Է���˽������
	friend void GoodFriend::visit();
public:
	Building()
	{
		this->m_SittingRoom = " ���� ";
		this->m_BedRoom = " ���� ";
	}

public:
	//����
	string  m_SittingRoom;

private:
	string m_BedRoom;

};

class GoodFriend
{
public:
	GoodFriend()
	{
		this->build = new Building;
	}
	void visit()
	{
		cout << "���ѽ��� " << build->m_SittingRoom << endl;

		cout << "���ѽ��� " << build->m_BedRoom << endl;
	}
	void visit01()
	{
		cout << "���ѽ��� " << build->m_SittingRoom << endl;

		//cout << "���ѽ��� " << build.m_BedRoom << endl;
	}


private:
	Building *build;
};

void test01()
{
	GoodFriend f;
	f.visit();	
	f.visit01();
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}