#include <iostream>
using namespace std;

#define MAX 100; //MAX��δ������������������Ϊ��Ԥ����׶Σ����е�MAX�Ѿ��滻Ϊ100

//1. #define û�����ͣ�Ҳ����������ͼ��
//2. #define ������������Ĭ�ϴӶ��崦���ļ�ĩβ����#undef ж��
//3. �����û�������ռ�
namespace Myspace
{
#define num 1020;
}

void test03()
{
	//cout << Myspace::num << endl;
	//int num = 10;
}


int main()
{

	system("pause");
	return EXIT_SUCCESS;
}