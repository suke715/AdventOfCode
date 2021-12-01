#include<bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	freopen("Day1T.csv","r",stdin);
	//freopen("Day1T_out.csv","w",stdout);
	int first=0, second=0, third=0, count=-1;

	while(second!=-1) {
		cin>>second;
		if(second>first) count++;
		first=second;
	}
	cout<<count<<endl;
	return 0;
}
