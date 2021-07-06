class AbstractBST

{
    virtual bool isempty()=0;
    virtual void add(int key, int value)=0;
    virtual void max (int &output)=0;
    virtual void min (int &output)=0;
    virtual void exists (int &output)=0;

};