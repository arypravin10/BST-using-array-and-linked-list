#include <iostream>
#include "linkedBST.h"

bool linkedBST:: isEmpty()
{
    if (!this->root)
    {
        // std::cout<<"The BST is empty "<<std::endl;
        return true;
    }
        // std::cout<<"The BST is not empty "<<std::endl;
    return false;
    
}

void linkedBST::add(Node*& r, int value)
{
    if(r==nullptr)
    {
        Node *newNode = new Node(value);
        r = newNode;
        std::cout<<value<<" added successfully!"<<std::endl;
         return;
    }

    if( value < r->data)
    {
        add(r->leftChild, value);
    }
    else
    {
         add(r->rightChild, value);
    }
}

bool linkedBST::searchBST(Node *r, int searchValue)
{
    if( r->data == searchValue)
    {
        std::cout<< searchValue<<" is found in the tree"<<std::endl;
        return true;
    }

     else if(searchValue< r->data )
    {
        if(r->leftChild = nullptr)
        {
           std::cout<< searchValue<<" is not found in the tree"<<std::endl;
            return false;
        }
       return searchBST(r->leftChild,searchValue);

    }
    else 
    {
        if(r->rightChild== nullptr)
        {
            std::cout<< searchValue<<" is not found in the tree"<<std::endl;
            return false;
        }
    
     return searchBST(r->rightChild, searchValue);
    
    }
}

 Node* linkedBST::max(Node *r)
{
    
    if(r->rightChild==nullptr)
    {
        return r;
    }
     return max(r->rightChild);   
}

Node* linkedBST::min(Node *r)
{
    
    if(r->leftChild==nullptr)
    {
        return r;
    }
    
     return min(r->leftChild);
    
}


bool linkedBST::removeBST(Node*& r, int dataToDelete)
{
    if(r->data == dataToDelete)
    {
        if(r->leftChild==nullptr && r->rightChild == nullptr)
        {
            if(r== this->root)
            {
                r= nullptr;
            }
            else{
                delete r;
            }
        }
        else if(r->leftChild != nullptr)
        {
            Node *temp = max(r->leftChild);
            r->data = temp ->data;
            delete temp;
        }
        else{
            Node *temp = min(r->rightChild);
            r->data = temp->data;
            delete temp;
        }
        std::cout<< dataToDelete <<" has been removed successfully"<<std::endl;
        return true;
    }
    else if (dataToDelete < r->data)
    {
        if(r->leftChild == nullptr)
        {
            std::cout<<"the data is not found in the tree"<<std::endl;
            return false;
        }
        return removeBST(r->leftChild, dataToDelete);
    }
    else
    {
        if(r->rightChild == nullptr)
        {
            std::cout<<"The data is not found in the tree"<<std::endl;
            return false;
        }
        return removeBST(r->rightChild, dataToDelete);
    }
    
}

void linkedBST::inorderTraversal(Node* r)
{
    if (isEmpty())
    {
        std::cout<<"The tree is empty"<<std::endl;
        return;
    }
    if(r)
    {
        inorderTraversal(r->leftChild);
        std::cout<<" "<< r->data << " ";
        inorderTraversal(r->rightChild);
    }
}
