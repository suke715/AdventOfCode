#include<bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	freopen("Day1T.csv","r",stdin);
	int prev=0, first=0, second=0, third=0, count=-1;
	
	cin>>first;
	cin>>second;
	while(third!=-1) {
		cin>>third;
		first=first+second+third;
		if(first>prev) count++;
		prev=first;
		first=second;
		second=third;
	}
	cout<<count<<endl;
	return 0;
}
