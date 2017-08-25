template<typename T>
void ListLink<T>::print()
{
  for(int i=0;i<size;i++)
    cout<<recorrido(i,head)->value<<" / ";
  cout<<endl;
}

template<typename T>
void ListLink<T>::iniciar(T val)
{
  head=tail=new NodeSimple<T>(val);
  size++;
}

template<typename T>
NodeSimple<T> * ListLink<T>::recorrido(int indice,NodeSimple<T> *walking)     ///////     la lista enlazada la veremos
{                                                                 ///////     como un arreglo con primer
  if(indice==0)                                                   ////      indice = cero;
    return walking;                                               ///     esta funcion recibe como argumento
  return recorrido(indice--,walking->left);                       ///   un indice el cual indica
}                                                                 ///   que nodo de la lista desea capturar

template<typename T>
void ListLink<T>::push_back(T val)
{
  if(head){
    cout<<"llego....";
    NodeSimple<T> *n=recorrido(size-1,head);
    n->left=new NodeSimple<T>(val);
    tail=n->left;
    size++;

  }
  else
    iniciar(val);

}
