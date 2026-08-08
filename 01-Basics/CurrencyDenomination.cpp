#include <iostream>
using namespace std;
int main(){
 int money= 1330;

 char ch=1;

 switch(ch){

case 1:
cout<<"100 rupee notes : "<<money/100<<endl;
money=money%100;

case 2:
cout<<"50 rupees note : "<<money/50<<endl;
money=money%50;
 
 case 3:
 cout<<"10 rupees note : "<<money/10<<endl;
 money=money%10;

 case 4:
 cout<<"1 rupees note : "<<money/1<<endl;
 money=money%1;
 }



    return 0;

}