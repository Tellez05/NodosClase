#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H


#include <iostream>
using namespace std; 

struct ListaEnlazada
{
    int Data; 
    ListaEnlazada *Next; 

    ListaEnlazada(int data, ListaEnlazada* next){
        this -> Next = next; 
        Data = data; 
    }
    ListaEnlazada(int data):ListaEnlazada(data, nullptr){}
};


class MyLinkedlist{
    private: 
        ListaEnlazada* Head; 
        ListaEnlazada* tail;
    public:
        int size; 
        MyLinkedlist();
        int length();  
        bool isempty();
        int first(); 
        int last();
        int getAt(int a);
        void insertFirst(int data);
        void insertLast(int data);
        void insertAt(int pos, int data);
        void removeFirst(); 
        void removeLast(); 
        void removeAt(int pos); //pos:[0, size-1] 
        friend ostream& operator <<(ostream& os, const MyLinkedlist& II);
    };  

#endif