// A simple program that sleeps for 500ms
// By Nick from CoffeeBeforeArch

#include <chrono>
#include <thread>

int main() {
  // Sleep for 500ms
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
 
  return 0;
}
