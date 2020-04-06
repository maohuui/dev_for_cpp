
#include <iostream>
using namespace std;

class CPU
{
public:
	virtual void calculate() = 0; //CPU
};

class Memory
{
public:
	virtual void storage() = 0;   //内存条
};

class VideoCard
{
public:
	virtual void display() = 0;   //显卡
};


class Computer
{
public:

	Computer(CPU* cpu, VideoCard *card, Memory* mem)
	{
		this->cpu = cpu;
		this->card = card;
		this->mem = mem;
	}
	void doWork()
	{
		this->cpu->calculate();
		this->mem->storage();
		this->card->display();
	}
	~Computer()
	{
		delete cpu;
		delete card;
		delete mem;
	}

	CPU* cpu;
	VideoCard* card;
	Memory* mem;
};

class IntelCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << " Inter cpu  " << endl;
	}
};

class LenovoCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << " Lenovo cpu  " << endl;
	}
};

class InterMem : public Memory
{
public:
	virtual void storage()
	{
		cout << " Inter storage  " << endl;
	}
};

class LenovoMem : public Memory
{
public:
	virtual void storage()
	{
		cout << " Lenovo storage  " << endl;
	}
};

class IntelCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << " Inter Card  " << endl;
	}
};

class LenovoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << " Lenovo Card  " << endl;
	}
};

void test01()
{
	cout << " 第一台" << endl;
	CPU* intel_cpu = new IntelCPU;
	VideoCard* intel_card = new IntelCard;
	Memory* intel_mem = new InterMem;

	
	Computer* computer = new Computer(intel_cpu, intel_card, intel_mem);
	computer->doWork();

	delete computer;
}

void test02()
{
	cout << " 第二台" << endl;
	CPU* lenovo_cpu = new LenovoCPU;
	VideoCard* lenovo_card = new LenovoCard;
	Memory* lenovo_mem = new LenovoMem;


	Computer* computer = new Computer(lenovo_cpu, lenovo_card, lenovo_mem);
	computer->doWork();

	delete computer;
}


int main()
{
	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}