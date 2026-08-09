#include <iostream>
using namespace std;

// 1. Valid function (Check karega ki faltu symbol toh nahi hai)
bool valid(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ) {
        return 1; // Kaam ka character hai
    }
    return 0; // Faltu symbol hai (Example: @, $)
}

// 2. Case Sensitive Logic (Thoda safe kar diya hai numbers ke liye)
char toLowerCase(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') ) {
        return ch; // Agar chhota hai ya number hai, waisa hi return kardo
    }
    else {
        // Sirf Bade letters ko convert karo
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int getlength(char letter[]){
    int count = 0;
    for(int i = 0; letter[i] != '\0'; i++){
        count++;
    }
    return count;
}

bool checkPalindrome(char letter[], int n) {
    int s = 0;
    int e = n - 1;

    while(s <= e) {
        
        // Step 1: Agar start wala character faltu hai, toh aage badho
        if( !valid(letter[s]) ) {//ye "!"NOT HAI agar waha se 1 return hoga toh usse ye 0 bana dega aur agar 0 return hoga toh usse 1 bana dega
            s++;
        }
        // Step 2: Agar end wala character faltu hai, toh peeche aao
        else if( !valid(letter[e]) ) {
            e--;
        }
        // Step 3: Jab dono taraf kaam ke char milein, tab compare karo
        else {
            if( toLowerCase(letter[s]) != toLowerCase(letter[e]) ) {
                return 0;
            }
            else {
                s++;
                e--;
            }
        }
    }
    return 1;
}

int main() {
    
    char letter[100]; 
    
    cout << "ENTER YOUR SENTENCE : ";
    
   
    cin.getline(letter, 100); 

    int length = getlength(letter);

    if(checkPalindrome(letter, length)){
        cout << "IS A VALID PALINDROME" << endl;
    }
    else{
        cout << "NOT A VALID PALINDROME" << endl;
    }

    return 0;
}