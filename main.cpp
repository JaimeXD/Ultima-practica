#include <iostream>
#include <string>
using namespace std;
template<typename T>

T _min(T a,T b){
    return (a<b)? a : b;
}
int main()
{
    string a ="o";
    string b="i";
    int s=8;
    int w=2;
    float q=8.4;
    float p=5.2;
    cout<<_min(a,b)<<endl;
    cout<<_min(s,w)<<endl;
    cout<<_min(q,p)<<endl;
}
