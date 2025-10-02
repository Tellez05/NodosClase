#include "ListaEnlazada.h"


int main(){
    MyLinkedlist lista1; 
    lista1.insertFirst(0);
    lista1.insertFirst(2);  
    lista1.removeFirst(); 

    cout<<lista1<<endl; 
    return 0; 
}