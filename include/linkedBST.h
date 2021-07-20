#ifndef LinkedBST_H
#define LinkedBST_H

class  Node
{
    public:
    int data;
    Node* leftChild;
    Node* rightChild;

    Node() : leftChild(nullptr), rightChild(nullptr) {}
    Node(int data) : data(data), leftChild(nullptr), rightChild(nullptr) {}
    Node(int data, Node *leftChild, Node *rightChild) : data(data), leftChild(leftChild), rightChild(rightChild) {}
};


class linkedBST
// : public AbstractBST
{
    public:
        Node *root;
        linkedBST(): root(nullptr){}
        linkedBST(Node * r): root(r){}

        virtual bool isEmpty();
        virtual void add( Node*& r ,int value);
        Node* max (Node *r);
        Node* min (Node *r);
        virtual bool removeBST(Node*& r, int dataToDelete);
        virtual bool searchBST(Node *r,int searchValue);
        void inorderTraversal(Node* r);
    
};
#endif
