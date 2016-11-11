#include <iostream>
#include <string>
#define mi(a,b) (a<b) ? a : b
using namespace std;
template<typename T>

T minimo(T const a, T const b){
    if (a<b)
        return a;
    else
        return b;

}
main(){
    int a=2;
    int b=0;
    float c=4.25;
    float d=9.45;
    string f="l";
    string g="b";
    cout<<minimo(a,b)<<endl;
    cout<<minimo(c,d)<<endl;
    cout<<minimo(f,g)<<endl;
}


