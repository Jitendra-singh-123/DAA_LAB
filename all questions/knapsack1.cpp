#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,i=0,wt,capacity;
 float price;
 cout<<"Enter number of objects"<<endl;
 cin>>n;
 cout<<"Enter size of bag"<<endl;
 cin>>capacity;
 cout<<"Enter weight and price"<<endl;
 vector<pair<float,pair<int,float>>> knapsack;
 for(int i=0;i<n;i++){
     cin>>wt>>price;
     knapsack.push_back(make_pair(price/wt,make_pair(wt,price)));
 }
 sort(knapsack.begin(),knapsack.end());
 reverse(knapsack.begin(),knapsack.end());
 float totalprofit=0.0;
 while (capacity!=0 && i<n)
 {  
    if(capacity>=knapsack[i].second.first)
   {  totalprofit+=knapsack[i].second.second;
     capacity-=knapsack[i].second.first;
   }
   else{
       totalprofit+=capacity*knapsack[i].first;
       capacity=0;
   }
   i++;
 }
 cout<<"Maximum profit is: "<<totalprofit;
 
}