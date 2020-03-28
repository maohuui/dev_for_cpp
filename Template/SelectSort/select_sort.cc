#include <iostream>

using namespace std;

template<typename T>
void Swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
void Sort(T *arr, int len) {
	for (int i = 0; i < len; ++i) {
		int min = i;

		for (int j = i + 1; j < len; ++j) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}

		if (min != i) {
			Swap(*(arr + min), *(arr + i));
		}
	}
}

template<typename T>
void PrintArr(T *arr, int len) {
	for (int i = 0; i < len; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test() {
    int arr[] = {3, 2, 4, 5, 1};
    int len = sizeof(arr) / sizeof(int);

    cout << "Test char type" << endl;
    Sort(arr, len);
    PrintArr(arr, len);

    cout << "Test char type" << endl;
    char c_arr[] = "nihao";
    len = sizeof(c_arr) / sizeof(char);

    Sort(c_arr, len);
    PrintArr(c_arr, len);
}

int main(void)
{
    test();
    return 0;
}
