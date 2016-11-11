#include <iostream>
#include <vector>
using namespace std;
template<class T>
class Pila{
    vector<T> a;
    int _size;
    T *p;
public:
    Pila(){
        _size=0;
        p=new T [_size];
    }
    void push(const T a){
        p[++_size]=a;
    }
    void pop(){
        T *a=new T[--_size];
        for(int i=0;i<_size;++i)
            a[i]=p[i];
        p=a;
    }
    T imprimir(){
        for (int i=1;i<=_size;++i)
            cout<<p[i]<<endl;

    }
    bool vacia(){
        if (_size==0)
            cout<< "vacio"<<endl;
        else
            cout<<"no esta vacia"<<endl;
    }
    Pila<T>operator +(const Pila<T>&a1,const Pila<T>&a2){
        for (int i=0;i<_size;++i)
            cout<<a1[i]<<endl;
        for(int i=0;i<_size;++i)
            cout<<a2[i]<<endl;
    }


};
int main()
{
    Pila<int>q;
    q.push(3);
    q.push(4);
    q.vacia();
    q.pop();
    q.imprimir();
    cout<<"---------"<<endl;
    Pila<float>a;
    a.push(2.5);
    a.push(5.3);
    a.vacia();
    a.imprimir();


}

