#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Base Case
    if (n == 1) return 0;
    if (n == 2) return 1;

    int a = 0; 
    int b = 1; 
    int ans = 0;

    
    int i = 3;
    while(i <= n) {
            ans = a + b; 
        a = b;       
        b = ans;     
        
        i = i + 1;   
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
