#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 int t;int x; cin>>t;
 int i;int maxi=0,m=0,b=0;
 while(t--){
 	 cin>>x; 
 	 int arr[x];
 	for(int i=0;i<x;i++){
 		cin>>arr[i];	
	 }
	 for( i=0;i<x;i++){
	if(arr[i]>maxi&&arr[i]%2==0) {
 			maxi=arr[i];
 			
			 }
			 }
           for(int i=0;i<x;i++){
	 cout<<arr[i];
	 }  
		 }
		 
	

 }
 

