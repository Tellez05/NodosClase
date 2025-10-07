#include "ListaEnlazada.h"
#include "MyQueue.h"
#include "MyStack.h"


int main(){
    MyStack ms; 
    MyQueue mq; 

    for(int i {0}; i < 100; i++){
        ms.Push(i+1);
        mq.Enqueue(i+1);
    }

    while(!ms.isEmpty()){
        cout<<ms.Top()<<endl;
        ms.Pop();
    }

    while(!mq.isEmpty()){
        cout<<mq.Peek()<<endl; 
        mq.Dequeue(); 
    }
    return 0; 
}