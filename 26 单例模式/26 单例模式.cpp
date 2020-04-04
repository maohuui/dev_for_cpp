//#include <iostream>
//using namespace std;
//
////一个类中只能有一个实例对象
//// 一个主席，一个打印机
//// 主席类 打印机类
//
//class ChairMan
//{
//public:
//	static ChairMan* getInstance() 
//	{
//		return m_singleMan;
//	}
//	//数据共享，而且只许拿到一个主席的对象指针
//
//private:
//	//将构造函数私有化，不能创建多个对象
//	ChairMan()
//	{
//		cout << "ChairMan()" << endl; //默认构造函数在编译阶段已经开始了。在main函数之前
//	}
//	//拷贝构造函数也私有化
//	ChairMan(const ChairMan& c)
//	{
//		cout << "ChairMan(const ChairMan& c)" << endl;
//	}
//	//唯一的主席指针
//	static ChairMan* m_singleMan;
//
//};
//
//ChairMan* ChairMan::m_singleMan = new ChairMan;
//
//
//void test01()
//{
//	ChairMan* c1 = ChairMan::getInstance();
//	ChairMan* c2 = ChairMan::getInstance();
//
//	//ChairMan* c3 = ChairMan(*c1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_FAILURE;
//}