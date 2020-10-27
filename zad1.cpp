#include <iostream>
using namespace std;

#define MAX 100 //definiujemy limit

int main()
{
	//array z limitem
	int arr[MAX];
	int n,a,j;
	int temp;
	
	//uzytkownik podaje ile chce wpisac cyfr
	cout<<"Enter amount of elements: ";
	cin>>n;
	
	//kod sprawdza czy wpisana ilosc cyfr nie jest wieksza za limit
	if(n<0 || n>MAX)
	{
		cout<<"Input valid range!!!"<<endl;
		return -1;
	}
	cout<<"Enter elements: ";
	//zapisuje wpisane uzytkownikiem cyfry
	for(a=0;a<n;a++)
	{
		
    
		cin>>arr[a];
	}
	
	//pokazuje wpisane cyfry
	cout<<"Input:"<<endl;
	for(a=0;a<n;a++)
		cout<<arr[a]<<" ";
	cout<<endl;
	
	//sortuje
	for(a=0;a<n;a++)
	{		
		for(j=a+1;j<n;j++)
		{
			if(arr[a]>arr[j])
			{
				temp=arr[a];
				arr[a]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	//pokazuje cyfry rosnąco
	cout<<"Out:"<<endl;
	for(a=0;a<n;a++)
		cout<<arr[a]<<" ";
	cout<<endl;	
	
	
	return 0;
	
}