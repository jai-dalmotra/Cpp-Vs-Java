//1. Thread Support (Built-in)
//Java: Java has built-in support for multithreading using the Thread class and the Runnable interface. The Java Virtual Machine (JVM) manages threads efficiently.

class MyThread extends Thread {
    public void run() {
        System.out.println("Thread is running");
    }
}

public class Main {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();
    }
}
