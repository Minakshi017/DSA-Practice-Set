#include <bits/stdc++.h>
using namespace std;

 int maxPeople(vector<int> &arr,int &x) {
     
     int currentweight = 0;
     int count = 0;
     
     sort (arr.begin(), arr.end());
     
     for(int i = 0; i < arr.size(); i++) {
         cout<<arr[i];
         
             if(currentweight + arr[i] <= x) {
                 currentweight += arr[i];
                 count++;
             }   else{
                 break;
             }
     }
         return count;

 }

int main()
{
   int n;
   cout<<"Enter people going of the lift";
   cin>>n;
   
   int x;
   cout<<"Enter high weight capacity of lift";
   cin>>x;
   
   vector <int> arr(n);
   
   for(int j = 0; j <n; j++)
   cin>>arr[j];
   
      int value = maxPeople(arr,x);
   cout<<"   "<<value;

   return 0;
}
