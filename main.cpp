#include <iostream>
#include <cmath>
using namespace std;
int create_hash(string str){
    int PRIME_CONST=31;
     int hashCode = 0;
    for (int i = 0; i < str.length(); i++) {
        hashCode += str[i] * pow(PRIME_CONST, i);
    }
    return  hashCode;
}
int main() {
    cout<<create_hash("abc");

    return 0;
}