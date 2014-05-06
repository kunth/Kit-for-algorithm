//Merge two sorted list
//
#include<cstdio>

typedef struct listnode
{
  int val;
  struct listnode* next;
  listnode(int v):val(v){next=NULL;}
}ListNode;

ListNode* Merge(ListNode*h1, ListNode*h2)
{
  if(!h1)
    return h2;
  if(!h2)
    return h1;
  ListNode* head = NULL, *p = NULL;
  while(h1 && h2)
  {
    if(h1->val<=h2->val)
    {
      if(!head)
      {
        head = p = h1;
        h1 = h1->next;
      }
      else
      {
        p = p->next = h1;
        h1 = h1->next;
      }
    }
    else
    {
      if(!head)
      {
        head = p = h2;
        h2 = h2->next;
      }
      else
      {
        p = p->next = h2;
        h2 = h2->next;
      }
    }
  }//end of while
  if(h1)
    p->next = h1;
  else
    p->next = h2;
  return head;
}

int main()
{
  listnode* h1 = new listnode(1);
  listnode* h2 = new listnode(5);
  listnode* h3 = new listnode(8);
  listnode* h4 = new listnode(12);
  listnode* h5 = new listnode(15);
  listnode* h6 = new listnode(19);
  h1->next = h2;
  h2->next = h3;
  h3->next = h4;
  h4->next = h5;
  h5->next = h6;

  listnode* p1 = new listnode(5);
  listnode* p2 = new listnode(9);
  listnode* p3 = new listnode(11);
  listnode* p4 = new listnode(16);
  listnode* p5 = new listnode(16);
  p1->next = p2;
  p2->next = p3;
  p3->next = p4;
  p4->next = p5;
  listnode* head = Merge(h1, p1);
  while(head)
  {
    printf("%d ", head->val);
    head=head->next;
  }
  return 0;
}
