#include <iostream>
using namespace std;

//1. ȫ�ֱ��������ǿ
int a;
//int a = 10; //int a: �ض���

//2. ���������ǿ:�βα������ͼ����ǿ��������������ֵ�����ǿ
int getRectArea(int w, int h)
{
	return w * h;
}

void test02()
{
	//getRectArea(10, 20, 30); //�������
}

//3. ����ת�������ǿ
void test03()
{
	char* p = (char*)malloc(10); //malloc����void*
}

//4. struct��ǿ
struct Person
{
	int age;
	void func() { age++; } //c++�����нṹ������к���
};

void test04()
{
	Person p; //c++������ �����ṹ����Բ���struct�ؼ���
	p.age = 10;
	p.func();

	cout << "p �����䣺" << p.age << endl;
}

//5. bool������ǿ
// bool����true(1) false(0)
bool flag = true;

void test05()
{
	cout << "sizeof(flag): " << flag << endl; //�����1
	cout << "flag: " << flag << endl;
}

//6. ��Ŀ�������ǿ
void test06()
{
	int a = 10;
	int b = 20;

	printf("ret = %d\n", a > b ? a : b);

	//c++�����У���Ŀ��������ص��Ǳ��� b = 100;
	a > b ? a : b = 100;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

int main()
{
	test02();
	test03();
	test04();
	test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;
}