#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0; // Shared variable
mutex mtx;
void task1(){
    for (int i = 0; i < 5; i++) {
        cout << "Task 1 running\n";
    }
}

void task2() {
    for (int i = 0; i < 5; i++) {
        cout << "Task 2 running\n";
    }
}

void task3(){
    for (int i = 0; i < 1000; i++) {
        std::lock_guard<mutex> lock(mtx);//lock before updating prevent race condition
        counter++; // Not safe!
    }
}

//Fix race condition with mutex


int main () {
    thread t1(task1);
    thread t2(task2);

    t1.join(); // Wait for t1 to finish
    t2.join(); // Wait for t2 to finish


    /**
     * You might expect 2000, but often you’ll get a smaller number
     *  because both threads try to update counter at the same time. This is a race condition.
     * but to prevent this we used mutex lock_guard, so we lock resource before updating it
    */
    thread t3(task3);
    thread t4(task3);

    t3.join();
    t4.join();
    std::cout << "Final counter: " << counter << "\n";
    return 0;
}