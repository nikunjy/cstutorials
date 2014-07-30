#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;
template<typename T>
struct Node { 
	T val; 
	Node<T> *next;
	Node(T val) {
		this->val = val; 
		next  = nullptr;
	}
};
template<typename T>
class LinkedList { 
public:
	Node<T> *start;
	Node<T>* last() { 
		Node<T> *x = start; 
		if (x == nullptr) { 
				return nullptr;
		}
		while (x->next != nullptr) { 
			x = x->next;
		}
		return x;
	}
	Node<T>* search(T val) { 
		Node<T>* x = start; 
		while (x != nullptr) { 
			if (x->val == val) { 
				return x;
			}
			x = x->next;
		}
		return nullptr;
	}
	bool isFound(T val) {
	 Node<T>* x = start; 
	 while (x != nullptr) { 
	 		if (x->val == val) { 
	 			return true;
	 		}
	 }
	 return false;
	}
	LinkedList() { 
		start = nullptr;
	}
	LinkedList(T val) { 
		start = new Node<T>{val};
	}
	void insert(T val) {
		if (start == nullptr) { 
			start = new Node<T>{val};
			return;
		} 
		Node<T> *y = last(); 
		Node<T> *x = new Node<T>{val}; 
		y->next = x; 
	}
	void deleteNode(T val) {
		Node<T>* node = search(val);
		if (node == nullptr) { 
			return;
		} 
		Node<T>* prev = start; 
		if (prev == node) { 
			start = node->next;
			delete prev;
			return;
		}
		while (prev != nullptr && prev->next != node) { 
			prev = prev->next;
		}
		if (prev == nullptr) {
			return; 
		}
		prev->next = node->next;
		delete node;
	}
	void print() { 
		Node<T> *x = start; 
		while (x != nullptr) { 
			cout << x->val << " ";
			x = x->next;
		}
	}
};
#endif