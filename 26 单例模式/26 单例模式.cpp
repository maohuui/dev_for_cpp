//#include <iostream>
//using namespace std;
//
////һ������ֻ����һ��ʵ������
//// һ����ϯ��һ����ӡ��
//// ��ϯ�� ��ӡ����
//
//class ChairMan
//{
//public:
//	static ChairMan* getInstance() 
//	{
//		return m_singleMan;
//	}
//	//���ݹ�������ֻ���õ�һ����ϯ�Ķ���ָ��
//
//private:
//	//�����캯��˽�л������ܴ����������
//	ChairMan()
//	{
//		cout << "ChairMan()" << endl; //Ĭ�Ϲ��캯���ڱ���׶��Ѿ���ʼ�ˡ���main����֮ǰ
//	}
//	//�������캯��Ҳ˽�л�
//	ChairMan(const ChairMan& c)
//	{
//		cout << "ChairMan(const ChairMan& c)" << endl;
//	}
//	//Ψһ����ϯָ��
//	static ChairMan* m_singleMan;
//
//};
//
//ChairMan* ChairMan::m_singleMan = new ChairMan;
//
//
//void test01()
//{
//	ChairMan* c1 = ChairMan::getInstance();
//	ChairMan* c2 = ChairMan::getInstance();
//
//	//ChairMan* c3 = ChairMan(*c1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_FAILURE;
//}