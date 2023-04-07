#pragma once
#include <iostream>


class String
{
	char* str;
	int size;
public:

	String();

	String(char* inp);

	String(const String& c1);

	~String();

	void operator =(char* inp);

	void operator =(String& inp);

	friend std::ostream& operator <<(std::ostream& out, const String& str);
	friend std::istream& operator >>(std::istream& in, String& str);

};