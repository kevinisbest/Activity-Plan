#include<iostream> 
#include<cstdlib> 
using namespace std;

int main(){
	
	
	int n;//���ʼƶq 
	cin >>n;
	
	int s[n];//�C�Ӭ��ʶ}�l�ɶ� 
	int f[n];//�C�Ӭ��ʵ����ɶ� 
	
	for(int i=0;i<n;i++) 
	{
		cin >> s[i]; 
	}
	
	for(int i=0;i<n;i++) 
	{
		cin >> f[i];
	}
	
	int num=0;//��X�Ӫ����ʼƶq
	int count=0;//�p��ɶ����|�γQ��X�����ʶq 
	bool select[n];//���Ǭ��ʳQ��X��
	
	for(int i=0;i<n;i++) 
	{
		select[i]=false;
	}
	
	while(count<n){
		
		
		int min=1001;//�Ȧs�ثe����end time
		int a=0;//�ثe��ĴX�Ӭ��� 
		
		for(int i=0;i<n;i++){//�쬡�ʥX�� 
			
			if( f[i]!=0 && min>f[i])//�q�Ĥ@�Ӭ��ʵ�����ӧP�_ 
			{
				min=f[i]; 
				a=i;
			}
		}
		int now=s[a];//�ثe��Fa�o�Ӭ��� 
		num++;
		count++;
		select[a]=true;
		
		
		s[a]=0;
		f[a]=0;//�R�������� ,�N��]�La�B�Q��W 	
		
		for(int i=0;i<n;i++){
			
			if(s[i]<min&&f[i]>=now&&f[i]!=0)//�p�G�����ʶ}�l�ɶ��ba���ʪ������ɶ��e 
			{
				
				s[i]=0;//�S�Q��W 
				f[i]=0;//�R��overlap������ 
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
