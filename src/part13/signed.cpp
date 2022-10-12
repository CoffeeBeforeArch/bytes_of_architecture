// A simple example of signed numbers in C++
// By: Nick from CoffeeBeforeArch

#include <bitset>
#include <cstdint>
#include <iostream>

int main() {
  // Set our unsigned 32b integer value
  std::int32_t val = -1;
  std::bitset<32> bits(val);

  // Result we're going to calculate
  std::int32_t result = 0;

  // Go through all the bits
  for (int i = 0; i < 32; i++) {
    // If the bit is set, print the value
    if (bits[i]) {
      // Add the value to the result
      result += 1 << i;

      // Add negative signs if we are at the sign bit
      if (i == 31) {
        std::cout << "-2^" << i << " = " << (1 << i) << '\n';
      } else {
        std::cout << "2^" << i << " =  " << (1 << i) << '\n';
      }
    }
  }

  // Print the final result
  std::cout << "Final sum = " << result << " = 0b" << std::bitset<32>(result)
            << '\n';

  return 0;
}
