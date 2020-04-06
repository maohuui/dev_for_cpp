#include <iostream>
using namespace std;

template <class T>
class Base
{

};

//子类创建的时候必须要指定T 的类型
template<class T1, class T2>
class Son : public Base<T2>
{
public:

	T1 m_B;
};


int main()
{

	system("pause");
	return EXIT_SUCCESS;
}