#include <iostream>

int main() { 
double number1;
double number2;
double result;
char userchoice;
std::cout << "Enter your operation (+,-,*,/)\n>";
std::cin >> userchoice;
std::cout << "Enter your first number:\n>";
std::cin >> number1;
std::cout << "Enter your second number:\n>";
std::cin >> number2;
if (userchoice == '+')
   result = number1 + number2;
else if (userchoice == '-')
   result = number1 - number2; 
else if (userchoice == '*')
   result = number1 * number2;
else if (userchoice == '/')
   result = number1 / number2;
std::cout << "Result:" << result << "\n";
return 0;
}
