#pragma once

#include "ListaEnlazada.h"

class MyStack{
    private:
        MyLinkedlist Lista; 
    public:
        MyStack();
        ~MyStack(); 
        void Push(int valor); 
        void Pop(); 
        int Top();
        int Length(); 
        bool isEmpty(); 
        void Flush(); 

};