#include "list.h"
using namespace std;
int main() {
	LinkedList<int> list(100);
	list.insert(101);
	list.insert(100); 
	list.print();
	list.deleteNode(100);
	cout << endl; 
	list.print();
}