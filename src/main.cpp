#include <iostream>
#include "arrayBST.h"


int main()
{

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