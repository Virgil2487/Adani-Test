#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>> arr, int m,int n)
{
    vector<vector<int>> vec;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            vec[i][j] = arr[j][i];
    return vec;
}
vector<vector<int>>sortCol(vector<vector<int>> arr,
             int m, int n){
    vector<vector<int>> B
        = transpose(arr,m,n);
    RowWiseSort(B);
    arr = transpose(B,m,n);
    return arr;
}
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
    vector<vector<int>> sortv=sortCol(vec,m,n);
    for (int i = 0; i < m; i++){
        for (int j =0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}