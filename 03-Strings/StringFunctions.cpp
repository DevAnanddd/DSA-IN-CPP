#include <iostream>
#include <cstring> // Ye header file zaruri hai
using namespace std;

int main() {
    // 1. STRCPY (COPY)
    char source[20] = "Dev Anand";
    char destination[30]; // Size bada rakhna zaruri hai

    strcpy(destination, source);
    cout << "Copied String: " << destination << endl; 


    // 2. STRCAT (CONCATENATE - Jodna)
    char firstName[20] = "Rahul "; // Space diya hai end mein
    char lastName[20] = "Kumar";

    strcat(firstName, lastName);
    cout << "Full Name: " << firstName << endl;


    // 3. STRCMP (COMPARE)
    char pass1[] = "password123";
    char pass2[] = "password123";

    // Yaad rakhna: 0 matlab EQUAL hota hai
    if(strcmp(pass1, pass2) == 0) {
        cout << "Password Matched!" << endl;
    } else {
        cout << "Wrong Password!" << endl;
    }

    return 0;
}