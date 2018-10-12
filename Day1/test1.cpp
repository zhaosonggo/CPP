/*
*time:2018.10.12
*author:zhaosong
*
*input:number={2,7,11,15},target=9
*output:index1=1,index2=2
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> twoSum(vector<int>&numbers,int target);

int main()
{	
	vector<int> number;
	number.push_back(2);
	number.push_back(2);
	number.push_back(2);
	number.push_back(2);
	int target=4;
	vector<int> result=twoSum(number,target);
	cout<<result.size();
	/*if(result.size()!=0){
		cout<<result[0]<<" ,"<<result[1];
	}*/
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<"  ";
	 } 
	return 1;
}

vector<int> twoSum(vector<int>&numbers,int target)
{
	map<int,int> mapping;
	vector<int> result;
	for(int i=0;i<numbers.size();i++)
	{
		mapping[numbers[i]]=i;
	}

	for(int i=0;i<numbers.size();i++)
	{
		int searched = target-numbers[i];
		if(mapping.find(searched)!=mapping.end()&&i!=mapping[searched])
		{
			result.push_back(i+1);
			result.push_back(mapping[searched]+1);
			//break;
		}
	}
	return result;
}
