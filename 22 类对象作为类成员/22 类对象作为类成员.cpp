#include <iostream>
using namespace std;

class Phone
{
public:
	Phone(string pName)
	{
		m_PhoneName = pName;
		cout << "Phone 构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone 析构函数调用" << endl;
	}

	string m_PhoneName;
};

class Game
{
public:
	Game(string pName)
	{
		m_GameName = pName;
		cout << "Game 构造函数调用" << endl;
	}
	~Game()
	{
		cout << "Game 析构函数调用" << endl;
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
		cout << "Person 构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person 析构函数调用" << endl;
	}

	string m_Name;
	Phone m_Phone;
	Game m_Game; 
	
};

// 先构造其他类，构造的顺序跟其他类声明的顺序一样，释放顺序与构造顺序相反
void test01()
{
	Person p("小明", "IPHONE 6", "王者荣耀"); //构造：Phone -> Game -> Person  析构：Person -> Game -> Phone

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}