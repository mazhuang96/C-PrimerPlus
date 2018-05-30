/*************************************************************************
	> File Name: 7_9.cpp
	> Author: mazhuang
	> Mail: mzma.zhuang96@gmail.com 
	> Created Time: Mon 28 May 2018 12:01:35 PM CST
	> Role: 
*************************************************************************/

#include<iostream>
using namespace std;
const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student *pa, int n);
void display1(student st);
void display2(const student *ps);
void display3(const student *pa, int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}


int getinfo(student *pa, int n)
{
	student * pt;
	int i;
	for (i = 0; i < n; i++)
	{
		pt = pa + i;
		cout << "Please enter student's info #" << i + 1 << endl;
		cout << "fullname: ";
		cin.getline(pt->fullname, SLEN);
		if (!pt->fullname)
			break;
		cout << "hobby: ";
		cin.getline(pt->hobby, SLEN);
		cout << "ooplevel: ";
		cin >> pt->ooplevel;

		cin.get();
	}

}
void display1(student st)
{
	cout << "name: " << st.fullname << endl;
	cout << "hobby: " << st.hobby << endl;
	cout << "ooplevel: " << st.ooplevel << endl;
}
void display2(const student * ps)
{

	cout << "name: " << ps->fullname << endl;
	cout << "hobby: " << ps->hobby << endl;
	cout << "ooplevel: " << ps->ooplevel << endl;

}
void display3(const student *pa, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "student #" << i + 1 << endl;
		cout << "name: " << (pa + i)->fullname << endl;
		cout << "hobby: " << (pa + i)->hobby << endl;
		cout << "ooplevel: " << (pa + i)->ooplevel << endl;
	}

}
