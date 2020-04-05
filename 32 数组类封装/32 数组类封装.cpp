#include <iostream>
using namespace std;
#include "MyArray.h"


void test01()
{
	MyArray* arr1 = new MyArray(10);

	delete arr1;

	MyArray arr2;
	for (int i = 0; i < 10; i++)
		arr2.pushBack(i + 100);

	MyArray arr3(arr2);
	for (int i = 0; i < 10; i++)
		cout << " " << arr3.getData(i);
	cout << endl;

	arr3.setData(2, 100);

	for (int i = 0; i < 10; i++)
		cout << " " << arr3.getData(i);
	cout << endl;
}


void test02()
{
	MyArray arr;
	for (int i = 0; i < 10; i++)
		arr.pushBack(i + 100);

	arr[0] = 200; //[] ÔËËã·û
	cout << arr[0] << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}