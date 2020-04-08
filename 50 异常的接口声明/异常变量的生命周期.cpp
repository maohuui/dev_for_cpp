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
//	throw MyException(); //匿名对象，构造
//}
//int main()
//{
//	try
//	{
//		test02();
//	}
//	//catch (MyException e) // 接收 MyException()匿名对象，值传递，拷贝构造函数
//	//catch (MyException *e) //指针的方式，接收抛出的匿名对象，匿名对象被释放，不可以再操作e
//	//catch (MyException *e) //接收抛出 new MyException()堆区的对象，记得手动释放
//	catch (MyException &e) //匿名对象转正，建议使用这种方式，节省开销
//	{
//		cout << "catch MyException " << endl;
//	}
//	
//
//	system("pause");
//	return EXIT_SUCCESS;
//}