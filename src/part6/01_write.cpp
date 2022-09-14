// A simple program that continuously overwrites a file
// By Nick from CoffeeBeforeArch

#include <iostream>
#include <fstream>

int main() {
  // Run for 2^14 iterations
  int iters = 1 << 14;
  
  // For 2^14 iterations
  for (int i = 0; i < iters; i++){
    // Open the file
    std::ofstream outfile("data.txt");
    
    // Write the output
    outfile << i;

    // Close the file
    outfile.close();
  };

  
  return 0;
}
