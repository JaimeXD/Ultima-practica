#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Graph{
private:
    map<int,vector<int> > nodo;
public:
    Graph( vector<int>&starts, vector<int> &ends){
        int i;
        for(i = 0 ; i < starts.size() ;i++)
            graf[starts[i]].push_back(fin[i]);
    }
    int numOutgoing(const int nodeID) const{
        return adjacent(nodoID).size() ;
    }
    const vector<int> adjacent(const int nodeID) const{
        return graf.find(ID_nodo) -> second;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
