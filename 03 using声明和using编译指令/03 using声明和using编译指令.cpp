#include <iostream>
using namespace std;

namespace kingGlory
{
	int sunwukongId = 1;
}

void test01()
{
	int sunwukongId = 2;

	//1. using ����
	//���ͽ�ԭ�� �� using����ͬʱ���֣���Ҫ���������
	//using kingGlory::sunwukongId;
	//cout << "sunwukongId: " << sunwukongId << endl; //using �������¶��������<δ֪>
	//cout << "sunwukongId: " << kingGlory::sunwukongId << endl;//using �������¶��������<δ֪>
}

namespace LOL
{
	int sunwukongId = 1;
}

void test02()
{
	int sunwukongId = 2;

	//2. using ����ָ��
	using namespace kingGlory;
	using namespace LOL;

	//����оͽ�ԭ������ʹ�þͽ�ԭ��
	//���using����ָ����ڶ������ͬʱ��ͬ�����֣���Ҫ��������
	cout << "sunwukongId: " << sunwukongId << endl; //���Ϊ��2
	cout << "sunwukongId: " << kingGlory::sunwukongId << endl; //���Ϊ1
}

int main()
{
	test01();
	test02();


	system("pause");
	return EXIT_SUCCESS;
}