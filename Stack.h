/*
 * Name: Gavin Austin
 * Course: SENG1120
 * Student number: c3279166
*/

#ifndef GA_STACK
#define GA_STACK

#include <cstdlib>

#include "Linkedlist.h"
using namespace std;

	template <class data_type>
	class Stack
	{
		public:
			// Constructors
			Stack(); // Constructor which accept 0 argument			
			
			
			// Descructors 
			~Stack();			
			
			/*
			 * Member function: Creates a new node with input data at the top of the linkedlist pointer
			 * Precondition:    A valid stack is initalised and a valid input was given
			 * Postcondition:   New node at the head of the internal Linkedlist 
			 */
			void push(const data_type& data);

			/*
			 * Member function: Removes the head node at the top of the internal linkedlist
			 * Precondition:    A valid stack is initalised
			 * Postcondition:   The head node is now removed and the 2nd top node is now the head
			 */
			void pop();

			/*
			 * Member function: Returns the size of the stack
			 * Precondition:    A valid stack is initalised
			 * Postcondition:   The size of the stack is retuned as an int
			 */
			const int size();

			/*
			 * Member function: Returns the data on top of the stack
			 * Precondition:    A valid stack is initalised
			 * Postcondition:   The data of the top node in the stack is returned
			 */
			const data_type top();
        
		private:
			LinkedList<data_type>* stackList;    // Pointer variable to indicate head pointer
			int StackLength;	// Variable to store the length of the linked list
	};

			/*
			 * Operator Overload: Prints the name and score from each node in the input linked list
			 * Precondition:    input list is a valid list
			 * Postcondition:   The name and score of the students in the list are printed in order
			 */
			template <class data_type>
			ostream& operator<< (ostream& stream, Stack<data_type>& list);
	
 #include "Stack.template"
#endif