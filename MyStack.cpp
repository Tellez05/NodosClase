#include "MyStack.h"

MyStack::MyStack(){}

MyStack::~MyStack(){
    Flush(); 
}


void MyStack::Push(int valor){
    Lista.insertFirst(valor);
}

void MyStack::Pop(){
    Lista.removeFirst(); 
}

int MyStack::Top(){
    try{
        return Lista.first(); 
    }catch(invalid_argument ex){
        throw invalid_argument("No hay un elementoss en el Stack");
    }
}

int MyStack::Length(){
    return Lista.length(); 
}

bool MyStack::isEmpty(){
    return Lista.isempty(); 
}

void MyStack::Flush(){
    Lista.Flush(); 
}

