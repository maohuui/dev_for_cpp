#include <iostream>
using namespace std;

#define MYADD(a, b) ((a)+(b))

//1. �궨���ȱ�ݣ���֤���������ԣ���Ҫ��С��������
void test01()
{
	int a = 10;
	int b = 40;

	int ret = MYADD(a, b) * 20;
	cout << " a + b = " << ret << endl;
}
//2. ȱ��2����ʹ�����������Σ���Щ�����Ȼ��������
#define MYCOMPARE(a, b) (((a)<(b))?(a):(b))

int compare(int a, int b)
{
	return a > b ? a : b;
}

void test02()
{
	int a = 10;
	int b = 40;

	int ret = MYCOMPARE(++a,b);
	cout << " ret =  " << ret << endl;

	int ret1 = compare(++a, b);
	cout << " ret1 =  " << ret1 << endl;
}

//ȱ��3��������������

//inline��ʹ��
inline int mycompare(int a, int b)
{
	return a > b ? a : b;
}

void test03()
{
	int a = 10;
	int b = 40;
	int ret1 = mycompare(++a, b);
	cout << " ret1 =  " << ret1 << endl;
}

//ע��
//1. ����������������ʵ�ֶ�Ҫ����inline�ؼ���
inline void test();
inline void test()
{

}
//2. ��ĳ�Ա�����Զ�����������

//3. ��������һЩ���ƣ�����������ܽ�����������������
/*
	(1) ���ܴ����κ���ʽ��ѭ��
	(2) ���ܴ��ڹ���������ж�����
	(3) �����岻��̫���Ӵ�
	(4) ���ܶԺ�������ȡַ����
*/

//��������ֻ�Ǹ�������һ�����飬��������һ�����գ����û�н���������Ϊ������������Ҳ�п��ܽ�����������
int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}