/**
 * @file fibonacci.cpp
 * 
 * @brief Implementation file for the fibonacci and fibonacciRacer
 *        free functions declared in include/fibonacci.hpp.
 */

#include "fibonacci.hpp"

namespace fibonacci {

void fibonacciRacer(std::array<uint64_t, MAX_64_BIT_FIBONACCI_INDEX + 1>& results, int start, int end) {
    /**
     * @todo Implement the fibonacciRacer function declared in include/fibonacci.hpp.
     */
}


uint64_t fibonacci(int n) {
    

    uint64_t prev = 0, curr = 1;
    if (n == 0)return prev;
    if(n == 1) return curr;
    /*
    // else remmber that      
    prev = F(n-2)
    curr = F(n-1) 
     */
    //now for,when n is  2 or more, start at 2 
    for(int i = 2; i <= n; i++){

        uint64_t next = prev + curr; // F(n) = F(n-1) + F(n-2)
        prev = curr; // move prev to F(n-1)
        curr = next; // move curr to F(n)
    }
    return curr;

     
}

} // namespace fibonacci
