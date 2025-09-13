// Write a program to convert "a" to "A"

#include <iostream>
using namespace std;

char convert(char name){

    char ans = name - 'a' + 'A';

    return ans;



}

int main(){
    char name;
    cin>>name;
    
    cout<<convert(name);





    return 0;
}