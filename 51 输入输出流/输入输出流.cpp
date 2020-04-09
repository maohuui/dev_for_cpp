#include <iostream>
using namespace std;
#include <iomanip> //使用控制符方式格式化输出的头文件

//cin.get() 一个参数时，从缓冲区读取一个字符
void test01()
{
	char c = cin.get();
	cout << c << endl;

	c = cin.get();
	cout << c << endl;

	c = cin.get();
	cout << c << endl;

	c = cin.get();
	cout << c << endl;
}

//cin.get() 两个参数时，不会把换行符拿走还在缓冲区
void test02()
{
	char buf[1024];
	cin.get(buf, 1024);

	char c = cin.get();
	if (c == '\n')
	{
		cout << "换行在缓冲区" << endl;
	}
	else
	{
		cout << "换行不在缓冲区" << endl;
	}
	cout << buf << endl;
}

//cin.getlin()把换行符读取，并且扔掉
void test03()
{
	char buf[1024];
	cin.getline(buf, 1024);

	char c = cin.get();
	if (c == '\n')
	{
		cout << "换行在缓冲区" << endl;
	}
	else
	{
		cout << "换行不在缓冲区" << endl;
	}
	cout << buf << endl;
}

//cin.ignore()忽略一个字符
//cin.ignore(2) 忽略两个字符
void test04()
{
	cin.ignore();

	char c = cin.get();
	cout << c << endl;

	cin.ignore(2);

	c = cin.get();
	cout << c << endl;
}

//peek()偷看一眼，又放回去缓冲区内
void test05()
{
	char c = cin.peek();
	cout << c << endl;

	c = cin.get();
	cout << c << endl;
}

//pushback()放回
void test06()
{
	char c = cin.get();
	cin.putback(c);

	char buf[1024];

	cin.getline(buf, 1024);
	cout << buf << endl;
}

/*
判断用户输入的内容是字符串还是数字
*/
void func()
{
	char c = cin.peek();
	if (c >= '0' && c < '9')
	{
		int num;
		cin >> num;
		cout << "数字：" << num << endl;
	}
	else
	{
		char buf[1024];
		cin >> buf;
		cout << "字符串：" << buf << endl;
	}
}
/*
让用户输入数字，必须在0-10 之间，否则重新输入
*/

void func01()
{
	cout << " 请输入0-10 之间的数字 ：" << endl;
	int num;
	while (1)
	{
		cin >> num;
		if (num > 0 && num < 10)
		{
			cout << "输入正确：" << num << endl;
			break;
		}
		cout << "重新输入" << endl;
		//缓冲区中的标志位，0：正常，1 ：异常
		//
		cin.clear();
		cin.sync(); //清空标志位，并且刷新缓冲区，
		cin.ignore();
		//cout << "cin.fail=" << cin.fail() << endl;
	}
}

void test07()
{
	cout.put('a');

	char buf[] = "hellllllll";
	cout.write(buf, strlen(buf));
}

void test08()
{
	int number = 99;
	cout.width(20);//预留20空间
	cout.fill('*');//空格填充
	cout.setf(ios::left);//左对齐
	cout.unsetf(ios::dec);//卸载十进制
	cout.setf(ios::hex);//安装十六进制
	cout.setf(ios::showbase);//显示进制基数
	cout.setf(ios::oct);//安装八进制
	cout << number << endl;

	cout <<setw(20)
		<< setfill('*')
		<< setiosflags(ios::left)
		<< hex
		<< setiosflags(ios::showbase)
		<< setiosflags(ios::oct)
	    << number << endl;
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//func();
	//func01();
	//test07();
	test08();


	return EXIT_SUCCESS;
}