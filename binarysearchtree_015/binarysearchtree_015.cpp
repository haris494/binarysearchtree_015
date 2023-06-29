#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL; // initializing ROOT to null
	}

	void insert(string element) //insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL); //Allcote memory for the new mode
		newNode->info = element; // Assign value to the data field of the new mode
		newNode->rightchild = NULL; // make the left child of the new node point to NULL
		newNode->rightchild = NULL; // make the right child of the new point to NULL

		Node* parent = NULL;
		Node* currentNode = NULL;
		(element, parent, currentNode); // locate the node which will be the parent of the node to be inserted

		if (parent == NULL)// if the parent is null (tree is empty)
		{
			ROOT = newNode; // Mark the new node as ROOT
			return;// Exit
		}

		if (element, parent, currentNode); // Locate the node which will be the parent of the node to be inserted
		{
			parent->leftchild = newNode; // make the left child of the parent point to the new node
		}
		if (element > parent->info) // if the value in the data field of the new node is greater than of the parent
		{
			parent->rightchild = newNode;// make the right child of the parent point to the new mode
		}
	}


	void search(string element, Node*& Parent, Node*& currentNode)
	{
		// this function searches the currentNode of the specified node as well as the current Node of its parent 

		
		
	
	