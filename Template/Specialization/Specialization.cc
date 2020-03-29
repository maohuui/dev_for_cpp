#include <iostream>
#include <string>

using namespace std;

class Person
{
	public:
		Person(string name, int age) {
			this->m_name = name;
			this->m_age = age;
		}

		string m_name;
		int m_age;
};

template<typename T>
bool Compare(T &a, T &b) {
	return a == b;
}

template<> bool Compare<Person>(Person &a, Person &b) {
	return ((a.m_name == b.m_name) && (a.m_age == a.m_age));
}

void test() {
	char a = 'a';
	char b = 'b';
	if (Compare(a, b))
		cout << "char equal" << endl;
	else
		cout << "char not equal" << endl;
	Person p1("Tom", 10);
	Person p2("Jerry", 12);
	if (Compare(p1, p2))
		cout << "Person equal" << endl;
	else
		cout << "Person not equal" << endl;
}

int main(void)
{
	test();

	return 0;
}
