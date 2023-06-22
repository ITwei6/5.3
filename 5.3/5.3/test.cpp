#include <iostream>
using namespace std;
//class Time
//{
//public:
//	Time()
//	{
//		_hour = 1;
//		_minute = 1;
//		_second = 1;
//	}
//	Time(const Time& s)
//	{
//		_hour = s._hour;
//		_minute = s._minute;
//		_second = s._second;
//		cout << "Time(const Time& s)" << endl;
//	}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Data
//{
//
//public:
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private://内置类型
//	int _year=1;
//	int _month=1;
//	int _day=1;
//	//自定义类型
//	Time _t;
//};
//int main()
//{
//	Data d1;
//	Data d2(d1);
//
//	d2.Print();
//}

class Data
{

public:
	Data(int year =2023, int month = 5, int day=4)
	{
	 	_year = year;
		_month = month;
		_day = day;
	}
	//Data (const Data d)//这种形式是错误的，不可以这样写，不能传值过去
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}

	Data(const Data& d)//正确的写法是这样，传引用过去
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void Print()
	{
		cout << _year <<"-"<< _month <<"-"<< _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
Data Test(Data d)
{
	Data tmp(d);
	return tmp;
}
int main()
{
	Data d1(2023, 5, 3);
	Data d2(d1);
	Data tmp=Test(d2);
	d2.Print();
}
//}
//typedef int DataType;
//struct stack//class可以定义一个类
//{
//public://访问限定符
//	stack(int capacity = 4)//缺省值
//	{
//		cout << "stack(int capacipty=4)" << endl;
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(DataType data)
//	{
//		_array[_size] = data;
//		_size++;
//	}
//	void Pop()
//	{
//		if (Empty())
//		{
//			return;
//		}
//		--_size;
//
//	}
//	int Empty()
//	{
//		return _size == 0;
//	}
//
//	~stack()
//	{
//		cout << "~stack()" << endl;
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private://访问限定符
//	DataType* _array;
//	int _capacity;
//	int _size;
//};
//
//int main()
//{
//	stack s1;//定义一个对象
//	stack s2(s1);
//
//}
//class MyQueue
//{
//private:
//
//	stack pushst;
//	stack popst;
//};
