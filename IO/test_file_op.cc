#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

void write_file() {
	ofstream ofs("./test.txt", ios::out | ios::trunc);
	if (!ofs) {
		perror("open file fail");
		exit(EXIT_FAILURE);
	}

	ofs << "one" << endl;
	ofs << "two" << endl;
	ofs << "three" << endl;

	ofs.close();
}

void read_file() {
	ifstream ifs;
	ifs.open("./test.txt", ios::in);
	if (!ifs.is_open()) {
		perror("open file fail");
		exit(EXIT_FAILURE);
	}

	// first method
	//char buf[BUFSIZ];
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}

	// second method
	//while (!ifs.eof()) {
	//	ifs.getline(buf, sizeof(buf));
	//	cout << buf << endl;
	//}

	// third method
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}

	ifs.close();
}

int main(void)
{
	write_file();
	read_file();

	return 0;
}
