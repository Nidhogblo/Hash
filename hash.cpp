#include "hash.h"
#include <cmath>
using namespace std;

hash::hash(){}
hash::hash(string str){
    int hashCode = 0;
    for (int i = 0; i < str.length(); i++) {
        hashCode += str[i] * pow(PRIME_CONST, i);
    }
    
}
hash::hash(string str,int prime){
    int hashCode = 0;
    for (int i = 0; i < str.length(); i++) {
        hashCode += str[i] * pow(prime, i);
    }
}
