#include <iostream>

int main() { 
double number1;
double number2;
double result;
char userchoice;
//
std::cout << "Enter your operation (+,-,*,/)\n>";
std::cin >> userchoice;
std::cout << "Enter your first number:\n>";
std::cin >> number1;
std::cout << "Enter your second number:\n>";
std::cin >> number2;  
if (userchoice == '+') {
    result = number1 + number2;
}
else if (userchoice == '-') {
    result = number1 - number2;
} 
else if (userchoice == '*') {
    result = number1 * number2;
}
else if (userchoice == '/') {
  if (number2 == 0 ) {
    std::cout << "ERROR: You can't divide by 0\n";
    return 1;
}
    result = number1 / number2;
}
else{
std::cout << "ERROR: Invalid operation\n";
return 1;
}
std::cout << "Result:" << result << "\n";
return 0;
}

