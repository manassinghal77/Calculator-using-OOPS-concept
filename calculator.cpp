int main() {
  Calculator calc;

  double num1, num2;
  char op;

  // Prompt the user for input
  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  // Prompt the user for operation
  cout << "Enter an operation (+, -, *, /): ";
  cin >> op;

  // Set the values for num1 and num2 in the Calculator object
  calc.setNum1(num1);
  calc.setNum2(num2);

  // Perform the requested operation
  switch (op) {
    case '+':
      calc.add();
      break;
    case '-':
      calc.subtract();
      break;
    case '*':
      calc.multiply();
      break;
    case '/':
      calc.divide();
      break;
    default:
      cout << "Invalid operator" << endl;
      return 1;
  }

  return 0;
}
