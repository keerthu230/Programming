#include <iostream>
using namespace std;

int main() {
    
    int r,c,i,j,flag;
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
            s[i]+=arr[j][i];// interchange the location of variables as per the need (00+10)(01+11)
            cout<<"\n"<<s[i]<<"\n";
        }
    }
    
    cout<<"\n";
    for(i=0;i<r;i++)
    {
        if(s[i]!=s[i+1])
         flag=1 ;
    }
    if(flag==1)// flaging incase of the arrays column equality
    cout<<"\n array equality result --> not equal";
	return 0;
}
