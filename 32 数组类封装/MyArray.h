#pragma once
#include <iostream>

class MyArray
{
public:
	MyArray();
	MyArray(int capacity);
	MyArray(const MyArray& array);

	int getCapacity();
	int getSize();

	void pushBack(int val);
	void setData(int index, int val);
	int getData(int index);

	//ÔËËã·ûÖØÔØ
	int& operator[](int index);
	
	~MyArray();


private:
	int* pAddress;
	int m_Capacity;
	int m_Size;
};