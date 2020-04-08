//#include <iostream>
//using namespace std;
//#include <stdexcept> //标准库
//
//// 所有异常的基类是exception
//// 每个子类都有一个what()方法，返回const chat *，可以看到异常的信息
//class Person
//{
//public:
//	Person(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			//抛出越界异常
//			throw out_of_range("年龄必须在0—150之间");
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