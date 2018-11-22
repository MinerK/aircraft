#include "list.h"

#include "List.h"
#include <iostream>

template <typename T>
List<T>::List()
{
	first = nullptr;
}

template <typename T>
List<T>::List(T v)
{
	first = new Node;
	first->next = first;
	first->prev = first;
	first->value = v;
}

template <typename T>
List<T>::~List()
{
	int n = length();
	for (int i = n - 1; i >= 0; i--) {
		remove(0);
	}
	std::cout << "List was deleted." << std::endl;
}

template <typename T>
void List<T>::add(T value)
{
	Node* newnode = new Node(v);
	if (first == nullptr)
	{
		first = newnode;
	}
	else
	{
		Node* last;
		for (last = a0; last->next != nullptr; last = last->next);
		last->next = newnode;
	}
}

template <typename T>
T& List<T>::operator[] (int index)
{
	Node *cursor = first;
	for (int i = 0; i < index; cursor = cursor->next, i++);
	return cursor->value;
}

template <typename T>
void List<T>::remove(int index)
{
		Node *cursor = first;
		for (int i = 0; i < index-1 && cursor->next!=nullptr; cursor = cursor->next, i++);
		cursor->next = cursor->next->next;
		(cursor->next)->prev = cursor->prev;
		if (cursor == first)
		{
			Node* tmp = first->next;
			delete[] first;
			first = tmp;
		}
		else
		{
			delete[] cursor;
		}
}

template <typename T>
int List<T>::length()
{
	if (first == nullptr)
		return 0;
	Node *cursor = first;
	int i = 1;
	while (cursor->next != first)
	{
		cursor = cursor->next;
		i++;
	}
	return i;
}

template <typename T>
void List<T>::Print()
{
	int n = length();
	for (int i = 0; i < n; i++)
	{
		std::cout << i << " : " << operator[] (i) << std::endl;
	}
}

template<class T>
void List<T>::Print(bool(*c)(T), void (*o)())
{

	Node* cursor = first;
	for (; cursor != nullptr; cursor = cursor->next)
	{
		if (c(cursor->value))
		{
			o();
		}
	}
}
