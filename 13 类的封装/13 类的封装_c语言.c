//#include <stdio.h>
//#include <stdlib.h>
//
//struct Person
//{
//	char m_Name[64];
//	int m_Age;
//};
//
//void PersonEat(struct Person* p)
//{
//	printf("Person %s �ڳԷ�\n", p->m_Name);
//}
//
//void test01()
//{
//	struct Person p;
//	strcpy(p.m_Name, "xiao hong");
//	PersonEat(&p);
//}
//struct Dog
//{
//	char m_Name[64];
//	int m_Age;
//};
//
//void DogEat(struct Dog* p)
//{
//	printf("Dog %s �ڳԷ�\n", p->m_Name);
//}
//
/*
C���Է�װ��ȱ�㣺
	c������û��������ת���ļ��
	�����Ժ���Ϊ����
*/
//void test02()
//{
//	struct Dog p;
//	strcpy(p.m_Name, "wang cai");
//	DogEat(&p);
//
//	struct Person p2;
//	strcpy(p2.m_Name, "lao wang");
//	DogEat(&p2);
//}
//
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}