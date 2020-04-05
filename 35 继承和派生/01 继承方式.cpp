#include <iostream>
using namespace std;

/*
利用继承可以减少重复代码
语法： class 子类 : 继承方式 父类
继承方式：public  protected private


*/

class BasePage
{
public:
	void header()
	{
		cout << "公共头" << endl;
	}
	void footer()
	{
		cout << "公共尾" << endl;
	}
	void LeftList()
	{
		cout << "公共列表" << endl;
	}

protected:
	void ProtectedPage()
	{
		cout << "保护页面" << endl;
	}

private:
	void PrivatePage()
	{
		cout << "私有页面" << endl;
	}
};

class GamePage : public BasePage
{
public:
	//void header()
	//{
	//	cout << "公共头" << endl;
	//}
	//void footer()
	//{
	//	cout << "公共尾" << endl;
	//}
	//void LeftList()
	//{
	//	cout << "公共列表" << endl;
	//}
	void ShowPage()
	{
		this->footer();         // 父类公共属性， 公共继承 = 公共权限：子类内部可以访问
		this->header();         // 父类公共属性， 公共继承 = 公共权限：子类内部可以访问
		this->LeftList();       // 父类公共属性， 公共继承 = 公共权限：子类内部可以访问
		this->ProtectedPage();  // 父类保护属性， 公共继承 = 保护权限：子类内部可以访问
		//this->PrivatePage();    // 父类私有属性， 公共继承 = 私有权限：子类内部不可以访问
	}
	void content()
	{
		cout << "游戏界面" << endl;
	}
};

class NewsPage : protected BasePage
{
public:
	//void header()
	//{
	//	cout << "公共头" << endl;
	//}
	//void footer()
	//{
	//	cout << "公共尾" << endl;
	//}
	//void LeftList()
	//{
	//	cout << "公共列表" << endl;
	//}
	void ShowPage()
	{
		this->footer();         // 父类公共属性， 保护继承 = 保护权限：子类内部可以访问
		this->header();         // 父类公共属性， 保护继承 = 保护权限：子类内部可以访问
		this->LeftList();       // 父类公共属性， 保护继承 = 保护权限：子类内部可以访问
		this->ProtectedPage();  // 父类保护属性， 保护继承 = 保护权限：子类内部可以访问
		//this->PrivatePage();    // 父类私有属性， 保护继承 = 私有权限：子类内部不可以访问
	}

	void content()
	{
		cout << "新闻内容" << endl;
	}
};

class MediaPage : private BasePage
{
public:
	//void header()
	//{
	//	cout << "公共头" << endl;
	//}
	//void footer()
	//{
	//	cout << "公共尾" << endl;
	//}
	//void LeftList()
	//{
	//	cout << "公共列表" << endl;
	//}
	void ShowPage()
	{
		this->footer();         // 父类公共属性， 私有继承 = 私有权限：子类内部可以访问
		this->header();         // 父类公共属性， 私有继承 = 私有权限：子类内部可以访问
		this->LeftList();       // 父类公共属性， 私有继承 = 私有权限：子类内部可以访问
		this->ProtectedPage();  // 父类保护属性， 私有继承 = 私有权限：子类内部可以访问
		//this->PrivatePage();    // 父类私有属性， 私有继承 = 私有权限：子类内部不可以访问
	}

	void content()
	{
		cout << "媒体内容" << endl;
	}
};

class MediaP : public MediaPage
{
public:
	void ShowPage()
	{
	//	this->footer();         // 父类的父类 公共属性， 父类私有继承 = 父类私有权限：子类不可以访问
	//	this->header();         // 父类的父类 公共属性， 父类私有继承 = 父类私有权限：子类不可以访问
	//	this->LeftList();       // 父类的父类 公共属性， 父类私有继承 = 父类私有权限：子类不可以访问
	//	this->ProtectedPage();  // 父类的父类 保护属性， 父类私有继承 = 父类私有权限：子类不可以访问
		//this->PrivatePage();    // 父类的父类 私有属性， 父类私有继承 = 父类私有权限：子类不可以访问
	}

};


void test01()
{
	GamePage game; 
	game.content();
	game.ShowPage();
	game.footer();         // 父类公共属性， 公共继承 = 公共权限：子类外部可以访问
	game.header();         // 父类公共属性， 公共继承 = 公共权限：子类外部可以访问
	game.LeftList();       // 父类公共属性， 公共继承 = 公共权限：子类外部可以访问
	//game.ProtectedPage();  // 父类保护属性， 公共继承 = 保护权限：子类外部不可以访问
	//this->PrivatePage();    // 父类私有属性， 公共继承 = 私有权限：子类外部可以访问

	NewsPage news;
	news.content();
	news.ShowPage();
	//news.footer();         // 父类公共属性， 保护继承 = 保护权限：子类外部不可以访问
	//news.header();         // 父类公共属性， 保护继承 = 保护权限：子类外部不可以访问
	//news.LeftList();       // 父类公共属性， 保护继承 = 保护权限：子类外部不可以访问
	//news.ProtectedPage();  // 父类保护属性， 保护继承 = 保护权限：子类外部不可以访问
	//news.PrivatePage();    // 父类私有属性， 保护继承 = 私有权限：子类外部不可以访问
	
	MediaPage media;
	media.content();
	media.content();
	//media.footer();         // 父类公共属性， 私有继承 = 私有权限：子类外部不可以访问
	//media.header();         // 父类公共属性， 私有继承 = 私有权限：子类外部不可以访问
	//media.LeftList();       // 父类公共属性， 私有继承 = 私有权限：子类外部不可以访问
	//media.ProtectedPage();  // 父类保护属性， 私有继承 = 私有权限：子类外部不可以访问
}

//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}