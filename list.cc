#include <iostream>
#include <stdio.h>
using namespace std;

struct node {
	int data;
	node* next;
};

int main() {
	
	// Put three elements in the list.
	node n1;
	n1.data = 1;
	
	node n2;
	n2.data = 2;
	
	n1.next = &n2;
		
	node n3;
	n3.data = 3;
	
	n2.next = &n3;
	
	// pointer
	node n = n1;	
	// data
	int data = n.data;
	
	// Print out all the items.
	while (n.next != NULL) {
		cout << data << "\n";
		n = *n.next;
		data = n.data;
	}
	cout << data << "\n";
	return 0;
}

