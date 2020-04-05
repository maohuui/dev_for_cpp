#include <iostream>
using namespace std;

class GoodFriend; //vs2019 前置声明无效
class Building
{
	//有一个类的成员函数，作为本类的友元函数，可以访问私有属性
	friend void GoodFriend::visit();
public:
	Building()
	{
		this->m_SittingRoom = " 客厅 ";
		this->m_BedRoom = " 卧室 ";
	}

public:
	//客厅
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
		cout << "朋友进入 " << build->m_SittingRoom << endl;

		cout << "朋友进入 " << build->m_BedRoom << endl;
	}
	void visit01()
	{
		cout << "朋友进入 " << build->m_SittingRoom << endl;

		//cout << "朋友进入 " << build.m_BedRoom << endl;
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