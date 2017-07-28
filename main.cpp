/*
Kenny Schader 
Final Project
Data Structures
*/

#include <iostream>
#include <stdlib.h>
#include "graph.h"
using namespace std;
void buildGraph();
void buildSingleList(LinkedList* l);
void buildList();
void printMenu();
Graph* graph = new Graph();

int main(){
	printMenu();
	int userInput;
	bool quitOption;
	buildGraph(); //build the graph
	LinkedList* A = new LinkedList("A"); //build all of the linked lists
	LinkedList* B = new LinkedList("B");
	LinkedList* C = new LinkedList("C");
	LinkedList* D = new LinkedList("D");
	LinkedList* E = new LinkedList("E");
	LinkedList* F = new LinkedList("F");

	while(cin >> userInput){
		cin.clear();
		cin.ignore();
		switch(userInput){
			case 1:{ //display graph
				graph->displayGraph();
				break;
			}
			case 2:{ //breadth first 
				cout << "Please enter the vertex you want to start at: ";
				string startingCity;
				getline(cin, startingCity);
				graph->BFTraversal(startingCity);
				break;
			}
			case 3:{ //print a linked list
				cout << "Please enter the vertex that the linked list you want to view is connected to.\n";
				string whichVertex;
				getline(cin, whichVertex);
				if(whichVertex == "A"){
					cout << "Vertex A's Linked List: ";
					A->printList(A->head);
				}
				else if(whichVertex == "B"){
					cout << "Vertex B's Linked List: ";
					B->printList(B->head);
				}
				else if(whichVertex == "C"){
					cout << "Vertex C's Linked List: ";
					C->printList(C->head);
				}
				else if(whichVertex == "D"){
					cout << "Vertex D's Linked List: ";
					D->printList(D->head);
				}
				else if(whichVertex == "E"){
					cout << "Vertex E's Linked List: ";
					E->printList(E->head);
				}
				else if(whichVertex == "F"){
					cout << "Vertex F's Linked List: ";
					F->printList(F->head);
				}
				else{
					cout << "That vertex does not exist." << endl;
				}
				break;
			}
			case 4:{ //add node to a linked list
				cout << "Which vertex's linked list would you like to add a node to: ";
				string whichVertex;
				getline(cin, whichVertex);
				if(whichVertex == "A"){
					cout << "Vertex A's Linked List: ";
					A->printList(A->head);
				}
				if(whichVertex == "B"){
					cout << "Vertex B's Linked List: ";
					B->printList(B->head);
				}
				if(whichVertex == "C"){
					cout << "Vertex C's Linked List: ";
					C->printList(C->head);
				}
				if(whichVertex == "D"){
					cout << "Vertex D's Linked List: ";
					D->printList(D->head);
				}
				if(whichVertex == "E"){
					cout << "Vertex E's Linked List: ";
					E->printList(E->head);
				}
				if(whichVertex == "F"){
					cout << "Vertex F's Linked List: ";
					F->printList(F->head);
				}
				cout << "Please enter the key of the node you wish to insert after: ";
				string leftKey;
				getline(cin, leftKey);
				int lk = stoi(leftKey);
				cout << "Please enter the key of the new node you wish to insert: ";
				string newKey;
				getline(cin, newKey);
				int nk = stoi(newKey);
				if(whichVertex == "A"){
					A->addNode(lk, nk);
				}
				if(whichVertex == "B"){
					B->addNode(lk, nk);
				}
				if(whichVertex == "C"){
					C->addNode(lk, nk);
				}
				if(whichVertex == "D"){
					D->addNode(lk, nk);
				}
				if(whichVertex == "E"){
					E->addNode(lk, nk);	
				}
				if(whichVertex == "F"){
					F->addNode(lk, nk);
				}
				break;
			}
			case 5:{ //delete from linked list
				cout << "Which vertex's linked list would you like to delete from: ";
				string whichVertex;
				getline(cin, whichVertex);
				if(whichVertex == "A"){
					cout << "Vertex A's Linked List: ";
					A->printList(A->head);
				}
				else if(whichVertex == "B"){
					cout << "Vertex B's Linked List: ";
					B->printList(B->head);
				}
				else if(whichVertex == "C"){
					cout << "Vertex C's Linked List: ";
					C->printList(C->head);
				}
				else if(whichVertex == "D"){
					cout << "Vertex D's Linked List: ";
					D->printList(D->head);
				}
				else if(whichVertex == "E"){
					cout << "Vertex E's Linked List: ";
					E->printList(E->head);
				}
				else if(whichVertex == "F"){
					cout << "Vertex F's Linked List: ";
					F->printList(F->head);
				}
				else{
					cout << "That vertex does not exist." << endl;
					break;
				}
				cout << "Please enter the key of the node you would like to delete: ";
				string keyDel;
				getline(cin, keyDel);
				int kd = stoi(keyDel);
				if(whichVertex == "A"){
					A->delNode(kd);
				}
				if(whichVertex == "B"){
					B->delNode(kd);
				}
				if(whichVertex == "C"){
					C->delNode(kd);
				}
				if(whichVertex == "D"){
					D->delNode(kd);
				}
				if(whichVertex == "E"){
					E->delNode(kd);	
				}
				if(whichVertex == "F"){
					F->delNode(kd);
				}
				break;
			}
			case 6:{ //quit
				quitOption = true;
				cout << "Goodbye!\n";
				break;
			}
		}
		if(quitOption){
			break;
		}
		printMenu();
	}
}

void printMenu(){ //function to print menu
	cout << endl;
	cout << "======Main Menu======\n"
			"1. Print Graph\n"
			"2. Breadth First Traversal\n"
			"3. Print Linked List\n"
			"4. Add Node to Linked List\n"
			"5. Delete Node From Linked List\n"
			"6. Quit\n";
}
void buildGraph(){ //function to build the graph
	graph->addVertex("A"); 
	graph->addVertex("B");
	graph->addVertex("C");
	graph->addVertex("D");
	graph->addVertex("E");
	graph->addVertex("F");
	graph->addEdge("A", "B"); graph->addEdge("A", "D");
	graph->addEdge("B", "D"); graph->addEdge("B", "E");
	graph->addEdge("C", "F");
	graph->addEdge("E", "F");
}















