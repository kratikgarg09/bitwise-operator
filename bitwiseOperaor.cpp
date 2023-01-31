#include<iostream> 

using namespace std; 

int main(){ 
    int b, a ;
    cin >> a >> b;
    
    cout << endl  << (a&b) << endl;
    cout << (a|b) << endl;
    cout << (~b)  << endl;
    cout << (a^b) << endl;
    
    return 0;
}