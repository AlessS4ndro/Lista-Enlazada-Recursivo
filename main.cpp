#include<iostream>
#include"clases.h"
#include"listlink.h"

using namespace std;

int main()
{
ListLink<int> l;

for (int i=0;i<3;i++)
  l.push_back(i);
//l.print();


  return 0;
}
