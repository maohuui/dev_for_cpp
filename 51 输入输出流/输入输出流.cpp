#include <iostream>
using namespace std;
#include <iomanip> //ʹ�ÿ��Ʒ���ʽ��ʽ�������ͷ�ļ�

//cin.get() һ������ʱ���ӻ�������ȡһ���ַ�
void test01()
{
	char c = cin.get();
	cout << c << endl;

	c = cin.get();
	cout << c << endl;

	c = cin.get();
	cout << c << endl;

	c = cin.get();
	cout << c << endl;
}

//cin.get() ��������ʱ������ѻ��з����߻��ڻ�����
void test02()
{
	char buf[1024];
	cin.get(buf, 1024);

	char c = cin.get();
	if (c == '\n')
	{
		cout << "�����ڻ�����" << endl;
	}
	else
	{
		cout << "���в��ڻ�����" << endl;
	}
	cout << buf << endl;
}

//cin.getlin()�ѻ��з���ȡ�������ӵ�
void test03()
{
	char buf[1024];
	cin.getline(buf, 1024);

	char c = cin.get();
	if (c == '\n')
	{
		cout << "�����ڻ�����" << endl;
	}
	else
	{
		cout << "���в��ڻ�����" << endl;
	}
	cout << buf << endl;
}

//cin.ignore()����һ���ַ�
//cin.ignore(2) ���������ַ�
void test04()
{
	cin.ignore();

	char c = cin.get();
	cout << c << endl;

	cin.ignore(2);

	c = cin.get();
	cout << c << endl;
}

//peek()͵��һ�ۣ��ַŻ�ȥ��������
void test05()
{
	char c = cin.peek();
	cout << c << endl;

	c = cin.get();
	cout << c << endl;
}

//pushback()�Ż�
void test06()
{
	char c = cin.get();
	cin.putback(c);

	char buf[1024];

	cin.getline(buf, 1024);
	cout << buf << endl;
}

/*
�ж��û�������������ַ�����������
*/
void func()
{
	char c = cin.peek();
	if (c >= '0' && c < '9')
	{
		int num;
		cin >> num;
		cout << "���֣�" << num << endl;
	}
	else
	{
		char buf[1024];
		cin >> buf;
		cout << "�ַ�����" << buf << endl;
	}
}
/*
���û��������֣�������0-10 ֮�䣬������������
*/

void func01()
{
	cout << " ������0-10 ֮������� ��" << endl;
	int num;
	while (1)
	{
		cin >> num;
		if (num > 0 && num < 10)
		{
			cout << "������ȷ��" << num << endl;
			break;
		}
		cout << "��������" << endl;
		//�������еı�־λ��0��������1 ���쳣
		//
		cin.clear();
		cin.sync(); //��ձ�־λ������ˢ�»�������
		cin.ignore();
		//cout << "cin.fail=" << cin.fail() << endl;
	}
}

void test07()
{
	cout.put('a');

	char buf[] = "hellllllll";
	cout.write(buf, strlen(buf));
}

void test08()
{
	int number = 99;
	cout.width(20);//Ԥ��20�ռ�
	cout.fill('*');//�ո����
	cout.setf(ios::left);//�����
	cout.unsetf(ios::dec);//ж��ʮ����
	cout.setf(ios::hex);//��װʮ������
	cout.setf(ios::showbase);//��ʾ���ƻ���
	cout.setf(ios::oct);//��װ�˽���
	cout << number << endl;

	cout <<setw(20)
		<< setfill('*')
		<< setiosflags(ios::left)
		<< hex
		<< setiosflags(ios::showbase)
		<< setiosflags(ios::oct)
	    << number << endl;
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//func();
	//func01();
	//test07();
	test08();


	return EXIT_SUCCESS;
}