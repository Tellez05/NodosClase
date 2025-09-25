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
        ~MyLinkedlist();
        int length();  
        bool isempty();
        int first(); 
        int last();
        
        int Getat(int a);
        void insertFirst(int data);
        void insertLast(int data);
        void insertat(int pos, int data);
    };  

#endif