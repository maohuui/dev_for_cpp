//#include <iostream>
//using namespace std;
//
//class MyException
//{
//public:
//	MyException()
//	{
//		cout << "MyException()" << endl;
//	}
//	MyException(const MyException & e)
//	{
//		cout << "MyException(const MyException & e)" << endl;
//	}
//
//	~MyException()
//	{
//		cout << "~MyException()" << endl;
//	}
//};
//
//void test02()
//{
//	throw MyException(); //�������󣬹���
//}
//int main()
//{
//	try
//	{
//		test02();
//	}
//	//catch (MyException e) // ���� MyException()��������ֵ���ݣ��������캯��
//	//catch (MyException *e) //ָ��ķ�ʽ�������׳��������������������ͷţ��������ٲ���e
//	//catch (MyException *e) //�����׳� new MyException()�����Ķ��󣬼ǵ��ֶ��ͷ�
//	catch (MyException &e) //��������ת��������ʹ�����ַ�ʽ����ʡ����
//	{
//		cout << "catch MyException " << endl;
//	}
//	
//
//	system("pause");
//	return EXIT_SUCCESS;
//}