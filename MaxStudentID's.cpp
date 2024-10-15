#include <bits/stdc++.h>
using namespace std;

int student(int n,vector<int>&ids){
    
   int evenStudentid = 0, oddStudentid = 0;
    
    for(int i =0; i < n; i++)
    if(ids[i] % 2 == 0)
        evenStudentid++;
    else
       oddStudentid++;
       
       return min(evenStudentid,oddStudentid);
}

int main()
{
    int n; 
    cout<<"Enter value of total students"<<endl;
    cin>>n;
    vector<int>ids(n);
    
    cout<<"Enter total Student ID's";
    
    for(int i=0; i <n; i++){
        cin>>ids[i];
    }
    
    int res = student(n,ids);
    cout<<res;
  
}