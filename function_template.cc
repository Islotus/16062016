 ///
 /// @file    function_template.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 05:27:52
 ///

//参数：arguments,parameter
//
//函数模板（function template）的定义形式如下  
//template <模板参数表>
//返回类型 函数名 （参数列表）
//{
//	//函数体
//}

//模板参数不能为空，模板参数有两种类型：
//>class 或 typename修饰的类型参数，代表一种类型
//>非类型参数表达式，必须是int类型，使用已知类型符，代表一个常量
//
//返回类型和函数的参数列表中可以包含类型参数，在函数中可以使用模板参数表中的常量表达式
//
//在使用函数模板前，必须要对函数模板进行申明，此声明必须砸外部进行，也就是说不能在任何一个函数
//（包括main函数）中声明
//和普通函数一样，如果在使用函数模板前对函数模板进行了定义，函数模板的声明可以省略。
//
//模板参数实例化，分为：
//隐式实例化和显示实例化

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <class T>
T Max(T x, T y);  //declare function template

int main()
{
	int intX = 1, intY = 2;
	double dblX = 3.9, dblY = 2.9;
	cout << Max(intX, intY) << endl;  //实参为int型，生成int型模板函数，并对第二个参数进行检查
	cout << Max<int>(intX, intY) << endl;  //这样也可以
	
	cout << Max(dblX, dblY) << endl;  //实参为double型，生成double型模板函数，并对第二个参数进行检查
	cout << Max<double>(dblX, dblY) << endl;

	return 0;

}

template <class T>
T Max(T x, T y)  //realize function template
{
	return (x > y ? x : y);
}
