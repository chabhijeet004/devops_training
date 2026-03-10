#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    
    string x="abaaacbaa";//string 

    vector<int> freq(128,0);//freq array 

    for(int i=0;i<x.size();i++){  
        freq[x[i]]++;
    }

    for(int i=0;i<freq.size();i++){
        if(freq[i]!=0){
            cout<<char(i)<<" freq is: "<<freq[i]<<endl;
        }
    }
    
}