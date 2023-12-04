//Program includes BEGIN 
//	standard library includes BEGIN
#include <iostream>				//
#include <cstdlib>				// NULL, 
//	standard library includes END
//	user includes BEGIN 
#include "Node.h"
//	user includes END
//Program includes END
//program namespace directives BEGIN
using namespace std;
//program namespace directives END


	template <typename Ahmeddata>
	Node<Ahmeddata>::Node (const Ahmeddata * data, Node *Next, Node * Prev)
	{
		(*this).data = (*data);
		(*this).next = next;
		(*this).prev = prev;	
    }
	
	
	template <typename Ahmeddata>
	Node<Ahmeddata>::~Node()
    {
		next = NULL;
		prev = NULL;
	}
	
	
	template <typename Ahmeddata>
	void Node<Ahmeddata>::setNext(const Node* nextNode)
    {
		next = (Node*) nextNode;
	}
	
	
	template <typename Ahmeddata>
	void Node<Ahmeddata>::setPrev(const Node* prevNode)
    {
		prev = (Node*) prevNode;
	}
	
	
	template <typename Ahmeddata>
	void Node<Ahmeddata>::setCurrent(const Node* carruntNode)
    {
		current = (Node*)  carruntNode;
	}
	
	
	template <typename Ahmeddata>
	void Node<Ahmeddata>:: setData (const Ahmeddata& d)
    {
		data = d;
	}
	
	
	template <typename Ahmeddata>
	Ahmeddata Node<Ahmeddata>::getdata()
    {
		return data;
	}
	
	
	template <typename Ahmeddata>
	Node<Ahmeddata>* Node<Ahmeddata>::getNext()
    {
		return next;
	}
	
	
	template <typename Ahmeddata>
	Node<Ahmeddata>* Node<Ahmeddata>::getPrev()
    {
		return prev;
	}
	
	
	template <typename Ahmeddata>
	Node<Ahmeddata>* Node<Ahmeddata>::getCurrent()
    {
		return current;
	}
	

