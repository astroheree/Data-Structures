#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> &arr, int idx, vector<vector<int>> &ans, vector<int> &smallAns)
{
	for(int i = idx; i < arr.size() ; i++)
	{
		int ele = arr[i];
		smallAns.push_back(ele);
		fun(arr,i+1,ans,smallAns);
		smallAns.pop_back();
	}
}
	
int main()
{
	vector<int> arr = {7,5,10};
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	vector<int> smallAns;
	fun(arr,0,ans,smallAns);
	for(auto it: arr)
	{
		cout<<it<<" ";
	}
	cout<<"Ans "<<endl;
	for(auto it: ans)
	{
		for(auto jt:it)
		cout<<jt<<" ";
		cout<<endl;
	}
	cout<<"SmallAns"<<endl;
	for(auto it: smallAns)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;
}