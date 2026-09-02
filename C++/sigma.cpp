#include <iostream>
using namespace std;

int main(){
    int start, end, expo, base, value, result;
    result = 0;
    cout<<"Start: ";
    cin>>start;
    cout<<"End: ";
    cin>>end;
    cout<<"n raised to: ";
    cin>>expo;
    cout<<endl;
    for (base = start; base <= end; base++){
        value = 1;
        for (int i=0; i < expo; i++){
            value *= base;
        }
        cout<<value;
        if(base<end){
            cout<<" + ";
        }
        result += value;
    }
    cout<<endl<<"= "<<result;
}

