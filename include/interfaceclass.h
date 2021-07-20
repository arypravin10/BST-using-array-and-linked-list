#pragma once

class AbstractBST

{
    public:
    virtual bool isempty()=0;
    virtual void add(int key)=0;
    virtual void max ()=0;
    virtual void min ()=0;
    virtual void exists (int key)=0;

};