#ifndef FREW_COMMON_HPP
#define FREW_COMMON_HPP

#include <concepts>
#include <iostream>

/* This file is going to contain a very basic logger
 * along with the definition of what a debug mode has
 * A logger is a tool that helps us understand where we went wrong
 * Our logger will print to the standard output (stdout) in DEBUG_MODE
 * */
namespace frew
{
#ifndef DEBUG_MODE
#define DEBUG_MODE 1
#endif

// the thing is that we can modify what DEBUG_MODE 's  value is through a
// compiler flag, and that is exactly what our Makefile does
#if DEBUG_MODE == 1
// logger definition
// Let us start with a very simple logger:
#define LOG(msg) std::cout << (msg) << "\n"
// the do while(0) loop is just to make it a simple block of code
#define LOG_DETAIL(msg)                                                                            \
    do                                                                                             \
    {                                                                                              \
        LOG(msg)                                                                                   \
        std::cout < < < < "Function: " << __func__ << "\tLine: " << __LINE__ << "\n"               \
    } while (0)
#define LOG_VAR(x)                                                                                 \
    std::cout << #x << " = " << (x) << "\n"                                                        \
              << "Function: " << __func__ << "\tLine: " << __LINE__ << "\n"
// the above macro prints something like "x = 10" (if x is 10)
// but i also want it to print the line at which this was called and the
// function in which it was called
#else
// So no logger should exist
#define LOG(msg) (void(0))
#define LOG_VAR(x) (void(0))
// No logger exists
#endif

// common types and concepts will also be written here later

// we want that out tensor is either of a numerical type, or of a bool type. hence:
//

template <typename T>
concept Tensor_dtype = (std::integral<T> || std::floating_point<T>);

// now we can use this everywhere in our tensor

} // namespace frew
#endif
