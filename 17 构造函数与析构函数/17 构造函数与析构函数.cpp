#include <iostream>
using namespace std;
#include "MyClass.h"

void test01()
{
	//Person p1; //�޲ι��캯��

	////���ŷ���
	//Person p2(10, "lili"); //�вι��캯��
	// 
	//Person p3(p2); //�������캯��

	//��ʽ����
	//Person p4 = Person(10,"xiaomi"); //�вι��캯��
	//Person p5 = Person(p4); // �������캯��

	//ע���
	//Person p(); //�����������ŷ������޲ι��캯�������б�������Ϊ��һ����������
	//Person(10, "lala");  //���������ص㣺��ǰִ����ϵͳ�ͻ�����

	//cout << "----------------" << endl;

	//Person(p5); //�������ÿ������캯������ʼ���������� .//error C2086: ��Person p5��: �ض��� 
	//��������Ϊ ����Ϊ��Person p5

	//��ʽ����
	//Person p6 = 10;
	Person p6(20, "aaa");
	Person p7 = p6;

}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}