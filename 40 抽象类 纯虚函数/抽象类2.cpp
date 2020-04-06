#include <iostream>
using namespace std;

class AbstractDrinking
{
public:
	virtual void Boll() = 0; //烧水
	virtual void Brew() = 0;//冲泡
	virtual void PourInCup() = 0;//倒入杯中
	virtual void PutSomething() = 0;//加入辅料

	void MakeDrink()
	{
		Boll();
		Brew();
		PourInCup();
		PutSomething();
	}
	int m_A;
	int m_B;
};

class Coffee : public AbstractDrinking
{
public:
	void Boll()//烧水
	{
		cout << " 1. 烧水" << endl;
	}
	void Brew()//冲泡
	{
		cout << " 2. 冲咖啡" << endl;
	}
	void PourInCup()//倒入杯中
	{
		cout << " 3. 倒入杯中" << endl;
	}
	void PutSomething()//加入辅料
	{
		cout << " 4. 加入糖和牛奶" << endl;
	}
};

class Tea : public AbstractDrinking
{
public:
	void Boll()//烧水
	{
		cout << " 1. 烧水" << endl;
	}
	void Brew()//冲泡
	{
		cout << " 2. 泡茶叶" << endl;
	}
	void PourInCup()//倒入杯中
	{
		cout << " 3. 倒入杯中" << endl;
	}
	void PutSomething()//加入辅料
	{
		cout << " 4. 加入柠檬片" << endl;
	}
};

void DoDrink(AbstractDrinking &ad)
{
	ad.MakeDrink();
}

void test02()
{
	AbstractDrinking* c = new Coffee;
	c->MakeDrink();
	cout << "--------------------" << endl;

	delete c;

	c = new Tea;
	c->MakeDrink();
	cout << "--------------------" << endl;

	delete c;
	c = NULL;

	Coffee coffee;
	DoDrink(coffee);
	cout << "--------------------" << endl;

	Tea tea;
	DoDrink(tea);
	cout << "--------------------" << endl;
}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}