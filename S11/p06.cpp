#include<iostream> 
using namespace std; 

double celsiusToFahrenheit(double temp) {
    return 1.8 * temp + 32; 
}

double fahrenheitToCelsius(double temp) {
    return (temp - 32)/1.8;
}

void showMenu() {
    cout << "1) Celsius to Fahrenheit\n";
    cout << "2) Fahrenheit to Celsius\n";
    cout << "3) Exit\n";
    cout << "Enter your choice: ";
}

int main() { 
    while(true) { 
        showMenu(); 
        int choice; 
        cin >> choice; 
        if (choice == 3) { 
            break; 
        } else if (choice > 3) { 
            cout << "Wrong Choice! Try again!\n";
            continue; // skip the rest of the loop and go to the beginning of the loop
        }
        double temp; 
        cout << "Enter the temperature: "; 
        cin >> temp; 
        if (choice == 1) { 
            cout << celsiusToFahrenheit(temp) << endl; 
        } else if (choice == 2) { 
            cout << fahrenheitToCelsius(temp) << endl;
        }
    }
}