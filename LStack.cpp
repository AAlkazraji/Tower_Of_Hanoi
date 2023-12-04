#include <cstdlib>
#include "LinkedList.h"
#include "Node.h"
#include "LStack.h"
using namespace std;

    template <class Ahmeddata>
    LStack<Ahmeddata>::LStack()
    {
        Slist = new LinkedList<Ahmeddata>();
        Slength = 0;
    }
    
    template <class Ahmeddata>
    LStack<Ahmeddata>::~LStack()
	{
        delete Slist;
        Slength = 0;
    }
    
    template <class Ahmeddata>
    void LStack<Ahmeddata>::push(const Ahmeddata& data)
    {
        Slist->addHead(data);                              
        Slength++;                                          
    }
    
    template <class Ahmeddata>
    void LStack<Ahmeddata>::pop()
	{
        Slist->remove();                               
        Slength--;                                           
    }

    template <class Ahmeddata>
    const int LStack<Ahmeddata>::size()
	{
        return Slength;                                     
    }

    template <class Ahmeddata>
    const Ahmeddata LStack<Ahmeddata>::top()
	{
         int First = Slist->getHead();                  
         return First;
    }
	
    template <typename Ahmeddata>
	bool isEmpty (Node<Ahmeddata> *head)
	{
		if (head == NULL)
		{
			return (true);
		}
		else
		{
			return (false);
		}
	}