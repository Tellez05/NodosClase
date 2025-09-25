#include "ListaEnlazada.h"

MyLinkedlist::MyLinkedlist(){
    this->Head = this->tail = nullptr;
    size = 0;
}

int MyLinkedlist::length(){
    return size; 
}

bool MyLinkedlist::isempty(){
    return size == 0; 
} 

int MyLinkedlist::first(){
    return this->Head ->Data;
}

