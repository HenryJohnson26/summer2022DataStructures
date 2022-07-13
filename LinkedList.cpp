#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::~LinkedList() {
    while(_head != nullptr){
        remove_from_front();
    }
}
void LinkedList::add_to_tail(char data) {
	// make new tail node
	node* p = new node(data);

	// if list is empty, new node becomes both head and tail
	if (_head == nullptr) {
		_head = _tail = p;
	} else {
		_tail->_next = p;
		_tail = p;  // update tail only
	}
	_size++;
}

void LinkedList::add_to_front(char val) {
	// make new head node
	node* p = new node(val);

	// if list is empty, new node becomes both head and tail
	if (_head == nullptr) {
		_head = _tail = p;
	} else {
		// attach old head to p, p becomes head
		p->_next = _head;
		_head = p;
	}
	_size++;
}

void LinkedList::remove_from_front() {
	// make sure we don’t operate on an empty list!
	if (_head == nullptr) 
		return;

	// save a pointer to head
	node* p = _head;

	// move head pointer down one node
	_head = _head->_next;

	// destroy the old head
	delete p;
	_size--;
}

void LinkedList::remove_from_back() {
	// make sure we don’t operate on an empty list!
	if (_head == nullptr) 
		return;

	// special case: only one node
	if (_head == _tail) {
		delete _head;
		_head = _tail = nullptr;
	} else {
		// find the next-to-last node
		node* p = _head;
		while (p->_next != _tail) 
			p = p->_next;
		
		delete _tail;
		_tail = p;
		_tail->_next = nullptr;
	}
	_size--;
}

void LinkedList::print() {
	for (node* p = _head; p != nullptr; p = p->_next) {
		cout << p->_data << endl;
	}
}

char LinkedList::top() {
   return _tail->_data;
}