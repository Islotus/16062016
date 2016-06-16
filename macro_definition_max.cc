 ///
 /// @file    template.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 04:10:44
 ///

//求最大值
//宏定义

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main()
{
	cout << MAX(3, 4) << endl;
	cout << MAX(3.4, 2.9) << endl;
	return 0;
}


