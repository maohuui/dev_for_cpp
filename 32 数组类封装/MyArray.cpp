#include "MyArray.h"
#include <iostream>
using namespace std;

MyArray::MyArray()
{
	cout << "Myarray默认构造函数" << endl;
	this->m_Capacity = 100;
	pAddress = new int[this->m_Capacity];
	this->m_Size = 0;
}

MyArray::MyArray(int capacity)
{
	cout << "Myarray有参构造函数" << endl;
	this->m_Capacity = capacity;
	pAddress = new int[this->m_Capacity];
	this->m_Size = 0;
}

MyArray::MyArray(const MyArray& array)
{
	cout << "Myarray拷贝构造函数" << endl;
	this->m_Capacity = array.m_Capacity;
	pAddress = new int[this->m_Capacity];
	this->m_Size = array.m_Size;

	for (int i = 0; i < this->m_Size; i++)
	{
		this->pAddress[i] = array.pAddress[i];
	}
}

int MyArray::getCapacity()
{
	return m_Capacity;
}

int MyArray::getSize()
{
	return m_Size;
}

void MyArray::setData(int index, int val)
{
	//if(this->m_Size < m_Capacity)
	this->pAddress[index] = val;
	this->m_Size++;
}

void MyArray::pushBack(int val)
{
	//if(this->m_Size < m_Capacity)
	this->pAddress[m_Size] = val;
	this->m_Size++;
}

int MyArray::getData(int index)
{
	return this->pAddress[index];
}

int& MyArray::operator[](int index)
{
	return this->pAddress[index];
}
MyArray::~MyArray()
{
	cout << "Myarray析构函数" << endl;
	if (this->pAddress != NULL)
		delete[] pAddress;
	pAddress = NULL;
}