#include <iostream>
using namespace std;

template<typename T>
struct NodeSimple
{
  T value;
  NodeSimple *left;
  int index;

  NodeSimple(T v):value(v),left(NULL){}
  ~NodeSimple(){}
};

template <typename U>
struct NodeDouble
{
  U value;
  NodeDouble *right;
  NodeDouble *left;
  int size;

  NodeDouble(U v):left(NULL),right(NULL),size(0),value(v){}
  ~NodeDouble(){}
};

template <typename T>
class ListLink
{
  NodeSimple<T> *tail;
  int size;

  void iniciar(T);
public:
  ListLink():head(NULL),tail(NULL),size(0){}
  ~ListLink(){}
  NodeSimple<T> *head;
  NodeSimple<T> ** recorrido(int ,NodeSimple<T> **);
  void aumentar(){size++;}
  void push_back(T );
  void push_front(T);
  T pop_back();
  T pop_front();
  bool add(int,T );
  T& find(T);

  void print();
};
template <typename T>
class ListLinkDouble
{
  NodeDouble<T> *head;
  NodeDouble<T> *tail;
  int size;
public:
  ListLinkDouble():head(NULL),tail(NULL),size(0){}
  ~ListLinkDouble(){}
  void push_back(T);
  void push_front(T);
  void pop_back();
  void pop_front();
  bool add(int,T);
  T& find(T);

  void print();
};
