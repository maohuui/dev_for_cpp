#pragma once

template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_Capacity];
	}

	MyArray(MyArray& arr)
	{
		this->m_Capacity = arr.capacity;
		this->m_Size = arr.m_Size;
		pAddress = new T[this->m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	MyArray& operator = (MyArray& arr)
	{
		if (this->pAddress != NULL)
			delete[] pAddress;

		this->m_Capacity = arr.capacity;
		this->m_Size = arr.m_Size;
		pAddress = new T[this->m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	void pushBack(const T& val)
	{
		if (this->m_Size == this->m_Capacity)
			return;
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	T pop()
	{

		if (this->m_Size == 0)
			return;
		this->m_Size--;
		T tmp = this->pAddress[this->m_Size];
		return tmp;
	}

	int getSize()
	{
		return this->m_Size;
	}

	~MyArray()
	{
		if (this->pAddress != NULL)
			delete[] pAddress;
		pAddress = NULL;
	}

private:
	T* pAddress;
	int m_Capacity;
	int m_Size;

};

