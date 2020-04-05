#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"

MyString::MyString(const char* str)
{
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);
}

MyString::MyString()
{

}

//¿½±´¹¹Ôì
MyString::MyString(const MyString& myStr)
{
	this->pString = new char[strlen(myStr.pString) + 1];
	strcpy(this->pString, myStr.pString);
	this->m_Size = strlen(myStr.pString);
}

char& MyString::operator[](int index)
{
	return this->pString[index];
}

MyString& MyString::operator=(MyString& str)
{
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}

	this->pString = new char[strlen(str.pString) + 1];
	strcpy(this->pString, str.pString);
	this->m_Size = str.m_Size;
	return *this;
}

MyString& MyString::operator=(char* str)
{
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}

	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);
	return *this;
}

MyString MyString::operator+(MyString& str)
{
	MyString tmp;
	int newSize = this->m_Size + str.m_Size + 1;

	tmp.pString = new char[newSize];
	memset(tmp.pString, 0, newSize);
	strcat(tmp.pString, this->pString);
	strcat(tmp.pString, str.pString);

	tmp.m_Size = newSize;
	return tmp;	
}

MyString MyString::operator+(const char* str)
{
	MyString tmp;
	int newSize = strlen(str) + this->m_Size + 1;

	tmp.pString = new char[newSize];
	memset(tmp.pString, 0, newSize);
	strcat(tmp.pString, this->pString);
	strcat(tmp.pString, str);

	tmp.m_Size = newSize;
	return tmp;
}

bool MyString::operator==(MyString& str)
{
	if (strcmp(this->pString, str.pString) == 0)
		return true;
	else
		return false;

}

bool MyString::operator==(const char* str)
{
	if (strcmp(this->pString, str))
		return true;
	else
		return false;
}


MyString::~MyString()
{
	if (pString != NULL)
	{
		delete[] pString;
		pString = NULL;
	}
}