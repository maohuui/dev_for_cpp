#include <iostream>
using namespace std;

class Person
{
public:
	void showA() // void showA(Person * this)
	{
		if (this != NULL)
			cout << "" << this->a << endl; // NULL->age
	}
	void showClassName()
	{
		cout << "Person" << endl;
	}

	int a;
};

void test01()
{
	//Person p1;
	//p1.a = 18;
	//p1.showA();
	//p1.showClassName();

	Person* p2 = NULL;
	p2->showClassName();//空指针可以访问没有this的成员函数
	p2->showA(); //如果有this指针，程序就会down，可以加上this 判断，
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;

}