#include <iostream>
using namespace std;


class Student
{
public: 
	void setName(string name)
	{
		m_Name = name;
	}
	void setId(int id)
	{
		m_Id = id;
	}
	string getName()
	{
		return m_Name;
	}
	int getId()
	{
		return m_Id;
	}
	void showInfo()
	{
		cout << "ÐÕÃû£º" << m_Name << " Ñ§ºÅ£º" << m_Id << endl;
	}

	string m_Name;
	int m_Id;
};

void test02()
{
	Student s1;
	s1.setName("xiaohong");
	s1.setId(1);
	
	s1.showInfo();

}


int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}