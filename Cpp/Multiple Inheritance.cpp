//C++: Allows multiple inheritance (a class can inherit from multiple parent classes)
//Java: Does not support multiple inheritance to avoid diamond problem.

class A { public: void show() { cout << "A"; }};
class B { public: void display() { cout << "B"; }};
class C : public A, public B {};
