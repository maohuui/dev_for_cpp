#include <iostream>
using namespace std;

//malloc free
/*
1. ����ָ������ĳ���
2. malloc ����void* c++�������ǿת
3. malloc���������ڴ�ʧ�ܣ����Ա����жϷ���ֵ��ȷ���ڴ�����ͷųɹ�
4. �û�ʹ�ö���֮ǰ�����ʼ���� ���캯��������ʾ���ã�
*/

// c++ �ṩ��new /delete
/*
1. new ����ö���Ĺ��캯����delete����ö������������
2. new�ڲ���ѭ���жϷ����ڴ��Ƿ�ɹ��Ļ��ƣ����䲻�ɹ��ᱨ�쳣
3. 
*/

class Person
{
public:

	Person()
	{
		cout << "Person ���캯������" << endl;

	}
	Person(int a)
	{
		cout << "Person �вι��캯������" << endl;
	}

	~Person()
	{
		cout << "Person ������������" << endl;

	}
};

void test01()
{
	Person *p = new Person;

	delete p;
}
/*
malloc �� new ����
1. new���������malloc�ǿ⺯��
2. malloc ����ֵ��void*, new ���ص���new�����Ķ���ָ��
3. malloc ��Ҫ�ж��Ƿ񿪱ٳɹ�����new�ڲ��������жϲ������ڲ�malloc�����ڶ������ж��Ƿ����ɹ������ù��캯����
4. malloc��������˹��캯��new���ù��캯��
*/

//ע������
//��Ҫ��void* ȥ����new�����Ķ���ԭ���ǲ����ͷ�
void  test02()
{
	void* p = new Person;
	delete (Person*)p;
}

//3. ����new�������� 
void test03()
{
	//����new�ڶ����������飬���б���Ҫ����Ĭ�Ϲ��캯���������޷�����
	Person* p = new Person[10];
	
	delete[] p; //�����ͷ�
}
//������� �ڴ��У� һ��ʼ�ж�������������Ƕ���
// |---|------|-------|-------|
// |10 |object| object| object|
// |---|------|-------|-------|

int main()
{
	//test01();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}