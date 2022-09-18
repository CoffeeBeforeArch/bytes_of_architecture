// A simple example of a multi-threaded application
// By Nick from CoffeeBeforeArch

#include <thread>

void infinite_loop() {
    // Run forever
    while (true) {
        // Just keep incrementing some value over and over
        int value = 0;
        for (int i = 0; i < 100000; i ++) value += 1;
    }
}

int main() {
    // Create some threads
    std::thread t1(infinite_loop);
    std::thread t2(infinite_loop);

    // Put a join here, but these loops should never end...
    t1.join();
    t2.join();

    return 0;
}
