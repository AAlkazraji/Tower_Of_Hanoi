#ifndef Ahmed_LINKEDLIST
#define Ahmed_LINKEDLIST
#include <cstdlib>
#include <iostream>
using namespace std;
#include "Node.h"
template <typename Ahmeddata>

	class LinkedList
	{
		public:
			
			LinkedList();
			LinkedList(Ahmeddata& data); 
			~LinkedList();			
			void addTail(const Ahmeddata& data);				
			void addHead(const Ahmeddata& data);
			void removeHead(Node<Ahmeddata> *head, Node<Ahmeddata> *tail);
			void removeTail(Node<Ahmeddata> *head, Node<Ahmeddata> *tail);
			Node<Ahmeddata>* getHead() const;
			Node<Ahmeddata>* getTail() const;
            Node<Ahmeddata>* getCurrent() const;
			void setCurrent(Node<Ahmeddata>* newCurrent);

		private:
			Node<Ahmeddata>* head;     
			Node<Ahmeddata>* tail;     
			Node<Ahmeddata>* current;  
			int length;	
	};	

#endif