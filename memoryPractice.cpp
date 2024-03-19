#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

//Where is each variable (m, j, k, x, y, z, v) located in memory? (Stack vs Heap vs Static)
//When does each variable get destroyed? What is the scope of each variable?
int m = 1; //static

void bar(int j){ //stack
    cout<<"Number: "<<j<<" | ";
}

void foo(int k){ //stack
    bar(k);
    cout<<k<<endl;
}

int main(){
    int x = 5; //stack
    int y = 6; //stack

    int *z = new int(7); //heap
    int *v = new int(8); //heap

    delete z;
}
