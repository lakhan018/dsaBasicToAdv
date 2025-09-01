#include <iostream>
#include <vector>

using namespace std; 
int main(){
    vector<int> arry;
    arry.push_back(5);
    arry.push_back(5);
    arry.push_back(5);
    arry.push_back(5);
    arry.push_back(5);
    for(int i:arry){
        cout<<i<<endl;
    }
}