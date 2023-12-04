#ifndef Node_Ahmed
#define Node_Ahmed

#define Ahmed_Node
#define Ahmed_Node
#include <cstdlib>
#include <iostream>
using namespace std;
template <typename Ahmeddata>
  
  
	class Node

	{
		public:
	
		Node (const Ahmeddata *data, Node *Next, Node *Prev);
		~Node();
		void setNext(const Node* n);
		void setPrev(const Node* p);
		void setCurrent(const Node* c);
		void setData (const Ahmeddata& d);
		Node* getNext();
		Node* getPrev();
		Node* getCurrent();
		Ahmeddata getdata();

		//syntax for operators overloading functions which have been declared as friend functions
		// friend ostream& operator<<(ostream& os, const Node& nodeToOutput);
		// friend istream& operator>>(istream& os, const Node& dataToInput);

		private:
		Ahmeddata data;
		Node* next;
		Node* prev;
		Node* current;			
		
	
	};
	
	//syntax for plus operator [not friend function]
	// Node operator + (Node const &arg1, Node const &arg2);
#endif

	