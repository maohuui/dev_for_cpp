#pragma once
#include <iostream>
using namespace std;
#include <string>

//���캯���ķ����Լ�����
/*���ࣺ
���ղ������ࣺ �вι��캯���� �޲ι��캯����Ĭ�Ϲ��캯����
�������ͷ��ࣺ ��ͨ���캯��   �������캯��

*/
class Person
{
public:
	/*1. ���캯����д����
	û�з���ֵ����дvoid����������������ͬ
	�����в��������Է�������
	�б������Զ����ã�������ֻ����һ��
	*/
	
	Person(); //Ĭ�Ϲ��캯����
	Person(int age, string name); //�вι��캯��
	Person(const Person& c);

	/*2. ��������
	û�з���ֵ����дvoid ��������������ͬ���ں�����ǰ��~
	�������в���������������
	�������Զ����ã�ֻ����һ��
	*/
	~Person();

private:
	int m_Age;
	string m_Name;
};

