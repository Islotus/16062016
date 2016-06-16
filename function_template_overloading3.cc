 ///
 /// @file    function_template_overloading3.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 07:51:47
 ///

//函数模板重载，function template overloading

//普通函数模板和数组的重载

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <class T>  //最好用class，不要用typename,class效率更高
T MAX(T a, T b)
{
	return a > b ? a : b;
}

template <class T>  //最好用class,效率更高
T MAX(T a[], int n)
{
	T max = a[0];
	for(int i = 1; i < n; ++i)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

int main()
{
	cout << MAX(3, 4) << endl;  
	cout << MAX<int>(3, 4) << endl;  //也可以

	int a[] = {2, 9, 7, 3, 8, 5};
	cout << MAX(a,sizeof(a)/sizeof(a[0])) << endl;
	cout << MAX(a,sizeof(a)/sizeof(a[0])) << endl;

	return 0;
}
 
