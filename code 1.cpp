#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;
vector<vector<int>> func (int m,int n){
    vector<vector<int>> v;
    int s=100;
    for (int i = 0; i < m; i++){
        vector<int> temp;
        for (int j =0;j<n;j++)
            temp.push_back(rand()%s);
        v.push_back(temp);
    }
    return v;
}
int main(){
    int m,n;
    cout<<"Enter no of rows";
    cin>>m;
    cout<<"Enter no of columns";
    cin>>n;
    int arr[m][n];
    vector<vector<int>> vec=func(m,n);
    for (int i = 0; i < m; i++){
        for (int j =0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}