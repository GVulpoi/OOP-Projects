#include "String.hpp"


String::String()
{
	str = NULL;
	size = 0;
}

String::String(char* inp)
{
	if (inp != NULL)
	{
		size = 0;
		while (inp[size] != '\0')
		{
			size++;
		}

		str = new char[size];

		for (int i = 0; i < size; i++)
		{
			str[i] = inp[i];
		}
	}
	else
	{
		std::cout << "Erorr chosing team" << std::endl;
		return;
	}
}

String::String(const String& c1)
{
	size = c1.size;
	str = new char[c1.size];

	for (int i = 0; i < size; i++)
	{
		str[i] = c1.str[i];
	}
}

void String::operator =(char* inp)
{
	if (str != NULL)
	{
		delete[] str;
		size = 0;
	}
	if (inp != NULL)
	{
		size = 0;
		while (inp[size] != '\0')
		{
			size++;
		}

		str = new char[size];

		for (int i = 0; i < size; i++)
		{
			str[i] = inp[i];
		}
	}
	else
	{
		std::cout << "Erorr chosing team" << std::endl;
		return;
	}
}

void String::operator= (String& inp)
{
	if (str != NULL)
	{
		delete[] str;
		size = 0;
	}
	size = inp.size;
	str = new char[size];
	for (int i = 0; i < size; i++)
	{
		str[i] = inp.str[i];
	}
}

String::~String()
{
}

std::ostream& operator <<(std::ostream& out, const String& str)
{
	if (str.str == NULL)
	{
		out << "E NULL";
	}
	else
	{
		for (int i = 0; i < str.size; i++)
		{
			out << str.str[i];
		}
	}

	out << std::endl;
	return out;

}

std::istream& operator >>(std::istream& in, String& str)
{
	if (str.str != NULL)
	{
		delete[] str.str;
		str.size = 0;
	}
	else
	{
		in >> str.size;
		str.str = new char[str.size];

		for (int i = 0; i < str.size; i++)
		{
			in >> str.str[i];
		}

	}

	return in;
}