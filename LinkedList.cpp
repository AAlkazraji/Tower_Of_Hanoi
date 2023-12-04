#include <cstdlib>
#include "LinkedList.h"
#include "Node.h"
#include "LStack.h"
using namespace std;

    template <typename Ahmeddata>
	LinkedList<Ahmeddata>::LinkedList()    
    {
        head = NULL;           
        tail = NULL;    
        current = NULL; 
        length = 0;
    }
    
	template <typename Ahmeddata>
    LinkedList<Ahmeddata>::LinkedList(Ahmeddata& data)
    {
        head = new Node<Ahmeddata>(data);  
        tail = head;         
        current = tail;         
        length = 1;             
        return;
    }
    
	template <typename Ahmeddata>
    LinkedList<Ahmeddata>::~LinkedList()
	{
        while(head != NULL)   
        {
			Node<Ahmeddata>* temp;	             
            temp = head;			
            head = head->getNext();				
            if (head != NULL)
			{
			head->setPrev(NULL);
			}	
            else
			{
			tail = NULL;
			} 							
            delete temp; 					
            current = head; 								
        }
		length = 0;												
    }
    
	template <typename Ahmeddata>
    void LinkedList<Ahmeddata>::addTail(const Ahmeddata& data)
    {
        if (length == 0)
        {
            tail = new Node<Ahmeddata>(data); 		
            head = tail;           
            current = head;        
            length = 1;            					
        }
        else
        {
            Node<Ahmeddata>* newTail = new Node<Ahmeddata>(data);
            tail->setNext(newTail);         	 
            newTail->setPrev (tail);   			
            tail = newTail;                   						   
            length++;                         	 
            newTail = NULL;                   		
        }
  
    }
	
	template <typename Ahmeddata>
	void removeTail(Node<Ahmeddata> *head, Node<Ahmeddata> *tail)
	{
		if (head = !NULL && head == tail)
		{
			head == NULL;
			tail == NULL;
		}
	}
	
	template <typename Ahmeddata>
	void removeTail(Node<Ahmeddata> *head, Node<Ahmeddata> *tail)
	{
		if (tail = !NULL && tail == head)
		{
			head == NULL;
			tail == NULL;
		}
	}
	
	template <typename Ahmeddata>
	void LinkedList<Ahmeddata>::addHead(const Ahmeddata& data)
	{
		if (length == 0)
        {
            tail = new Node<Ahmeddata>*(data); 									
            head = tail;           
            current = head;        
            length = 1;            									
        }
		else
		{
		    Node<Ahmeddata>* newHead = new Node<Ahmeddata>(data);   						
            head->setPrev(newHead);         						
            newHead->setNext (head);   						
            head = newHead;
            length++;                         						
            newHead = NULL;
		}
	}
   
    template <typename Ahmeddata>
    Node<Ahmeddata>* LinkedList<Ahmeddata>::getCurrent() const
        {
            return current;  
        }

    template <typename Ahmeddata>
    Node<Ahmeddata>* LinkedList<Ahmeddata>::getHead() const
        {
            return head;
        }
		
	template <typename Ahmeddata>
    Node<Ahmeddata>* LinkedList<Ahmeddata>::getTail() const
        {
            return tail;
        }
    template <typename Ahmeddata>
    void LinkedList<Ahmeddata>::setCurrent(Node<Ahmeddata>* NewCurrent)
        {
            current = NewCurrent;
        }
