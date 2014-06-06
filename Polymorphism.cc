//No virtual function!
//be careful of tricks
#include<cstdio>

class A
{
  public:
    int x;
    void print()
    {
      printf("In parent, x= %d\n", x);
    }
    A(): x(0){}
};

class B: public A
{
  public:
    int x;
    void print()
    {
      printf("In child, x= %d\n", x);
    }
    B():x(1){}
};

int main()
{
  A* p = new B;
  p->print();
  delete p;
  return 0;
}
