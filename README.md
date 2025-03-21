# Java vs C++ Feature Differences

This repository provides a detailed comparison of functionalities supported in **Java** but not in **C++**, and vice versa. It includes examples and explanations of each feature.

## 📌 Features Covered

### ✅ Functionality in **Java** but Not in **C++**
1. Built-in Thread Support
2. Documentation Comments (`/** */`)
3. Unsigned Right Shift (`>>>`)

### ✅ Functionality in **C++** but Not in **Java**
1. `goto` Statement
2. Pointers
3. Call by Reference
4. Structures & Unions
5. Multiple Inheritance
6. Virtual Functions

## 📝 Code Examples

### Java: **Thread Example**
```java
class MyThread extends Thread {
    public void run() {
        System.out.println("Thread is running");
    }
}

public class ThreadExample {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();
    }
}
```
### C++: Pointers Example
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << "Value of a: " << *ptr << endl; // Dereferencing
    return 0;
}
```

