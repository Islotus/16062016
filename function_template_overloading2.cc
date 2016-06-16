 ///
 /// @file    function_template_overloading2.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 06:13:30
 ///

//函数模板重载 function template overloading

//函数模板和函数模板的重载

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <class T>
T Max(T x, T y);

template <class T>
T Max(T x, T y, T z)
{
	return x > y ? (x > z ? x : z) : (y > z ? y : z);
}

int main()
{
	int intX = 1;
	int intY = 2;
	int intZ = 3;

	double dblX = 3.0;
	double dblY = 2.9;

	cout << Max<int>(intX, intY) << endl;  //显示调用实例化的Max(int, int)
	cout << Max<int>(intX, intY, intZ) << endl;  //显示调用实例化的Max(int, int, int)
	cout << Max<double>(dblX, dblY) << endl;  //显示实例化的double型，生成double型模板函数
	cout << Max('A','8') << endl;  //隐式实例化char型，生成char型模板函数

	return 0;
}

template <class T>
T Max(T x, T y)
{
	return x > y ? x : y;
}
