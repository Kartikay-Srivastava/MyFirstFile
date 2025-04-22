#include<bits/stdc++.h>
using namespace std;
int main()
{
	// find the largest and smallest in array
//	int arr[100],n;
//	cout<<"enter size of array";
//	cin>>n;
//	cout<<"enter array elements\n";
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//	}
//	int max=arr[0];
//	int min=arr[0];
//	for(int i=0;i<n;i++)
//	{
//		if(max<arr[i]){
//			max=arr[i];
//		}
//		else if(min>arr[i])
//		{
//			min=arr[i];
//		}
//	}
//	cout<<"largest element"<<max<<endl;
//	cout<<"smallest element"<<min;
//	

														//Reverse an array
//	int arr[5]={1,2,3,4,5};
//	int rev[5],j=sizeof(arr)/sizeof(int)-1;
//	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
//	{
//		rev[j]=arr[i];
//		cout<<"element stored "<<rev[j]<<endl<<"at index "<<j<<endl;
//		j--;
//	}
//	
//	for(int i=0;i<sizeof(rev)/sizeof(int);i++)
//	{
//		cout<<rev[i]<<endl;
//	}

													//	find duplicate element in array
				//for sorted array									
				
//	int arr[8]={1,2,3,4,5,5,6,7};
//	for(int i=1;i<8;i++)
//	{
//		if(arr[i]==arr[i-1])
//		{
//			cout<<"duplicate elemnt "<<arr[i];
//		}
//		
//	}
				//for unsorted array

//	int arr[8]={2,1,3,2,1,5,6,7};
//	unordered_set<int> seen;
//    cout << "Duplicate values	: ";
//    for (int i = 0; i < 8; i++) {
//        if (seen.find(arr[i]) != seen.end()) {
//            cout << arr[i] << " ";
//        } else {
//            seen.insert(arr[i]);
//        }
//    }


				
//	string s1,s2;
//	cout<<"enter two strings";
//	cin>>s1>>s2;
//	sort(s1.begin() , s1.end());
//	sort(s2.begin(),s2.end());
//	if(s1==s2)
//	{
//			cout<<"your string is anagram";
//			return 0;
//	}			
//	cout<<"not anagram";
				
	//					 swap two numbers using pointers
	
//	int n1,n2,*p1,*p2;
//	p1=&n1;
//	p2=&n2;
//	cout<<"enter two numbers\n";
//	cin>>n1>>n2;
//	*p1=*p1 + *p2;
//	*p2=*p1-*p2;
//	*p1=*p1 - *p2;
//	cout<<"after swapping\n";
//	cout<<n1 << n2;
	
	//						implement array using pointer
	
	int arr[]={10,20,30};
	cout<<*arr<<endl;
	int *ptr=arr;
	for(int i=0;i<3;i++)
	{
		cout<<*(arr+i);
		ptr++;
	}
	
	
	
	
	
	return 0;
}
