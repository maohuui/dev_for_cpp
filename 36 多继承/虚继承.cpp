#include <iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};

//菱形的问题 用virtual 解决

class Sheep : virtual public Animal
{

};

class LuoTuo : virtual public Animal
{

};

class YangTuo : public Sheep, public LuoTuo
{

};

void test02()
{
	YangTuo yt;
	//yt.m_Age = 10;
	yt.Sheep::m_Age = 10;
	yt.LuoTuo::m_Age = 20; //m_Age 只需要一份数据，导致了数据浪费

	cout << sizeof(yt) << endl; //8---> 12
	cout << yt.m_Age << endl;	
}

/*
vbptr：虚指针 --> 虚函数表
$vbtable： 虚函数表
class YangTuo   size(12):
        +---
 0      | +--- (base class Sheep)
 0      | | {vbptr}
        | +---
 4      | +--- (base class LuoTuo)
 4      | | {vbptr}
        | +---
        +---
        +--- (virtual base Animal)
 8      | m_Age
        +---

YangTuo::$vbtable@Sheep@:
 0      | 0
 1      | 8 (YangTuod(Sheep+0)Animal)

YangTuo::$vbtable@LuoTuo@:
 0      | 0
 1      | 4 (YangTuod(LuoTuo+0)Animal)
*/
int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}