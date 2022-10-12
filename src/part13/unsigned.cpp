// A simple example of unsigned numbers in C++
// By: Nick from CoffeeBeforeArch

#include <bitset>
#include <cstdint>
#include <iostream>

int main() {
  // Set our unsigned 32b integer value
  std::uint32_t val = 171;
  std::bitset<32> bits(val);

  // Result we're going to calculate
  std::uint32_t result = 0;

  // Go through all the bits
  for (int i = 0; i < 32; i++) {
    // If the bit is set, print the value
    if (bits[i]) {
      result += 1 << i;
      std::cout << "2^" << i << " = " << (1 << i) << '\n';
    }
  }

  // Print the final result
  std::cout << "Final sum = " << result << " = 0b" << std::bitset<32>(result)
            << '\n';


  return 0;
}
