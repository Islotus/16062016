 ///
 /// @file    template_max.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 04:20:13
 ///

//求最大值
//模板

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename T> 
T MAX(T a, T b)
{
	return a > b ? a : b;
}

int main()
{
	cout << MAX(3, 4) << endl;
	cout << MAX(3.4, 2.9) << endl;
	return 0;
}
