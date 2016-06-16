 ///
 /// @file    function_template_overloading.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 06:01:20
 ///

//函数模板支持重载，既可以模板之间重载（同名模板），也可以实现模板和普通函数间的重载，
//但模板的重载相比普通函数的重载要复杂一点

//函数模板和确定数据类型的函数的重载

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

template <class T>  //declare function template
T Max(T x, T y);

int Max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int intX = 1;
	int intY = 2;
	double dblX = 3.0;
	double dblY = 2.9;

	cout << Max(intX, intY) << endl;  //调用Max(int, int)

	cout << Max<double>(dblX, dblY) << endl;  //显示实例化为double型，生成double型模板函数
	cout << Max('A', '8') << endl;  //隐式实例化char型，生成char型模板函数

	return 0;

}

template <class T>
T Max(T x, T y)
{
	return x > y ? x : y;
}
