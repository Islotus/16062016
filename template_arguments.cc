 ///
 /// @file    template_arguments.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-17 00:00:03
 ///

//A模板做为B模板的参数
//一下代码在vs2008中可以编译通过，VC6不行

#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

//文件“Stack.h”的内容如下

template<class T, int num>  //类型参数表
class Stack  //Stack类定义
{
public:
	int ReturnNum();  //判断栈是否为空
private:
	T sz[num];  //存储空间，用数组表示
};

template<class T1, int num1>  //参数列表不要求字字相同，但形式要相同
int Stack<T1, num1>::ReturnNum()
{
	return num1;  //返回数组大小
}
 
template<template<class Type, int NUM>class TypeClass, class T1, int N>
void disp()  //函数模板，其类型参数表中包含一个类模板
{
	TypeClass<T1, N> ob;  //类模板的隐式实例化，创建对象ob
	cout << ob.ReturnNum() << endl;  //调用ob的public成员函数
}

int main()
{
	disp<Stack, int, 8> ();  //函数模板的隐式实例化，并调用
	system("pause");
	return 0;
}

