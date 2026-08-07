#include <iostream>
#include <thread>
#include <mutex>
#include <functional>
#include <condition_variable>
using namespace std;
class Foo
{
    mutex mtx;
    condition_variable cv;
    int step;

public:
    Foo() : step(0) {}

    void first(function<void()> printFirst)
    {
        std::unique_lock<mutex> lock(mtx);
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        step = 1;
        cv.notify_all(); // signal that first() is done
    }

    void second(function<void()> printSecond)
    {
        std::unique_lock<mutex> lock(mtx);
        cv.wait(lock, [this]
                { return step >= 1; }); // wait until first() finishes
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        step = 2;
        cv.notify_all();
    }

    void third(function<void()> printThird)
    {
    std:
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [this]
                { return step >= 2; });
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};
int main()
{
    Foo foo;

    // Define the print functions
    auto printFirst = []()
    { std::cout << "first"; };
    auto printSecond = []()
    { std::cout << "second"; };
    auto printThird = []()
    { std::cout << "third"; };

    // Create threads that call Foo methods
    std::thread t1(&Foo::first, &foo, printFirst);
    std::thread t2(&Foo::second, &foo, printSecond);
    std::thread t3(&Foo::third, &foo, printThird);

    // Join threads to wait for completion
    t1.join();
    t2.join();
    t3.join();

    std::cout << std::endl;
    return 0;
}