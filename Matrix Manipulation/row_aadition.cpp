#include <iostream>
using namespace std;

int main() {
    
    int r,c,i,j;
    cin>>r>>c;
    int arr[r][c];
    int s[r]={0}; // initialize the null array 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"matrix \n ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            s[i]+=arr[i][j];
            cout<<"\n"<<s[i]<<"\n";
        }
    }
    
    cout<<"\n";
    for(i=0;i<r;i++)
    cout<<"\n"<<s[i];
    
	return 0;
}
