//#include <iostream>
//using namespace std;
//#include <stdexcept> //��׼��
//
//// �����쳣�Ļ�����exception
//// ÿ�����඼��һ��what()����������const chat *�����Կ����쳣����Ϣ
//class Person
//{
//public:
//	Person(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			//�׳�Խ���쳣
//			throw out_of_range("���������0��150֮��");
//		}
//		this->m_Age = age;
//	}
//	int m_Age;
//};
//
//void test04()
//{
//	
//	try
//	{
//		Person p1(250);
//	}
//	//catch(out_of_range &e)
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//}
//int main()
//{
//	test04();
//
//
//	system("pause");
//	return EXIT_SUCCESS;
//}