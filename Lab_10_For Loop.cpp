
/*#include <iostream> 
#include <iomanip> 
 
using namespace std; 
 
int main() { 
    int N; 
 
    cout << "Number Printing Program" << endl; 
 
    cout << "Enter the value of N: "; 
    cin >> N; 
 
    // Check for valid input 
    if (N <= 0) { 
        cout << "Invalid input! Please enter a positive number.\n"; 
        return 0; 
    } 
    cout << "         Numbers from 1 to " << N << "\n"; 
 
    // Displaying numbers 
    for (int i = 1; i <= N; i++) { 
        cout << setw(4) << i << endl; 
    } 
 
 
    return 0; 
} */







/*#include <iostream> 
#include <iomanip> 
 
using namespace std; 
 
int main() { 
    int num, limit; 
 
    cout << "Multiplication Table" << endl; 

    cout << "Enter a number: "; 
    cin >> num; 
    cout << "Enter the limit: "; 
    cin >> limit; 
 
    cout << " Multiplication Table of " << num << "       " << endl; 
 
    // Displaying the multiplication table 
    for (int i = 1; i <= limit; i++) { 
        cout << setw(4) << num << " * " << setw(2) << i << " = " << setw(4) << (num * i) << endl; 
    } 
 
 
    return 0; 
}*/







/*#include <iostream> 
#include <iomanip> 
 
using namespace std; 
 
int main() { 
    int N, sum = 0; 
 
    cout << " Sum of First N Natural Numbers " << endl; 

    cout << "Enter a positive number (N): "; 
    cin >> N; 
 
    // Validating input 
    if (N <= 0) { 
        cout << "Invalid input! Please enter a positive number.\n"; 
        return 0; 
    } 
 
    // Calculating sum using a loop 
    for (int i = 1; i <= N; i++) { 
        sum += i; 
    } 
 
    // Displaying output 
    cout << "  Sum of first " << setw(2) << N << " natural numbers = " << sum << endl; 
 
    return 0; 
}*/






/*#include <iostream> 
using namespace std; 
 
int main() { 
    int rows = 4, cols = 4;  
 
    cout << "Square of Stars\n"; 
     
    for (int i = 0; i < rows; i++) {  
        for (int j = 0; j < cols; j++) {  
            cout << "* "; 
        } 
        cout << endl; 
    } 
 
    return 0; 
} */





/*#include <iostream> 
using namespace std; 
 
int main() { 
    int rows = 5; 
    cout << " Triangle\n"; 
     
    for (int i = rows; i >= 1; i--) { 
        for (int j = 1; j <= i; j++) { 
            cout << "* "; 
        } 
        cout << endl; 
    } 
 
    return 0; 
} */






/*#include <iostream> 
using namespace std; 
 
int main() { 
    int num; 
   long long factorial = 1; 
    cout << "Enter a number to calculate its factorial: "; 
    cin >> num; 
    
    // Errror of negative numbers 
    if (num < 0) { 
        cout << "Factorial of a negative number is not defined." << endl; 
    } else { 
        // Calculating factorial 
        for (int i = 1; i <= num; i++) { 
            factorial *= i; 
        } 
        // Displaying the result 
        cout << "Factorial of " << num << " is: " << factorial << endl; 
    } 
    return 0; 
} */








 



