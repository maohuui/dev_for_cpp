//#include <iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& out, Person& p);
//public:
//	Person(int a, int b)
//		: m_A(a)
//		, m_B(b)
//	{
//
//	}
//	Person()
//	{
//
//	}
//	//��ͼʹ�ó�Ա����ʵ��<< ���������
//	//ostream& operator << (ostream& out)
//	//{
//	//	out << " " << this->m_A << " " << this->m_A;
//	//	return out;
//	//}
//
//private:
//	int m_A;
//	int m_B;
//};
//
////����ȫ�ֺ���ʵ��<< �����
//ostream& operator<<(ostream &out, Person& p)
//{
//	out << " " << p.m_A << " " << p.m_B;
//	return out;
//}
//
//void test01()
//{
//	Person p1(10, 10);
//	Person p2(20, 20);
//
//	//p1.operator<<(cout) << endl;
//	//p1 << cout << endl;
//
//	cout << p1 << endl;
//	
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}