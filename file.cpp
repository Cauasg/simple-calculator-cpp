// CALCULADORA BÁSICA EM C++
// FEITO POR: CAUÃ LINDÃO

#include <iostream>

using namespace std;

int calculator () {
    char operation;
    int num1, num2;

    cout << "Enter an operation: " << endl;
    cin >> operation;
    
    cout << "Enter a number: " << endl;
    cin >> num1;
    
    if (operation != '!' && operation != '^') {
        cout << "Enter another number: " << endl;
        cin >> num2;  
    }

    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;

        case '!':
            {
                int factorialResult = num1;
                for (int count = 1; count < num1; count++) {
                    factorialResult = factorialResult * (num1 - count);
                }
                cout << "Fatorial do número " << num1 << " = " << factorialResult << endl;
                break;
            }
            

        case '^':
            {
                int expoente;
                int potencia = num1;
            
                cout << "Qual o expoente?" << endl;
                cin >> expoente;

                for (int count = 1; count < expoente; count ++) {
                    potencia = potencia * num1;
                }

                cout << "O valor de " << num1 << " elevado a " << expoente << " = " << potencia << endl;
                break;  
            }
    }

    return 0;
}

int main() {
    int useCalculator = 1;
    int res = calc()
    
    while (useCalculator == 1)
    {
        calculator();
        cout << "Want to do another operation? 1: Yes / 0: No" << endl;
        cin >> useCalculator;
    }
    
    return 0;
}