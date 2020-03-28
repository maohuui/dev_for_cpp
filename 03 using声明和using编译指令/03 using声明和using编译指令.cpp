#include <iostream>
using namespace std;

namespace kingGlory
{
	int sunwukongId = 1;
}

void test01()
{
	int sunwukongId = 2;

	//1. using 声明
	//当就近原则 和 using声明同时出现，需要避免二义性
	//using kingGlory::sunwukongId;
	//cout << "sunwukongId: " << sunwukongId << endl; //using 声明导致多次声明“<未知>
	//cout << "sunwukongId: " << kingGlory::sunwukongId << endl;//using 声明导致多次声明“<未知>
}

namespace LOL
{
	int sunwukongId = 1;
}

void test02()
{
	int sunwukongId = 2;

	//2. using 编译指令
	using namespace kingGlory;
	using namespace LOL;

	//如果有就近原则，优先使用就近原则。
	//如果using编译指令，存在多个并且同时有同名出现，需要加作用域
	cout << "sunwukongId: " << sunwukongId << endl; //结果为：2
	cout << "sunwukongId: " << kingGlory::sunwukongId << endl; //结果为1
}

int main()
{
	test01();
	test02();


	system("pause");
	return EXIT_SUCCESS;
}