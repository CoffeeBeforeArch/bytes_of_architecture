// A simple example of single-precision floats in C++
// By: Nick from CoffeeBeforeArch

#include <bitset>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <iostream>

int main() {
  // Set our floating point value
  float val = -0.625;

  // Get the bits using bitset (small hack with memcpy)
  std::uint32_t memcpy_val = 0;
  std::memcpy(&memcpy_val, &val, sizeof(float));
  std::bitset<32> bits(memcpy_val);

  // Get the sign bit
  float sign = bits[31] ? -1.0f : 1.0f;
  std::cout << "Sign = " << sign << '\n';

  // Calculate the exponent
  std::int32_t exponent = 0;
  for (int i = 0; i < 8; i++) {
    if (bits[i + 23]) {
      if (i == 7)
        exponent -= 1 << i;
      else
        exponent += 1 << i;
    }
  }

  // Remove the bias and calculate the value
  exponent -= 127;
  float exp_result = pow(2, exponent);
  std::cout << "Exponent result = " << exp_result << '\n';

  // Calculate the mantissa
  float mantissa = 1.0f;
  for (int i = 0; i < 23; i++) {
    if (bits[22 - i]) {
      mantissa += std::pow(2, -i - 1);
    }
  }
  std::cout << "Mantissa = " << mantissa << '\n';

  // Calculate the result
  float result = sign * exp_result * mantissa;

  // Print the final result
  // Get the bits using bitset (small hack with memcpy)
  std::uint32_t memcpy_result = 0;
  std::memcpy(&memcpy_result, &result, sizeof(float));
  std::bitset<32> result_bits(memcpy_result);
  std::cout << "Final result = " << result << " = 0b" << result_bits << '\n';

  return 0;
}
