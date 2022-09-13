// A simple program that accumulates into an integer
// By Nick from CoffeeBeforeArch

#include <iostream>
#include <fstream>

int main() {
  // Run for 2^30 iterations
  int num_values = 1 << 26;
  
  // Our output file name
  std::ofstream outfile("data.txt");

  // Add 1 from 2^30 times
  for (int i = 0; i < num_values; i++){
    outfile << i;
  };

  // Close the file
  outfile.close();
  
  return 0;
}
