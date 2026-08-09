#include <iostream>
#include <climits>
using namespace std;

int targetfind(int arr[3][3],int target,int i,int j){//int arr brackeet mai 3,3 ya fir row ya col ma se ek ki value rakhna zaroori hota hai kyuki computer bhul jata hai

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j]==target){
            return 1;
        }
    }
}
return 0;
}

void printrowsum(int arr[3][3],int i,int j){

    for(int i=0;i<3;i++){//agar col wise sum nikalna hai toh iss line mai i ki jagah j rakhdo
        int sum=0;
        for(int j=0;j<3;j++){//agar col wise sum nikalna hai toh iss line mai j ki jagah i rakhdo
            sum=sum+arr[i][j];
            
        }
        cout<<"SUM OF row: "<<endl;
        cout<<sum<<endl;
    }
    
}
int largestrowsum(int arr[3][3],int i,int j){
    int maxi=INT_MIN;
    int indexrow=-1;//Maan le kisi wajah se tera loop nahi chala ya matrix mein koi aisi condition aa gayi ki sum > maxi kabhi true hi nahi hua:Agar function ke end mein indexrow abhi bhi -1 hai, toh tu samajh jayega ki "Bhai, pure code mein kahin bhi maxi update nahi huaAgar tune shuruat mein 0 liya hota, toh tujhe pata hi nahi chalta ki ye 0 asli answer hai ya sirf purani default value.
    for(int i=0; i<3;i++){
    int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            indexrow=i;
        }
    }
    cout<<"largest row  sum is : "<<maxi<<endl;
    
    return indexrow;

}

int main() {
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

    cout<<"Enter the number you want to find : "<<endl;
    int target;
    cin>>target;

    if(targetfind(arr,target,3,3)){
        cout<<"FOUND"<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }

    printrowsum(arr,3,3);

  
       int indexrow=largestrowsum(arr,3,3);
     cout<<"Maximum row is at index : "<<indexrow;
     return 0;
}