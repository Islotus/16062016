 ///
 /// @file    class_template.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-16 08:41:36
 ///

//定义模板类
//我们先编写一个普通的处理int类型数据的栈类Stack A,然后将其改造成模板类，改造成的代码如下

//普通类-->模板类

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class StackA
{
public:
	StackA(int iNum = 1)
	:_point(0)
	,_size(iNum)
	,_sz(new int[_size])
	{
		cout << "StackA(int iNum = 1)" << endl;
	}

	~StackA()
	{
		delete [] _sz;
	}

	bool isEmpty()
	{	return _point == 0;	}

	bool isFull()
	{	return _point == _size;	}

	int& GetPos()
	{	return _point;	}

	bool push(const int& obj);

	bool pop(int& obj);

private:
	int _point;
	int _size;
	int *_sz;
};

bool StackA::push(const int& obj)
{
	if(isFull())
		return false;
	else
	{
		_sz[_point++] = obj;
		return true;
	}
}

bool StackA::pop(int& obj)
{
	if(isEmpty())
		return false;
	else
	{
		obj = _sz[--_point];
		return true;
	}
}

int main()
{
	StackA st(10);  //普通类， int类型
//	StackA<int> st(10);  //模板类，int类型  //还买编程类模板，不可以
	cout << "开始时st是否为空？" << st.isEmpty() << endl;

	st.push(5);  //压入元素5
	cout << "此时st是否为空？" << st.isEmpty() << endl;

	for(int i = 1; i < 10; ++i)
	{
		st.push(i);  //压入9个元素
	}
	cout << "此时st是否已满？" << st.isFull() << endl;

	int rec = 0;
	while(st.pop(rec))
		cout << rec << " ";
	cout << endl;

	return 0;

}


