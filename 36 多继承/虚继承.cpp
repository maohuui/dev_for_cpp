#include <iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};

//���ε����� ��virtual ���

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
	yt.LuoTuo::m_Age = 20; //m_Age ֻ��Ҫһ�����ݣ������������˷�

	cout << sizeof(yt) << endl; //8---> 12
	cout << yt.m_Age << endl;	
}

/*
vbptr����ָ�� --> �麯����
$vbtable�� �麯����
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