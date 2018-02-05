//program to show a 3dimensional array
//complete the unfinish and problamatic program below
//thanks.

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int arr[10][10][10],dim1,dim2,dim3,i,j,k;
	cout<<"Enter the three dimensions size:"<<endl;
	cin>>dim1>>dim2>>dim3;
	
	cout<<"Enter elements of array"<<endl;

	for(i=0;i<dim1;i++)
		for(j=0;j<dim2;j++)
			for(k=0;k<dim3;k++)
			{
				cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]=";
				cin>>arr[i][j][k];
				
			}

	cout<<"Displaying elements of array"<<endl;

	
	for(i=0;i<dim1;i++)
		for(j=0;j<dim2;j++)
			for(k=0;k<dim3;k++)
				cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]="<<arr[i][j][k]<<endl;
				getch();
				return 0;
				
}
