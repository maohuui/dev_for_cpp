#include <iostream>
using namespace std;

/*
���ü̳п��Լ����ظ�����
�﷨�� class ���� : �̳з�ʽ ����
�̳з�ʽ��public  protected private


*/

class BasePage
{
public:
	void header()
	{
		cout << "����ͷ" << endl;
	}
	void footer()
	{
		cout << "����β" << endl;
	}
	void LeftList()
	{
		cout << "�����б�" << endl;
	}

protected:
	void ProtectedPage()
	{
		cout << "����ҳ��" << endl;
	}

private:
	void PrivatePage()
	{
		cout << "˽��ҳ��" << endl;
	}
};

class GamePage : public BasePage
{
public:
	//void header()
	//{
	//	cout << "����ͷ" << endl;
	//}
	//void footer()
	//{
	//	cout << "����β" << endl;
	//}
	//void LeftList()
	//{
	//	cout << "�����б�" << endl;
	//}
	void ShowPage()
	{
		this->footer();         // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ڲ����Է���
		this->header();         // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ڲ����Է���
		this->LeftList();       // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ڲ����Է���
		this->ProtectedPage();  // ���ౣ�����ԣ� �����̳� = ����Ȩ�ޣ������ڲ����Է���
		//this->PrivatePage();    // ����˽�����ԣ� �����̳� = ˽��Ȩ�ޣ������ڲ������Է���
	}
	void content()
	{
		cout << "��Ϸ����" << endl;
	}
};

class NewsPage : protected BasePage
{
public:
	//void header()
	//{
	//	cout << "����ͷ" << endl;
	//}
	//void footer()
	//{
	//	cout << "����β" << endl;
	//}
	//void LeftList()
	//{
	//	cout << "�����б�" << endl;
	//}
	void ShowPage()
	{
		this->footer();         // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ڲ����Է���
		this->header();         // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ڲ����Է���
		this->LeftList();       // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ڲ����Է���
		this->ProtectedPage();  // ���ౣ�����ԣ� �����̳� = ����Ȩ�ޣ������ڲ����Է���
		//this->PrivatePage();    // ����˽�����ԣ� �����̳� = ˽��Ȩ�ޣ������ڲ������Է���
	}

	void content()
	{
		cout << "��������" << endl;
	}
};

class MediaPage : private BasePage
{
public:
	//void header()
	//{
	//	cout << "����ͷ" << endl;
	//}
	//void footer()
	//{
	//	cout << "����β" << endl;
	//}
	//void LeftList()
	//{
	//	cout << "�����б�" << endl;
	//}
	void ShowPage()
	{
		this->footer();         // ���๫�����ԣ� ˽�м̳� = ˽��Ȩ�ޣ������ڲ����Է���
		this->header();         // ���๫�����ԣ� ˽�м̳� = ˽��Ȩ�ޣ������ڲ����Է���
		this->LeftList();       // ���๫�����ԣ� ˽�м̳� = ˽��Ȩ�ޣ������ڲ����Է���
		this->ProtectedPage();  // ���ౣ�����ԣ� ˽�м̳� = ˽��Ȩ�ޣ������ڲ����Է���
		//this->PrivatePage();    // ����˽�����ԣ� ˽�м̳� = ˽��Ȩ�ޣ������ڲ������Է���
	}

	void content()
	{
		cout << "ý������" << endl;
	}
};

class MediaP : public MediaPage
{
public:
	void ShowPage()
	{
	//	this->footer();         // ����ĸ��� �������ԣ� ����˽�м̳� = ����˽��Ȩ�ޣ����಻���Է���
	//	this->header();         // ����ĸ��� �������ԣ� ����˽�м̳� = ����˽��Ȩ�ޣ����಻���Է���
	//	this->LeftList();       // ����ĸ��� �������ԣ� ����˽�м̳� = ����˽��Ȩ�ޣ����಻���Է���
	//	this->ProtectedPage();  // ����ĸ��� �������ԣ� ����˽�м̳� = ����˽��Ȩ�ޣ����಻���Է���
		//this->PrivatePage();    // ����ĸ��� ˽�����ԣ� ����˽�м̳� = ����˽��Ȩ�ޣ����಻���Է���
	}

};


void test01()
{
	GamePage game; 
	game.content();
	game.ShowPage();
	game.footer();         // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ⲿ���Է���
	game.header();         // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ⲿ���Է���
	game.LeftList();       // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ⲿ���Է���
	//game.ProtectedPage();  // ���ౣ�����ԣ� �����̳� = ����Ȩ�ޣ������ⲿ�����Է���
	//this->PrivatePage();    // ����˽�����ԣ� �����̳� = ˽��Ȩ�ޣ������ⲿ���Է���

	NewsPage news;
	news.content();
	news.ShowPage();
	//news.footer();         // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ⲿ�����Է���
	//news.header();         // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ⲿ�����Է���
	//news.LeftList();       // ���๫�����ԣ� �����̳� = ����Ȩ�ޣ������ⲿ�����Է���
	//news.ProtectedPage();  // ���ౣ�����ԣ� �����̳� = ����Ȩ�ޣ������ⲿ�����Է���
	//news.PrivatePage();    // ����˽�����ԣ� �����̳� = ˽��Ȩ�ޣ������ⲿ�����Է���
	
	MediaPage media;
	media.content();
	media.content();
	//media.footer();         // ���๫�����ԣ� ˽�м̳� = ˽��Ȩ�ޣ������ⲿ�����Է���
	//media.header();         // ���๫�����ԣ� ˽�м̳� = ˽��Ȩ�ޣ������ⲿ�����Է���
	//media.LeftList();       // ���๫�����ԣ� ˽�м̳� = ˽��Ȩ�ޣ������ⲿ�����Է���
	//media.ProtectedPage();  // ���ౣ�����ԣ� ˽�м̳� = ˽��Ȩ�ޣ������ⲿ�����Է���
}

//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}