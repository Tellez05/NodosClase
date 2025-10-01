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
        if(size == 0){
            throw "Invalido, la lista no tiene elementos"; 
    }
    return this->Head ->Data;
}

int MyLinkedlist::last(){
    if(size == 0){
        throw "Invalido, la lista no tiene elementos"; 
    }
    return this->tail->Data;
}

int MyLinkedlist::getAt(int pos){
    if(pos > size){
        throw "Invalido, la lista no tiene esa posicion"; 
    }
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
    size++; 
}   


void MyLinkedlist::insertAt(int pos, int data){
    if(pos<0 || pos > size){
        throw "Error, no se puede insertar en esa posicion"; 
    }
    ListaEnlazada* Nuevo = new ListaEnlazada(data);
    ListaEnlazada* current {this->Head}; 
    int i {0};
    while(i < pos-1){
        current = current->Next; 
        i++;
    }
    Nuevo->Next = current->Next;
    current->Next = Nuevo;  
    size++; 
}

void MyLinkedlist::removeFirst(){
    if(this->Head == nullptr){
        throw "No hay un primer elemento";
    }

    ListaEnlazada* Eliminar  {this->Head}; 
    this->Head = this->Head->Next; 
    delete Eliminar; 
    size--; 
}

void MyLinkedlist::removeLast(){
    if(size == 0){
        throw "Error, no hay un elemento final"; 
    }
    ListaEnlazada* Eliminar {this->tail};
    if(Head == tail){
        delete Eliminar; 
        Head = tail = nullptr;
        size--; 
        return; 
    } 
    
    ListaEnlazada* current = this->Head; 
    while(current->Next != Eliminar){
        current = current->Next; 
    }
    this->tail = current; 
    current->Next = nullptr; 
    delete Eliminar; 
    size--; 
}

void MyLinkedlist::removeAt(int pos){

}