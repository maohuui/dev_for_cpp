// Class template as function parameter

#include <iostream>
#include <string>

using namespace std;

template<class NameType, class AgeType>
class Person {
	public:
		Person(NameType name, AgeType age) {
			this->m_name = name;
			this->m_age = age;
		}
		NameType m_name;
		AgeType m_age;
};

// Specify the parameter type
void test_func(Person<string, int> &p) {
	cout << p.m_name << ": " << p.m_age << endl;
}

// Parameter templating
//template<class T1, class T2>
//void test_func(Person<T1, T2> &p) {
//	cout << typeid(T1).name() << endl;
//	cout << typeid(T2).name() << endl;
//	cout << p.m_name << ": " << p.m_age << endl;
//}

// Whole class templating
//template<class T>
//void test_func(T &p) {
//	cout << typeid(T).name() << endl;
//	cout << p.m_name << ": " << p.m_age << endl;
//}
void test() {
	Person<string, int> p1("Tom", 10);
	test_func(p1);
}

int main() {
	test();

	return 0;
}
