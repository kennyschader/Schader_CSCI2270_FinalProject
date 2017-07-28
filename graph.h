#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <string>

struct adjVertex;
struct vertex;
struct Node;
class Graph{
    public:
        Graph();
        void addVertex(std::string n);
        void addEdge(std::string v1, std::string v2);
        void displayGraph();
        void BFTraversal(std::string startingCity);
        std::vector<vertex> vertices;
        virtual ~Graph();
    protected:
    private:
};
class LinkedList{
private:
public:
	Node* head;	
	std::string name;
	int nodeCount;
	LinkedList(std::string name);
	void printList(Node* head);
	Node* search(int key);
	void addNode(int leftValue, int key);
	void delNode(int key);
	virtual ~LinkedList();

};
struct vertex{
    std::string name;
    std::vector<adjVertex> adj;
};

struct adjVertex{
    vertex *v;
};
struct Node{
	int key;
	Node* next;
	Node* prev;
	Node(int k, Node* n, Node* p){
		key = k;
		next = n;
		prev = p;
	}
};

#endif // GRAPH_H
