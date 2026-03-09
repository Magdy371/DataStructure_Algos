#include "Queues.cpp"
#include <iostream>
using namespace std;
int main(){
    Queues q = Queues(0);
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.display();
    cout<<endl;
    q.Dequeue();
    q.Dequeue();
    q.display();
}
