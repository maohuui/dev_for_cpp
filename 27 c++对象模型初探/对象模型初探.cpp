#include <iostream>
using namespace std;

#pragma pack(show) // Ĭ�϶���ģ��  warning C4810: pragma pack(show) ��ֵ == 8
#pragma pack(4)
class Person
{
public:
	int m_A;

	//��Ա��������������Ĵ�С��
	//��Ա�����ͳ�Ա�����Ƿֿ��洢��
	void func()
	{

	}

	// ��̬��Ա������������Ĵ�С��

	static int m_B;

	// ��̬��Ա������������Ĵ�С��
	static void func01()
	{

	}

	double m_C;
};

int Person::m_B = 10;

void test01()
{
	//����Ĵ�СΪ1������Ҳ�ǿ���ʵ��������ģ�ÿ���������ڴ��еĵ�ַ��Ωһ�ġ�
	//cout << "" << sizeof(Person) << endl;  

	//һ��int m_A �� 4
	//cout << "" << sizeof(Person) << endl;

	//һ��int m_A + һ������ func  = 4
	//cout << "" << sizeof(Person) << endl;

	//һ��int m_A + һ������ func  + static ���� = 4
	//cout << "" << sizeof(Person) << endl;

	//һ��int m_A + һ������ func  + static ����  + static ����= 4
	//cout << "" << sizeof(Person) << endl;

	cout << "" << sizeof(Person) << endl; //Ĭ�϶���ģ����double 

	cout << "" << sizeof(Person) << endl; //#pragma pack(1): 12
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

