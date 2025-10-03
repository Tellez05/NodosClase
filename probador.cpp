#include "ListaEnlazada.h"


int main(){
    MyLinkedlist lista1; 
    lista1.insertFirst(0);
    lista1.insertFirst(2);  
    lista1.removeAt(1);
    try
    {
        lista1.setAt(10,100);
    }
    catch(const char* e)
    {
        cout << e<<endl;
    }
    



    cout<<lista1<<endl; 
    return 0; 
}