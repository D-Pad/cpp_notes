#include "LinkedList.h"
#include <iostream>

/*
10.5 A first linked list

A common use of pointers is to create a list of items such that an item can 
be efficiently inserted somewhere in the middle of the list, without the 
shifting of later items as required for a vector. The following program 
illustrates how such a list can be created. A class is defined to represent 
each list item, known as a list node. A node is comprised of the data to be 
stored in each list item, in this case just one int, and a pointer to the 
next node in the list. A special node named head is created to represent the 
front of the list, after which regular items can be inserted.
*/

// Linked list constructor
IntNode::IntNode(int dataInit, IntNode* nextLoc) {
    this->dataVal = dataInit;
    this->nextNodePtr = nextLoc;
}

void IntNode::InsertAfter(IntNode* nodeLoc) {
    IntNode* tmpNext = nullptr;
    tmpNext = this->nextNodePtr;    
    this->nextNodePtr = nodeLoc;    
    nodeLoc->nextNodePtr = tmpNext; 
}

void IntNode::PrintNodeData() {
    std::cout << this->dataVal << std::endl;
}

IntNode* IntNode::GetNext() {
    return this->nextNodePtr;
}

void linkedListExample() {

    IntNode* headObj  = nullptr;
    IntNode* nodeObj1 = nullptr;
    IntNode* nodeObj2 = nullptr;
    IntNode* nodeObj3 = nullptr;
    IntNode* nodeObj4 = nullptr;
    IntNode* currObj  = nullptr;
    
    // Front of nodes list
    headObj = new IntNode(-1);
    
    // Insert nodes
    nodeObj1 = new IntNode(555);
    headObj->InsertAfter(nodeObj1);
    
    nodeObj2 = new IntNode(999);
    nodeObj1->InsertAfter(nodeObj2);
    
    nodeObj3 = new IntNode(777);
    nodeObj2->InsertAfter(nodeObj3);

    std::cout << "List before middle insert" << std::endl;
    // Print linked list
    currObj = headObj;
    while (currObj != nullptr) {
       currObj->PrintNodeData();
       currObj = currObj->GetNext();
    } 

    std::cout << std::endl << "List after middle insert" << std::endl;
    nodeObj4 = new IntNode(29);
    nodeObj1->InsertAfter(nodeObj4);
    
    // Print linked list
    currObj = headObj;
    while (currObj != nullptr) {
       currObj->PrintNodeData();
       currObj = currObj->GetNext();
    } 


}


/*
A linked list is built in this lab. Make sure to keep track of the head node.

(1) Define the class ContactNode per the following specifications:

Private data members
string contactName
string contactPhoneNumber
ContactNode* nextNodePtr
Constructor with parameters for name followed by phone number (1 pt)
Public member functions
GetName() - Accessor (1 pt)
GetPhoneNumber() - Accessor (1 pt)
InsertAfter() (2 pts)
GetNext() - Accessor (1 pt)
PrintContactNode()
Ex: If the name is Roxanne Hughes and the phone number is 443-555-2864, 
PrintContactNode() outputs:

Name: Roxanne Hughes
Phone number: 443-555-2864
(2) Define main() to read the name and phone number for three contacts and 
output each contact. Create three ContactNodes and use the nodes to build a 
linked list. (2 pts)

Ex: If the input is:

Roxanne Hughes
443-555-2864
Juan Alberto Jr.
410-555-9385
Rachel Phillips
310-555-6610
the output is:
*/

