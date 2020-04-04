#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
	void setAge(int age)
	{
		m_Age = age;
	}
	int getAge()
	{
		return m_Age;
	}
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	void setLover(string lover)
	{
		m_Lover = lover;
	}
	/*string getLover()
	{
		return m_Lover;
	}*/


private:
	int m_Age;
	string m_Name;
	string m_Lover;
};

//将成员属性设置为私有的好处就是：自己可以控制属性的读写权限
//将用户传入的数据进行检测
void test01()
{
	Parent p1;
	p1.setAge(12);
	p1.setName("xiao");
	p1.setLover("xx");
	p1.getAge();
	p1.getName();
	//p1.getLover();
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}