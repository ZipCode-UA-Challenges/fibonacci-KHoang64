/**
 * @file fibonacci.hpp
 * 
 * @brief Include file for the fibonacci and fibonacciRacer free functions.
 */

#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP

#include <array>
#include <cstdint>

namespace fibonacci {

constexpr int MAX_64_BIT_FIBONACCI_INDEX = 92;

/**
 * @brief Computes Fibonacci numbers in a specified range and stores them in the provided array.
 * 
 * @param[out] results An array to store the computed Fibonacci numbers.
 * @param[in] start The starting index (inclusive) of the range to compute.
 * @param[in] end The ending index (inclusive) of the range to compute.
 * 
 * @pre `0 <= start <= end <= MAX_64_BIT_FIBONACCI_INDEX`
 * @post The `results` array will contain the Fibonacci numbers from index `start` to `end`.
 * 
 * @note This function is designed to compute Fibonacci numbers up to the 92nd index, as Fibonacci
 *       numbers beyond this index exceed the storage capacity of a 64-bit unsigned integer.
 */
void fibonacciRacer(std::array<uint64_t, MAX_64_BIT_FIBONACCI_INDEX + 1>& results, int start, int end);

/**
 * @brief Computes the n-th number in the Fibonacci sequence.
 * 
 * @details The Fibonacci sequence is defined as follows:
 * - The 0th Fibonacci number is 0.
 * - The 1st Fibonacci number is 1.
 * - For n > 1, the n-th Fibonacci number is the sum of the (n-1)-th and (n-2)th
 *   Fibonacci numbers.
 * 
 * @param[in] n The index (0-based) of the Fibonacci sequence to compute. Must
 *              be non-negative.
 * 
 * @return The fibonacci sum at the nth step
 */
uint64_t fibonacci(int n);

} // namespace fibonacci

#endif // FIBONACCI_HPP