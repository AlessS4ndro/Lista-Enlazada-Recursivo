template<typename T>
void ListLink<T>::print()
{
  NodeSimple<T> *n;
  for(int i=0;i<size;i++){
    cout<<"llego";
    NodeSimple<T> **p=&head;
    n=*(recorrido(i,p));
    cout<<n->value<<" / " ;
  }
  cout<<endl;
}

template<typename T>
void ListLink<T>::iniciar(T val)
{
  head=tail=new NodeSimple<T>(val);
  size++;
}

template<typename T>
NodeSimple<T> ** ListLink<T>::recorrido(int indice,NodeSimple<T> **walking)     ///////     la lista enlazada la veremos
{                                                                            ///////     como un arreglo con primer
  if(indice==0)                                                               ////      indice = cero;
    return walking;
  (*walking)=((*walking)->left);
  cout<<"recorrido..";
  return recorrido(--indice,walking);                                   ///   un indice el cual indica
}                                                                            ///   que nodo de la lista desea capturar

template<typename T>
void ListLink<T>::push_back(T val)
{
  if(head){
    NodeSimple<T> **p=&head;
    NodeSimple<T> **n=recorrido(size,p);
    *n=new NodeSimple<T>(val);;
    tail=(*n);
    size++;
    cout<<"pushback..";
  }
  else
    iniciar(val);
}
/*
template<typename T>
void ListLink<T>::push_front(T val)
{
  if(!head)
    iniciar(val);
  else{
    NodeSimple<T> *n=new NodeSimple<T>(val);
    n->left=head;
    head=n;
    size++;
  }
}

template<typename T>
T ListLink<T>::pop_back()
{

}
*/
