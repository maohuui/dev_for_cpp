//#include <iostream>
//using namespace std;
//
//class BaseException
//{
//public:
//	virtual void printError() = 0;
//};
//class NULLPointException : public BaseException
//{
//public:
//	virtual void printError()
//	{
//		cout << "��ָ���쳣" << endl;
//	}
//};
//class OutRangeException : public BaseException
//{
//public:
//	virtual void printError()
//	{
//		cout << "Խ���쳣" << endl;
//	}
//};
//
//void dowork()
//{
//	//throw NULLPointException();
//	throw OutRangeException();
//}
//
//void test03()
//{
//	
//	try
//	{
//		dowork();
//	}
//	catch(BaseException &e)
//	{
//		e.printError();
//	}
//}
//int main()
//{
//	test03();
//
//
//	system("pause");
//	return EXIT_SUCCESS;
//}