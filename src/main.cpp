#include<iostream>
#include "linkedBST.h"
#include "arrayBST.h"


int main()
{
// LinkedBST implementation

 linkedBST * BST = new linkedBST();
      
std::cout<<BST->isEmpty()<<std::endl;
    BST->add(BST->root, 5);
    std::cout<<BST->isEmpty()<<std::endl;
    BST->removeBST(BST->root, 1);
    BST->removeBST(BST->root, 5);
    BST->inorderTraversal(BST->root);
    BST->add(BST->root, 1);
    BST->add(BST->root, 8);
    BST->add(BST->root, 7);
    BST->add(BST->root, 5);
    BST->add(BST->root, 4);
    BST->searchBST(BST->root, 1);
    BST->searchBST(BST->root, 10);
    BST->inorderTraversal(BST->root);

// Array BST implementation

    array_BST a;
     a.removeBST(1);
    std::cout<<a.isempty()<<std::endl;
    a.add(5); 
    std::cout<<a.isempty()<<std::endl;   
    std::cout<<a<<std::endl;
    a.add(20);
    std::cout<<a<<std::endl;
    a.add(2);
    std::cout<<a<<std::endl;
    a.removeBST(10);
    a.removeBST(2);
    std::cout<<a<<std::endl;
    a.add(3);
    a.add(4);
    a.add(2);
    a.add(6);
    a.add(9);
    std::cout<<a<<std::endl;
    a.exists(1);
    a.exists(5);
    
    a.min();
    a.max();
    std::cout<<a<<std::endl;
    a.min();
    a.add(100);
    a.removeBST(6);
   
    std::cout<<a<<std::endl;
    a.max();


}