#ifndef __MYARRAY_HPP__
#define __MYARRAY_HPP__

#include <iostream>

using namespace std;

template<class T>
class myArray
{
	public:
		explicit myArray(int capacity) {
			this->m_capacity = capacity;
			this->m_size = 0;
			this->pAddr = new T[this->m_capacity];
		}

		myArray(const myArray &arr) {
			this->m_capacity = arr.m_capacity;
			this->m_size = arr.m_size;
			this->pAddr = new T[this->m_capacity];

			for (int i = 0; i < this->m_size; ++i)
				this->pAddr[i] = arr.pAddr[i];
		}

		myArray& operator=(const myArray& arr) {
			if (NULL != this->pAddr) {
				delete[] this->pAddr;
				this->pAddr = NULL;
			}

			this->m_capacity = arr.m_capacity;
			this->m_size = arr.m_size;
			this->pAddr = new T[this->m_capacity];

			for (int i = 0; i < this->m_size; ++i)
				this->pAddr[i] = arr.pAddr[i];

			return *this;
		}

		T& operator[](int index) {
			return this->pAddr[index];
		}

		void pushBack(const T& val) {
			if (this->m_size == this->m_capacity)
				return;

			this->pAddr[this->m_size] = val;
			this->m_size++;
		}

		void popBack() {
			if (0 == this->m_size)
				return;

			this->m_size--;
		}

		int getSize() {
			return this->m_size;
		}

		int getCapacity() {
			return this->m_capacity;
		}

		~myArray() {
			if (NULL != this->pAddr) {
				delete[] this->pAddr;
				this->pAddr = NULL;
			}
		}

	private:
		T *pAddr;
		int m_capacity;
		int m_size;
};

#endif // __MYARRAY_HPP__
