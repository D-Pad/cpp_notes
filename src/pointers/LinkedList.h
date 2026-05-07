#pragma once 


class IntNode {
public: 
    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);
    void InsertAfter(IntNode* nodeLoc);
    IntNode* GetNext();
    void PrintNodeData();
private:
    int dataVal;
    IntNode* nextNodePtr;
};

void linkedListExample();

