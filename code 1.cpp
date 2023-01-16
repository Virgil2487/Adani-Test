#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
    int m,n;
    int s=100;
    cout<<"Enter no of rows";
    cin>>m;
    cout<<"Enter no of columns";
    cin>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
        for (int j =0;j<n;j++)
            arr[i][j]= rand()%s;
    for (int i = 0; i < m; i++){
        for (int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}