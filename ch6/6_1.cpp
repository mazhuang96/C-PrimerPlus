/*************************************************************************
	> File Name: 6_1.cpp
	> Author: mazhuang
	> Mail: mzma.zhuang96@gmail.com 
	> Created Time: Sun 27 May 2018 04:35:34 PM CST
	> Role: 
*************************************************************************/

#include<iostream>
#include<cctype>
using namespace std;


//void TextTransform(char *p[]);

int main()
{
	char ch[100] = {'\0'};
	char *a = ch;
	cout << "Please enter a string, enter '@' to end:\n";
	//cout << "*a:     " << *a << endl;
	//cout << "*a+1:   " << *a + 1 << endl;
	//cout << "(*a)+1: " << (*a) + 1 << endl;
	//cout << "*(a+1): " << *(a + 1) << endl;
	
	cin >> *a;
	while (*a != '@')
	{
		
		a++;
		cin >> *a;
	}
	a = ch;
	//cout << toupper('a') << endl;	
	while (*a != '@')
	{
		if (islower(*a))
			cout << (char)toupper(*a);
		else if (isupper(*a))
			cout << (char)tolower(*a);
		a++;
	}
	cout << endl;
	return 0;
}

/*void TextTransform(char *p[])
{
	if (tolower(*p))
	else if (toupper(*p))
	else if (isdigit(*p))
	else 
		NULL;
}*/
