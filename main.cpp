#include<iostream>
#include"clases.h"
#include"listlink.h"

using namespace std;

int main()
{
  cout<<"inicio";
  ListLink<int> l;

  l.head=new NodeSimple<int>(5);l.aumentar();
  l.head->left=new NodeSimple<int>(9);l.aumentar();
  l.head->left->left=new NodeSimple<int>(11);l.aumentar();
  l.head->left->left->left=new NodeSimple<int>(14);l.aumentar();
  l.head->left->left->left->left=new NodeSimple<int>(19);l.aumentar();

  cout<<"llego";
  NodeSimple<int> *n=l.head;
  int i=0;
  while(i<3){
    NodeSimple<int> **p=&l.head;
    n=*(l.recorrido(i,p));
    cout<<n->value<<" / " ;
    i++;
  }
  /*
  while(n){
    cout<<n->value<<" // ";
    n=n->left;
  }
  */
  return 0;
}
