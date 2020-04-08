//#include <iostream>
//using namespace std;
//
////异常的接口声明 vs2019 都可以，类型不一致也可以没有异常类型但是抛出异常也可以
//void func()throw(double)//只允许抛出double异常, 如果throw()中没有类型，代表不允许抛出异常
//{
//	throw 1; //throw int
//	//throw 2.0;
//}
//
//void test01()
//{
//	try
//	{
//		func();
//	}
//	catch (double)
//	{
//		cout << "cach double" << endl;
//	}
//	catch (int)
//	{
//		cout << "catch int" << endl;
//	}
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}