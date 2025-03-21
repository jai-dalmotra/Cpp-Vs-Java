//C++: Supports runtime polymorphism using virtual functions.
//Java: Uses method overriding for runtime polymorphism but does not have explicit virtual keyword.

class Base {
public:
    virtual void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived"; }
};

int main() {
    Base* obj = new Derived();
    obj->show();  // Outputs: Derived (dynamic dispatch)
    return 0;
}
