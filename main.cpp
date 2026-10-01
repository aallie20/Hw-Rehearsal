#include <iostream>

int average(int a, int b) {
    return (a + b) / 2;
}
 
int double_value(int x) {
    return x * 2;
}

int main() {

    int num1 = 10;
    int num2 = 20;

    // 2. Calling the average function and storing the result
    int avg_result = average(num1, num2);
    std::cout << "The average of " << num1 << " and " << num2 << " is: " << avg_result << std::endl;

    // 3. Calling the double_value function directly inside a print statement
    int doubled = double_value(num1);
    std::cout << num1 << " doubled is: " << doubled << std::endl;

    return 0;

}
