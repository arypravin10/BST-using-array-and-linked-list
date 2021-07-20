#include<iostream>
#include "linkedBST.h"


int main()
{
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


}