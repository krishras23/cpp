#include <iostream>

using namespace std;

//infinite loop test

void testWhile(){
    int x = 10;
    while (x > 2){
        cout << "hello" <<endl;
    }
}

int main() {
    for (int x=1; x<10; x++){
        cout << x << endl; 
    }
    testWhile();
}
