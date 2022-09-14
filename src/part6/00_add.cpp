// A simple program that continuously adds 1 to a result
// By Nick from CoffeeBeforeArch

int main() {
  // Run for 2^30 iterations
  int num_values = 1 << 30;

  // Create a volatile int to keep it from being optimized away
  volatile int result = 0;

  // Add 1 from 2^30 times
  for (int i = 0; i < num_values; i++) result += 1;
  
  return result;
}
