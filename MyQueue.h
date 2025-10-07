#pragma once

#include "ListaEnlazada.h"


class MyQueue{
    private: 
        MyLinkedlist Lista; 
    public:
        MyQueue(); 
        ~MyQueue(); 
        void Enqueue(int valor);
        void Dequeue();
        int  Peek();  
        bool isEmpty(); 
        int length(); 
        void Flush(); 
};