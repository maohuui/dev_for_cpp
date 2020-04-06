#include <iostream>
using namespace std;

class AbstractDrinking
{
public:
	virtual void Boll() = 0; //��ˮ
	virtual void Brew() = 0;//����
	virtual void PourInCup() = 0;//���뱭��
	virtual void PutSomething() = 0;//���븨��

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
	void Boll()//��ˮ
	{
		cout << " 1. ��ˮ" << endl;
	}
	void Brew()//����
	{
		cout << " 2. �忧��" << endl;
	}
	void PourInCup()//���뱭��
	{
		cout << " 3. ���뱭��" << endl;
	}
	void PutSomething()//���븨��
	{
		cout << " 4. �����Ǻ�ţ��" << endl;
	}
};

class Tea : public AbstractDrinking
{
public:
	void Boll()//��ˮ
	{
		cout << " 1. ��ˮ" << endl;
	}
	void Brew()//����
	{
		cout << " 2. �ݲ�Ҷ" << endl;
	}
	void PourInCup()//���뱭��
	{
		cout << " 3. ���뱭��" << endl;
	}
	void PutSomething()//���븨��
	{
		cout << " 4. ��������Ƭ" << endl;
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