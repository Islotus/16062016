 ///
 /// @file    function_member_template.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 19:36:01
 ///

//函数成员模板  function member template
//注意：
//这个程序不能执行，我也看不出怎么调试

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//普通模板类
template <class T1, class T2>
class Convert
{
public:
	T2 f(T1 data)
	{	return T2(data);	}
};

//嵌套了模板函数的模板类
template<class T1>
class Test                //test模板类定义
{
public:
	template<class T2>    //模板成员函数定义
		T1 f(T2 b)
		{	return T1(b);	}  //将b由T2类型强制转换成T1类型
};

//如下在类外实现f()函数的方法在VC6中编译不能通过，VC2008中可以。
//template<class T1>
//template<class T2>
//T1 Test<T1>::f(T2 b)  //模板成员函数的实现
//{
//	return T1(b);  //将b由T2类型强制转换成T1类型
//}

int  main()
{
	//普通模板类的使用
	Convert<char,int> c1;
	cout << c1.f('A') << endl;

	Convert<float,int> c2;
	cout << c2.f(9.85f) << endl;

	Convert<int,short> c3;
	cout << "hex" << showbase << c3.f(0x7fffffff) << endl << "dec";

	//通过上述3个例子，发现有些不太人性化，必须指明第一个模板参数
	//其实这个参数就是函数f的参数，没必要指定
	//这可以使用嵌套模板函数的模板类来解决。见Test类的实现。
	
	//嵌套模板类的使用
	Test<int> t;
	cout << t.f(3.14f) << endl;

	getchar();

	return 0;

}




