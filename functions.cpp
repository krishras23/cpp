// void type if you want a function to not return a value

#include <iostream>

using namespace std;

void printNum(){
    cout << "Printing all the numbers";
}

void ActualNum(int num){
    cout << "My favorite number is" << num;
}


int Calculations(int a, int b, int c){
    int sum = a + b + c;
    return sum;
}



int main() {
    //printNum();
    //ActualNum(234);
    cout << Calculations(1,2,3);
    return 0;
}

