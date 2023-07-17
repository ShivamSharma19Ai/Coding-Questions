#include <vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<char>> &mat){
	int n=mat.size();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		reverse(mat[i].begin(),mat[i].end());
	}
}

void checks(vector<vector<char>> &vect){
    int n=vect.size();
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
           if(vect[i+1][j]=='o' && vect[i][j]=='x'){
              swap(vect[i][j], vect[i+1][j]);
           }
        }
    }
}

int main(){
    vector<vector<char>> vect;
    int n;
    int m;
    cin>>n;
    cin>>m;
    char a;
    for(int i=0;i<n;i++){
        vector<char> temp; 
        for(int j=0;j<m;j++){
            cin>>a;
            temp.push_back(a);
        }
        vect.push_back(temp);
        temp.clear();
    }
    rotateMatrix(vect);
    checks(vect);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }

}