#pragma once
template <class T>
class List
{
public:
	List();
	List(T v);
	~List();
	void add(T value);
	T& operator[] (int index);
	void remove(int);
	int length();
	void Print();
	void Print(bool(*)(T),void(*)());

private:
	struct Node
	{
		T value;
		Node* next;
		Node(T a)
		{
			value = a;
			next = nullptr;
		}
	};
	Node* first;
};

