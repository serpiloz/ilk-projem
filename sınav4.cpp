#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int compare(char user,char system)
{
	if(user=='t'&&system=='m')
	{
		return 1;
	}
	if(user=='k'&&system=='t')
	{
		return 1;
	}
	if(user=='m'&&system=='k')
	{
		return 1;
	}
	if(user=='m'&&system=='t')
	{
		return 2;
	}
	if(user=='t'&&system=='k')
	{
		return 2;
	}
	if(user=='k'&&system=='m')
	{
		return 2;
	}
return 0;
	
}
int main(){
		char arr[3]={'t','k','m'};
			srand(time(0));
			cout<<"hoþgeldiniz taþ makas kaðýt oyununa "<<endl;
			cout<<"lütfen seçiminizi giriniz"<<endl;
	int tahmin;
	char secim;
	int user=0;
	int system=0;
	int skor;
	while(user<4 && system<4 )
	{
		

	 tahmin=rand()%3;
	cout<<"lütfen seçiminizi giriniz";
	cin>>secim;
	
	int sonuc=compare(secim,arr[tahmin]);
if(sonuc==1)
{
	user++;
}
if(sonuc==2)
{
	system++;
}
else 
{
	cout<<"beraberlik!"<<endl;

}

   cout<<"skor puaný"<<user<<"skor="<<system<<endl;
   
}
	if(user>system)
	{
		cout<<"tebrikler sen kazandýn"<<user<<endl;
	}
else 
{
	cout<<"tebrikler bilgisayar sen kazandýn"<<system<<endl;
	}	
}
