#include <iostream>
using namespace std;

class Phone
{
public:
	Phone(string pName)
	{
		m_PhoneName = pName;
		cout << "Phone ���캯������" << endl;
	}
	~Phone()
	{
		cout << "Phone ������������" << endl;
	}

	string m_PhoneName;
};

class Game
{
public:
	Game(string pName)
	{
		m_GameName = pName;
		cout << "Game ���캯������" << endl;
	}
	~Game()
	{
		cout << "Game ������������" << endl;
	}

	string m_GameName;
};

class Person
{
public:
	Person(string name, string pName, string gName)
		: m_Name(name)
		, m_Phone(pName)
		, m_Game(gName)

	{
		cout << "Person ���캯������" << endl;
	}
	~Person()
	{
		cout << "Person ������������" << endl;
	}

	string m_Name;
	Phone m_Phone;
	Game m_Game; 
	
};

// �ȹ��������࣬�����˳���������������˳��һ�����ͷ�˳���빹��˳���෴
void test01()
{
	Person p("С��", "IPHONE 6", "������ҫ"); //���죺Phone -> Game -> Person  ������Person -> Game -> Phone

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}