#ifndef Stack_Ahmed
#define Stack_Ahmed
#include <cstdlib>
#include "Linkedlist.h"
using namespace std;
template <class Ahmeddata>
	
	class LStack
	{
		public:
		
			LStack();
			~LStack();			
			void push(const Ahmeddata& data);
			void pop();
			const int size();
			const Ahmeddata top();
			bool isEmpty (Node<Ahmeddata> *head);
        
		private:
			LinkedList<Ahmeddata>* Slist;    
			int Slength;	
	};

#endif