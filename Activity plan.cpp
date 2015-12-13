#include<iostream> 
#include<cstdlib> 
using namespace std;

int main(){
	
	
	int n;//活動數量 
	cin >>n;
	
	int s[n];//每個活動開始時間 
	int f[n];//每個活動結束時間 
	
	for(int i=0;i<n;i++) 
	{
		cin >> s[i]; 
	}
	
	for(int i=0;i<n;i++) 
	{
		cin >> f[i];
	}
	
	int num=0;//抓出來的活動數量
	int count=0;//計算時間重疊及被抓出的活動量 
	bool select[n];//那些活動被抓出來
	
	for(int i=0;i<n;i++) 
	{
		select[i]=false;
	}
	
	while(count<n){
		
		
		int min=1001;//暫存目前活動end time
		int a=0;//目前到第幾個活動 
		
		for(int i=0;i<n;i++){//抓活動出來 
			
			if( f[i]!=0 && min>f[i])//從第一個活動結束後來判斷 
			{
				min=f[i]; 
				a=i;
			}
		}
		int now=s[a];//目前選了a這個活動 
		num++;
		count++;
		select[a]=true;
		
		
		s[a]=0;
		f[a]=0;//刪掉此活動 ,代表跑過a且被選上 	
		
		for(int i=0;i<n;i++){
			
			if(s[i]<min&&f[i]>=now&&f[i]!=0)//如果有活動開始時間在a活動的結束時間前 
			{
				
				s[i]=0;//沒被選上 
				f[i]=0;//刪掉overlap的活動 
				count++;
				
			}
		}
}
	cout<<endl<<num<<endl<<"(";
	
	for(int i=0;i<n;i++)
	{
		if(select[i]==true)
		{
			cout<<i+1<<",";
		} 
	}
	cout<<")"<<endl;
	
	return 0;
	system("pause");
	
	
}
