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
	p2->showClassName();//��ָ����Է���û��this�ĳ�Ա����
	p2->showA(); //�����thisָ�룬����ͻ�down�����Լ���this �жϣ�
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;

}