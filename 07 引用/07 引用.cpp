#include <iostream>
using namespace std;

//���ã���һ���ڴ�ռ� �����
//�﷨��Type&���� = ԭ��
void test01()
{
	int a = 10;
	int& b = a;
	b = 100;

	cout << "a: " << a << " b:" << b << endl; //�����a:100 b:100
}

//���ñ���Ҫ��ʼ��
void test02()
{
	int b;
	int& c = b;
}

// һ����ʼ���󣬾Ͳ������޸�ָ����
//�൱�ڸ�ֵ
void test03()
{
	int b = 100;
	int& c = b;

	int d = 200;
	c = d;

	cout << " b:" << b << endl; //200
	cout << " c:" << c << endl; //200
	cout << " d:" << d << endl; //200
}

//���������������
void test04()
{
	int arr[10];
	int(&pArr)[10] = arr;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << pArr[i] << " ";
	}
	cout << endl;

	//�ȶ�����������ͣ��ڶ�������
	typedef int(ARRAY_TYPE)[10];

	ARRAY_TYPE& pArr2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << pArr2[i] << " ";
	}
	cout << endl;
}

//�����Ĵ��ݷ�ʽ
//ֵ���� 
void mySwap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "mySwap() a:" << a << endl;
	cout << "mySwap() b:" << b << endl;
}
void test05()
{
	int a = 10;
	int b = 20;
	mySwap(a, b);

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}

//��ַ����
void mySwap01(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "mySwap01() a:" << *a << endl;
	cout << "mySwap01() b:" << *b << endl;
}
void test06()
{
	int a = 10;
	int b = 20;
	mySwap01(&a, &b);

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}

//���ô���
void mySwap02(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "mySwap02() a:" << a << endl;
	cout << "mySwap02() b:" << b << endl;
}
void test07()
{
	int a = 10;
	int b = 20;
	mySwap02(a, b);

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}

//���õ�ע������
//1. ��Ҫ���ؾֲ�����������
int& myFunc()
{
	int a = 10;
	return a;
}
void test08()
{
	int& ret = myFunc();
	cout << "ret:" << ret << endl; //�������Ż����������֮ǰ������
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;
}

//2. ��������ķ���ֵ��һ�����ã���ô�������������Ϊ��ֵ��������
int& myFunc2()
{
	static int a = 10;
	return a;
}
void test09()
{
	int& ret = myFunc2();
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;
	cout << "ret:" << ret << endl;

	myFunc2() = 100;
	cout << "ret:" << ret << endl;
}


int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();

	test08();
	test09();

	system("pause");
	return EXIT_SUCCESS;
}