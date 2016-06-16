 ///
 /// @file    function_template_overloading4.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 08:04:29
 ///

//模板函数重载
//优先级与执行顺序：
//总体来说，一般函数优先于模板函数的执行

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int Max(int i1, int i2)
{
	cout << "Normal Max" << endl;
	return i1 > i2 ? i1 : i2;
}

template <class T>
T Max(T t1, T t2)
{
	cout << "Template Max,sizeof(t1);" << sizeof(t1) << endl;
	return t1 > t2 ? t1 : t2;
}

int main(int argc, char* argv[])
{
	int i1 = 1;
	int i2 = 9;
	char c1 = 'a';
	char c2 = 'b';
	int iRet = Max(i1, i2);  //调用普通函数int Max(int i1, int i2)
	char cRet = Max(c1, c2);  //调用模板实例化生成的char Max(char a, char b)
	int iRet2 = Max(c1, c2);  //调用模板实例化生成的char Max(char a, char b),最后将返回值隐式转换成int型
	int cRet2 = Max<char>(i1,i2); //调用模板实例化生成的char Max(char a, char b)

	return 0;

}


