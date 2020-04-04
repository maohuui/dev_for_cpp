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
//	printf("Person %s 在吃饭\n", p->m_Name);
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
//	printf("Dog %s 在吃饭\n", p->m_Name);
//}
//
/*
C语言封装的缺点：
	c语言下没有做类型转换的检测
	将属性和行为分离
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