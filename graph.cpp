#include "graph.h"
#include <iostream>
#include <queue>
using namespace std;
LinkedList::LinkedList(string name){
    name = name;
    nodeCount = 3;
    head = new Node(1, nullptr, nullptr);
    Node* second = new Node(2, nullptr, head);
    Node* third = new Node(3, nullptr, second);
    head->next = second;
    second->next = third;
}
Graph::Graph(){
}
void Graph::addVertex(string n){
    bool found = false;
    for(int i = 0; i < vertices.size(); i++){
        if(vertices[i].name == n){
            found = true;
            cout << vertices[i].name << " found" << endl;
            break;
        }
    }
    if(found == false){
        vertex v;
        v.name = n;
        vertices.push_back(v);
    }
}
void Graph::addEdge(string v1, string v2){
    for(int i = 0; i < vertices.size(); i++){
        if(vertices[i].name == v1){
            for(int j = 0; j < vertices.size(); j++){
                if(vertices[j].name == v2 && i != j){
                    adjVertex av;
                    av.v = &vertices[j];
                    vertices[i].adj.push_back(av);
                }
            }
        }
    }
}
void Graph::displayGraph(){
    for(int i = 0; i < vertices.size(); i++){
        cout<<vertices[i].name<<" adjacent vertexes: ";
        for(int j = 0; j < vertices[i].adj.size(); j++){
            cout<< " " << vertices[i].adj[j].v->name;
        }
        cout<<endl;
    }
}
void Graph::BFTraversal(string startingCity)
{
    queue<vertex*> Q;
    vertex v;
    int i = 0;
    for(i = 0; i<vertices.size(); i++){
        if(startingCity==vertices[i].name){
            v=vertices[i];
            break;
        }
    }
    cout << "This is the Breadth First Traversal: ";
    cout << v.name << " ";
    Q.push(&vertices[i]);
    while(!Q.empty()){
        v= *Q.front();
        Q.pop();
        for(int i = 0; i<v.adj.size(); i++){
            Q.push(v.adj[i].v);
            cout<< v.adj[i].v->name << " ";
        }    
    }
    cout << endl;
}
void LinkedList::printList(Node* head){
    Node* temp = head;
    if(head == nullptr){ //empty list
        cout << "This list is empty." << endl;
    }
    else{
        cout << "nullptr <- ";
        while(temp->next != nullptr){
            cout << temp->key << " <-> ";
            temp = temp->next;
        }
        cout << temp->key << " -> nullptr" << endl;
        cout << "The number of nodes in this list is: " << nodeCount;
    }
    cout << endl;
    temp = head;
}
Node* LinkedList::search(int key){
    Node* temp = head;
    while(temp->key != key){
        temp = temp->next;
    }
    return temp;
}
void LinkedList::addNode(int leftValue, int key){
    Node* left = search(leftValue);
    Node* newNode = new Node(key, nullptr, left);
    if(left == nullptr){ //head node
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        nodeCount++;
    }
    else if(left->next == nullptr){ //tail node
        left->next = newNode;
        nodeCount++;
    }
    else{ //middle node
        left->next->prev = newNode;
        newNode->next = left->next;
        left->next = newNode;
        nodeCount++;
    }
}
void LinkedList::delNode(int key){
    Node* temp = head;
    bool found = false;
    while(temp != nullptr){ //find out if the key is in the list, if not return
        if(temp->key == key){
            found = true;
            break;
        }
        else{
            temp = temp->next;
        }
    }
    if(found == false){
        cout << "That key is not in this linked list." << endl;
        return;
    }
    Node* node = search(key);
    if(nodeCount == 1){ //only node in list
        cout << "Can not delete a node if it's the only one in the list." << endl;
        return;
    }
    if(node == head && nodeCount != 1){
        head = head->next;
        head->prev = nullptr;
        delete node;
        nodeCount--;
    }
    else{ //middle or tail
        if(node->next == nullptr){
            Node* temp = node->prev;
            temp->next = nullptr;
            delete node;
            nodeCount--;
        }
        else{
            node->prev->next = node-> next;
            node->next->prev = node->prev;
            delete node;
            nodeCount--;
        }
    }
}
Graph::~Graph(){ //deconstructor for graph
}
LinkedList::~LinkedList(){ //deconstructor for linkedlist
}






