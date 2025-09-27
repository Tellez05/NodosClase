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

int MyLinkedlist::last(){
    return this->tail->Data;
}

int MyLinkedlist::Getat(int pos){
    int i {0};
    ListaEnlazada* current {this->Head}; 
    while(i < pos){
        current = current -> Next; 
    i++;    
    }
    return current->Data; 
    

}

void MyLinkedlist::insertFirst(int data){
    ListaEnlazada* Nuevo= new ListaEnlazada(data,this->Head);
    Head = Nuevo;
    size++; 
    if(size == 1){
        tail = Nuevo; 
    }
}

void MyLinkedlist::insertLast(int data){
    ListaEnlazada* Nuevo = new ListaEnlazada(data);
    if(this->tail != nullptr){
        this->tail->Next = Nuevo; 
    }else{
        this->Head = Nuevo;
    }
    this -> tail = Nuevo; 
}   