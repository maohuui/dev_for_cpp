//#include <iostream>
//using namespace std;
//#include <string>
//
//class Person
//{
//public:
//	Person(int a)
//	{
//		cout << " Person �вι��캯�� " << endl;
//		this->m_Age = a;
//	}
//	void showAge()
//	{
//		cout << " " << this->m_Age << endl;
//	}
//	~Person()
//	{
//		cout << " Person �������� " << endl;
//	}
//private:
//	int m_Age;
//};
////ָ����������أ�����ָ�룬�����й�new�����Ķ�����ͷ�
//class SmartPointer
//{
//public:
//	SmartPointer(Person *person)
//	{
//		cout << " SmartPointer���캯�� " << endl;
//		this->person = person;
//	}
//	//����ָ�������
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
//		cout << " SmartPointer�������� " << endl;
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