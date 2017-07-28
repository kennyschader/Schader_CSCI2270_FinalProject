# Schader_CSCI2270_FinalProject
Final project for Data Structures

Project Summary

My project will have two data structures implemented; a graph and linked lists.
The graph will have vertexes, each with a linked list attached.
The menu will have options for printing the graph, doing a breadth first traversal, printing a linked list connected to a vertex of the graph, adding a node to a linked list, and deleting a node from a linked list. 
			
			"1. Print Graph\n"
			"2. Breadth First Traversal\n"
			"3. Print Linked List\n"
			"4. Add Node to Linked List\n"
			"5. Delete Node From Linked List\n"
			"6. Quit\n";

How to Run

When the application is ran, it automatically builds a graph with an adjaceny matrix that looks like:
	
	  A B C D E F
	A 0 1 0 1 0 0 
	B 1 0 0 1 1 0
	C 0 0 0 0 0 1
	D 1 1 0 0 0 0
	E 0 1 0 0 0 1
	F 0 0 1 0 1 0

It also creates a double linked list for each of the vertices (A-F) that looks like:

	nullptr <- 1 <-> 2 <-> 3 -> nullptr

1. Print Graph
	When the user selects this option, it prints out the vertices of the graph along with each of the vertices' adjacent vertices.
2. Breadth First Traversal
	When the user selects this option, they are asked for which vertex they would like to apply a breadth first traversal on.
3. Print Linked List
	When the user selects this option, they are asked to select a vertex of which linked list they would like to print.
4. Add Node to Linked List
	When the user selects this option, they are asked to first select which vertex's linked list they would like to add to, then which node they would like to insert after, then the key of the node they are inserting.
5. Delete Node From Linked List
	When the user selects this option, they are asked to first select which vertex's linked list they would like to delete from, then they are asked for the key value to be deleted from the list.
6. When the user selects this option, the program stops running.

Dependencies

There are no dependencies for this program.

System Requirements

I built this program through Mac OS, but it should run on any operating system.

