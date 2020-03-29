#include <iostream>
using namespace std;

#define MAX 100; //MAX从未被编译器看到过，因为在预处理阶段，所有的MAX已经替换为100

//1. #define 没有类型，也不会进行类型检查
//2. #define 不重视作用域，默认从定义处到文件末尾，用#undef 卸载
//3. 宏变量没有命名空间
namespace Myspace
{
#define num 1020;
}

void test03()
{
	//cout << Myspace::num << endl;
	//int num = 10;
}


int main()
{

	system("pause");
	return EXIT_SUCCESS;
}