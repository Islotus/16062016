 //
 /// @file    tamplate_add.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 04:51:26
 ///

//用模板实现两个变量的相加
//模板的引用使得函数定义摆脱了类型的束缚，代码更为高效灵活。C++中，
//通过下述形式定义一个模板
//template <class T> 或 template <class T>
//关键字class和typename在模板定义时是等价的，但从代码兼容的角度讲，使用class较好一些。
//
//模板由函数模板和类模板之分。通过参数示例化构造出具体的函数或类，称为模板函数或模板类
//
#include <iostream>
#include <string>

using namespace std;

#if 0  //这样也对，  //使用系统库提供的类时，要指明空间
		//与自定义的类要定义在主函数外一样，此时类的周期是在真个函数执行期间。
		//下次别忘指明系统提供的类
using std::cin;
using std::cout;
using std::endl;
using std::string;
#endif

template <typename T>
T add(const T& a, const T& b)
{
	return a + b;
}

int main()
{
	cout << add(10, 20) << endl;  //调用add(const int, const int)
	cout << add(1.0, 2.0) << endl;  //调用add(const double, const double)

	string x("Hello, ");  //string constructor called
	string y("world.");
	cout << add(x, y) << endl;  //调用add(string, string)
	return 0;
}


