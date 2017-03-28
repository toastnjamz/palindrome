#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include "cs110a.h"

using namespace std;

int main()
{
	void get_text(string& text);
	bool is_palindrome(string text);

	string text;

	for (;;)
	{
		get_text(text);
		is_palindrome(text)? cout<< text << " is a palindrome!\n"
		                   : cout<< text << "is not a palindrome.\n";
	}
return(0);
}

//********************get_text()********************
void get_text(string& text)
{
	cout<< "Give me your palindrome (type stop or quit to exit): ";
	getline (cin, text);
	if ((strupper(text)) == "STOP" || (strupper(text)) == "QUIT") exit(0);
	if (text.empty())
	{
		cout<< "Very funny. Now get lost." <<endl;
		exit(0)
	}
}

//********************is_palindrome()***************
bool is_palindrome(string text)
{
	string filter(string text);
	string reverse(string text);
	string t= filter(text);

	return (t== reverse(t));
}

//********************filter()**********************
string filter(string text)
{
	string sum="";
	for (int i=0; i<text.size(); i++)
	{
		if (isalnum(text[i])) sum += text[i];
	}
	return (strupper(sum));
}

//********************reverse()*********************
string reverse(string text)
{
	string sum="";
	for (int i=text.size()-1; i>0; i--)
	{
		sum += text[i];
	}
return (sum);
}
