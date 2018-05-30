/*************************************************************************
	> File Name: 7_1.cpp
	> Author: mazhuang
	> Mail: mzma.zhuang96@gmail.com 
	> Created Time: Mon 28 May 2018 11:33:22 AM CST
	> Role:计算调和平均数 
*************************************************************************/

#include<iostream>
using namespace std;

double HarmonicMean(const double x, const double y);

int main()
{
	double n_x, n_y;
	
	cout << "Please enter two number:\n";
	cin >> n_x >> n_y;
	while (n_x && n_y)
	{
		cout << n_x << "和" << n_y << "的调和平均数为：" << HarmonicMean(n_x, n_y) << endl;
		cout << "Please enter two number again:\n";
		cin >> n_x >> n_y;
	}

	return 0;
}


double HarmonicMean(const double x, const double y)
{
	return 2.0 * x * y / (x + y);

}
