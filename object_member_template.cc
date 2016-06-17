 ///
 /// @file    object_member_template.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 23:05:46
 ///

//此代码的难点在于“类模板不等于类定义，需要实例化或特化来生成类实例”。上述代码中，Inside类模板的访问权限为public
//，因此可以调用下述语句：
//“Outside<int>::Inside<double> obin(3.5);”
//在Outside类内使用“Inside<T> t;”语句声明了Inside<T>类的对象，在Outside模板类对象创建时，首先采用
//隐式实例化先生成Inside<T>类的定义，而后根据此定义创建对象成员t

//嵌套模板类的模板类  template class of nested template class

#include <iostream>
#include <stdio.h>
using std::cin;
using std::cout;
using std::endl;

template<class T>
class Outside  //外部Outside类定义
{
public:
	template<class R>
	class Inside  //嵌套类模板定义
	{
	private:
		R r;
	public:
		Inside(R x)  //模板类的成员函数可以在定义时实现
		{
			r = x;
		}
		//void disp();
		void disp()
		{	cout << "Inside: " << r << endl;	}
	};
	Outside(T x)  //Outside类的构造函数
	:t(x)
	{
	}

	//void disp()
	void disp()
	{
		cout << "Outside: ";
		t.disp();
	}
private:
	Inside<T> t;
};

 
//template<class T>
//template<class R>
//void Outside<T>::Inside<R>::disp()  //模板类的成员函数也可以在定义外实现
//{                                 //但必须是在所有类定义的外边，不能放在Outside内Inside外去实现
//	cout << "Inside: " << Outside<T>::Inside<R>::r << endl;
//};

//template<class T>
//void Outside<T>::disp()
//{
//	cout << "Outside:";
//	t.disp();
//};


int main()
{
	Outside<int>::Inside<double> obin(3.5);  //声明Inside类对象obin
	obin.disp();

	Outside<int> obout(2);  //创建Outside类对象obout
	obout.disp();

	getchar();
	return 0;

}
