#include "MyQueue.h"

MyQueue::MyQueue(){}

MyQueue::~MyQueue(){
    Lista.Flush();
}

void MyQueue::Enqueue(int valor){
    Lista.insertLast(valor);
}

void MyQueue::Dequeue(){
    try{
        Lista.removeFirst(); 
    }catch(invalid_argument ex){
        throw invalid_argument("No se puede hacer deque");
    }
}

int MyQueue::Peek(){
    try{
        return Lista.first();  
    }catch(invalid_argument ex){
        throw invalid_argument("No se puede hacer peek en una lista vacia"); 
    }
}

bool MyQueue::isEmpty(){
    return Lista.isempty();
}

int MyQueue::length(){
    return Lista.length();
}

void MyQueue::Flush(){
    Lista.Flush(); 
}
