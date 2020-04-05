#include <iostream>
using namespace std;

class Base
{
public:
	int m_A;
};

class S1 : virtual public Base
{

};

class S2 : virtual public Base
{

};

class GrandS : public S1, public S2
{

};
/*
class GrandS    size(12):
        +---
 0      | +--- (base class S1)
 0      | | {vbptr}
        | +---
 4      | +--- (base class S2)
 4      | | {vbptr}
        | +---
        +---
        +--- (virtual base Base)
 8      | m_A
        +---

GrandS::$vbtable@S1@:
 0      | 0
 1      | 8 (GrandSd(S1+0)Base) //偏移量

GrandS::$vbtable@S2@:
 0      | 0
 1      | 4 (GrandSd(S2+0)Base)
vbi:       class  offset o.vbptr  o.vbte fVtorDisp
            Base       8       0       4 0
*/


void test01()
{
	GrandS gs;
	gs.m_A = 10; //加virtual之前，m_A不明确

	cout << gs.m_A << endl;
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}