#include <iostream>
using namespace std;

//��������
//���ñ�������һ��Ϸ����ڴ�ռ��ַ
void test()
{
	//int& ref = 10;

	//�൱��int tmp =10, const int& ref = tmp;
	const int& ref = 10; //����const֮��Ϳ����ˣ��������Ż�
	//ret = 1000; //������ֱ���޸�
	int* p = (int*)&ref;
	*p = 1000;
	cout << "ref: " << ref << endl;
}
//�������õ�ʹ�ó���
void show(const int& a)
{
	cout << "a: " << a << endl;
}

// ���õı����ǣ�ָ�볣��
// Type* const b = &a;
void test01()
{
	int a = 20;
	int& b = a; //int* const b = &a;

	b = 100; // *b = 100;
}

//ָ�������
struct Person
{
	int age;
};
void allocateSpace(Person** p)
{
	*p = (Person*)malloc(sizeof(Person));

	(*p)->age = 10;
}
void test02()
{
	Person* p = NULL;
	allocateSpace(&p);

	cout << "����" << p->age << endl;
 }

void allocateSpace02(Person* &p) //Person* &p = p
{
	p = (Person*)malloc(sizeof(Person));

	p->age = 30;
}
void test03()
{
	Person* p = NULL;
	allocateSpace02(p);

	cout << "����" << p->age << endl;
}

int main()
{
	test();
	test01();
	test02();
	test03();


	system("pause");
	return EXIT_SUCCESS;
}