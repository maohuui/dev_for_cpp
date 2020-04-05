//#include <iostream>
//using namespace std;
//#include <string>
//
//class Person
//{
//public:
//	Person(int a)
//	{
//		cout << " Person 有参构造函数 " << endl;
//		this->m_Age = a;
//	}
//	void showAge()
//	{
//		cout << " " << this->m_Age << endl;
//	}
//	~Person()
//	{
//		cout << " Person 析构函数 " << endl;
//	}
//private:
//	int m_Age;
//};
////指针运算符重载：智能指针，用来托管new出来的对象的释放
//class SmartPointer
//{
//public:
//	SmartPointer(Person *person)
//	{
//		cout << " SmartPointer构造函数 " << endl;
//		this->person = person;
//	}
//	//重载指针运算符
//	Person* operator->()
//	{
//		return this->person;
//	}
//	Person& operator*()
//	{
//		return *(this->person);
//	}
//
//	~SmartPointer()
//	{
//		cout << " SmartPointer析构函数 " << endl;
//		if (person != NULL)
//			delete person;
//		person = NULL;
//	}
//
//private:
//	Person* person;
//};
//
//void test01()
//{
//
//	//Person p1(10);
//	//p1.showAge();
//
//	//Person * p2 = new Person(20);
//	//p2->showAge();
//
//	//delete p2;
//	//p2 = NULL;
//
//	SmartPointer sp = SmartPointer(new Person(20));
//	sp->showAge(); //sp->->showAge()
//	(*sp).showAge();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}