#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


double factorial(int n);
double permutation(int n, int r);
double combination(int n, int r);
double circularPermutation(int n);
double repetitionPermutation(int n, int r);
void fibonacciSeries();
void lucasSeries();
void tribonacciSeries();
int fibonacci(int n);
int lucas(int n);
int tribonacci(int n);

int main() {
    int choice;

    do {
        // Clear screen
        system("cls");


        cout << "====================================================================================================================\n";
        cout << "      \t \t \t \t \t \t Lessons in ITWS-01     \n";
        cout << "====================================================================================================================\n";
        cout << "1. Permutation\n";
        cout << "2. Fibonacci Series\n";
        cout << "3. Exit\n";
        cout << "====================================================================================================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {

                int permutationChoice;


                system("cls");


                cout << "=============================================================================================================\n";
                cout << "        \t \t \t \t \t \t  Permutation          \n";
                cout << "=============================================================================================================\n";
                cout << "1. Permutation (nPr)\n";
                cout << "2. Combination (nCr)\n";
                cout << "3. Circular Permutation (n-1)!\n";
                cout << "4. Repetition Permutation (n^r)\n";
                cout << "=============================================================================================================\n";
                cout << "Enter your permutation choice: ";
                cin >> permutationChoice;


                system("cls");

                switch (permutationChoice) {
                    case 1:
                    {

                        int n, r;
                        cout << "=============================================================================================================\n";
                        cout << "        \t \t \t \t \t \t  Permutation (nPr)          \n";
                        cout << "=============================================================================================================\n";
                        cout << "Enter the value of n: ";
                        cin >> n;
                        cout << "Enter the value of r: ";
                        cin >> r;

                        if (n < r || n < 0 || r < 0) {
                            cout << "Invalid input. Please ensure n >= r >= 0.\n";
                        } else {
                            double result = permutation(n, r);
                            cout << "Permutation P(" << n << ", " << r << ") = " << result << "\n";
                        }
                        break;
                    }
                    case 2:
                    {
                        // Combination (nCr)
                        int n, r;
                        cout << "============================================================================================================\n";
                        cout << "       \t \t \t \t \t \t   Combination (nCr)          \n";
                        cout << "============================================================================================================\n";
                        cout << "Enter the value of n: ";
                        cin >> n;
                        cout << "Enter the value of r: ";
                        cin >> r;

                        if (n < r || n < 0 || r < 0) {
                            cout << "Invalid input. Please ensure n >= r >= 0.\n";
                        } else {
                            double result = combination(n, r);
                            cout << "Combination C(" << n << ", " << r << ") = " << result << "\n";
                        }
                        break;
                    }
                    case 3:
                    {

                        int n;
                        cout << "===========================================================================================================\n";
                        cout << "    \t \t \t \t \t \t Circular Permutation (n-1)!      \n";
                        cout << "===========================================================================================================\n";
                        cout << "Enter the value of n: ";
                        cin >> n;

                        if (n < 0) {
                            cout << "Invalid input. Please ensure n >= 0.\n";
                        } else {
                            double result = circularPermutation(n);
                            cout << "Circular Permutation CP(" << n << ") = " << result << "\n";
                        }
                        break;
                    }
                    case 4:
                    {

                        int n, r;
                        cout << "============================================================================================================\n";
                        cout << "       \t \t \t \t \t Repetition Permutation (n^r)     \n";
                        cout << "============================================================================================================\n";
                        cout << "Enter the value of n: ";
                        cin >> n;
                        cout << "Enter the value of r : ";
                        cin >> r;

                        if (n < 1 || r < 1) {
                            cout << "Invalid input. Please ensure n and r are both greater than 0.\n";
                        } else {
                            double result = repetitionPermutation(n, r);
                            cout << "Repetition Permutation (" << n << "^" << r << ") = " << result << "\n";
                        }
                        break;
                    }
                    default:
                        cout << "Invalid permutation choice. Please enter a number between 1 and 4.\n";
                }


                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;
            }
            case 2:
            {

                int fibonacciChoice;


                system("cls");


                cout << "=============================================================================================================\n";
                cout << "        \t \t \t \t \t \t  Fibonacci Series          \n";
                cout << "=============================================================================================================\n";
                cout << "1. Fibonacci\n";
                cout << "2. Lucas\n";
                cout << "3. Tribonacci\n";
                cout << "=============================================================================================================\n";
                cout << "Enter your Fibonacci choice: ";
                cin >> fibonacciChoice;

                // Clear screen
                system("cls");

                switch (fibonacciChoice) {
                    case 1:
                    {

                        fibonacciSeries();
                        break;
                    }
                    case 2:
                    {

                        lucasSeries();
                        break;
                    }
                    case 3:
                    {

                        tribonacciSeries();
                        break;
                    }
                    default:
                        cout << "Invalid Fibonacci choice. Please enter a number between 1 and 3.\n";
                }

                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;
            }
            case 3:
            system("cls");
                cout << "=============================================================================================================\n";
                cout << "        \t \t \t \t \t \t  END        \n";
                cout << "=============================================================================================================\n";
                cout << "Some lessons in math and submitted to Ma'am Dhiwata\n";
                cout << "Members:\n";
                cout << "Ralph Paul John Nagayo\nRonel Manabat\nLyco Arnie Ungriano\nVincent Eslaya\nBSIT 2-B \nBilly Espinoza\n"  ;
                cout << "=============================================================================================================\n";


                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;
            case 4:

                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
                return 0;
        }

    } while (choice != 4);

    return 0;
}


double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * factorial(n - 1);
    }
}


double permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}


double combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}


double circularPermutation(int n) {
    return factorial(n - 1);
}

double repetitionPermutation(int n, int r) {
    return pow(static_cast<double>(n), r);
}


void fibonacciSeries() {
    int n;

    cout << "=============================================================================================================\n";
    cout << "        \t \t \t \t \t \t  Fibonacci Series          \n";
    cout << "=============================================================================================================\n";
    cout << "Enter the number of terms in the series: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        cout << "Fibonacci Series: ";
        for (int i = 0; i < n; ++i) {
            cout << fibonacci(i) << " ";
        }
        cout << "\n";
    }
}


void lucasSeries() {
    int n;

    cout << "=============================================================================================================\n";
    cout << "        \t \t \t \t \t \t  Lucas Series          \n";
    cout << "=============================================================================================================\n";
    cout << "Enter the number of terms in the series: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        cout << "Lucas Series: ";
        for (int i = 0; i < n; ++i) {
            cout << lucas(i) << " ";
        }
        cout << "\n";
    }
}

void tribonacciSeries() {
    int n;

    cout << "=============================================================================================================\n";
    cout << "        \t \t \t \t \t \t  Tribonacci Series          \n";
    cout << "=============================================================================================================\n";
    cout << "Enter the number of terms in the series: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        cout << "Tribonacci Series: ";
        for (int i = 0; i < n; ++i) {
            cout << tribonacci(i) << " ";
        }
        cout << "\n";
    }
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


int lucas(int n) {
    if (n == 0) {
        return 2;
    } else if (n == 1) {
        return 1;
    } else {
        return lucas(n - 1) + lucas(n - 2);
    }
}


int tribonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
}
