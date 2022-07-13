#pragma once
class LinkedList
{
public:
	void add_to_tail(char val);
	void add_to_front(char val);
	void remove_from_front();
	void remove_from_back();
	void print();
    char top();
    ~LinkedList();
 
private:
	class node {
	public:
		node(char c) {
			_data = c;
			_next = nullptr;
			//_prev = nullptr;
		}
		char _data;
		node* _next;
		//node* _prev;
	};

	node* _head = nullptr;
	node* _tail = nullptr;
	int _size = 0;
};

