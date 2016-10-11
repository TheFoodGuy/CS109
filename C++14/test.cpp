#include <iostream>
using namespace std; 

int main(){
    auto myfun = [](auto x, auto y){
        cout << x + y << endl;
    };
    myfun(1,2.1324);
    
}