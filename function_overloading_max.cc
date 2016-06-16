 ///
 /// @file    function_overloading_max.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 04:16:49
 ///

//求最大值
//重载函数

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int MAX(int a, int b)
{
	return a > b ? a : b;
}

double MAX(double a, double b)
{
	return a > b ? a : b;
}

int main()
{
	cout << MAX(3, 4) << endl;
	cout << MAX(3.4, 2.9) << endl;
	return 0;
}


