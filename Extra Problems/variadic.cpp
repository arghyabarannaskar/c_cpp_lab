#include <iostream>

// Base case: when there are no more integers to sum
int Sum() {
    return 0;
}

// Recursive case: sum the current integer and call Sum for the rest
template <class T, class... Args>
int Sum(T first, Args... rest) {
    return first + Sum(rest...);
}

int main() {
    // Example usage
    int result = Sum(1, 2, 3, 4, 5);
    std::cout << "Sum: " << result << std::endl;

    return 0;
}
