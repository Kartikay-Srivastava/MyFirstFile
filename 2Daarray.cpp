#include<iostream>
#include<vector>
using namespace std;
//int main()
//{
//	int i,j,arr[3][3];
//	cout<<"enter element";
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			cin>>arr[i][j];
//		}
//	}
////	int key;
////	cout<<"enter key to find";
////	cin>>key;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			swap(arr[i][j],arr[j][i]);
//		}
//		cout<<endl;
//	}
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
////	for(i=0;i<3;i++)
////	{	int sum=0;
////		for(j=0;j<3;j++)
////		{
////			sum=sum+arr[i][j];
////		}
////		cout<<sum<<endl;
//	}
//}
int main()
{
	vector<vector<int>>arr;
	vector<int> a{1,2,3};
	vector<int> b{2,4,6};
	vector<int> c{1,5,8};
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
		cout<<arr[i][j]<<" ";
		}
		cout<<endl; 
	}
}
