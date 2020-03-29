#include "myArray.hpp"

void printInt(myArray<int> &arr) {
	for (int i = 0; i < arr.getSize(); ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test() {
	myArray<int> m_int(100);
	for (int i = 0; i < 10; ++i) {
		m_int.pushBack(i + 10);
	}

	cout << "capacity: " << m_int.getCapacity() << endl;
	printInt(m_int);

	for (int j = 0; j < 5; ++j) {
		m_int.popBack();
	}
	printInt(m_int);
}

int main(void)
{
    test();

    return 0;
}
