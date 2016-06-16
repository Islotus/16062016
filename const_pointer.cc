 ///
 /// @file    const_pointer.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-15 23:04:19
 ///

//测试常量指针是不是不能用这个指针改变所指的变量，
//但变量的值可以通过其他途径改变
//const int * ip = num  常量指针：pointer to const
//int * const ip = num  指针常量: const pointer

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num = 10;
	cout << "int num = 10" << endl;
	cout << "num的值为： " << num << endl;

	const int * ip = &num;
	cout << "const int * ip = num " << endl;
	cout << "常量指针ip所指的变量值为:" << *ip << endl;

#if 0   //编译通不过，即不能通过常量指针来改变变量的值
	*ip = 100;  //同过常量指针改变变量num的值
	cout << "*ip = 100";
	cout << "后，num的值为：" << num << endl;
#endif

	num = 100;  //变量的值可以不通过常量指针来改变。
	cout << "num = 100 " << endl;
	cout << "num值变后为：" << endl;
	
	return 0;

}
