#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
     int data;
     Node *next;
};

 void printlist(Node* n)
 {
    while(n!=NULL)
    {
        cout<<n->data<< " ";
        n=n->next;
    }
 }



int main()
{

Node* head =NULL;
Node* second= NULL;
Node* third= NULL;

head = new Node();
second = new Node();
third = new Node();
 
 head->data=1;
 head->next =second;

 head->data=2;
 head->next =third;

 head->data=3;
 head->next =NULL;
 printlist(head);

    return 0;
}