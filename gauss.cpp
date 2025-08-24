#include <iostream>
#include <string>
using namespace std;
//testing to see new branch
//this algorithm was  made to perform operations on matrices using the gauss-jordan elimination.This will give you
//a solution to each augmented matrix entered ,it mimicks the gaussian elimination algorithm .

int main(){
//vaiables:
int rows = 0;//:number or rows in matrice
int cols = 0;//cols:number of colomns in matrice

cout<<"This is a an application to solve Linear Systems \n";
cout<<"Enter the size of the augmented matrice-> \n";
cout<<"Rows: ";
cin>>rows;
cout<<"Columns: ";

cin>>cols;

int** matrice = (int**)malloc(rows* sizeof(int*));
for (int i = 0; i < rows; i++) {
	 matrice[i] = (int*)malloc(cols * sizeof(int));
}
for(int i = 0; i < rows; i++) {
	for(int k = 0; k < cols; k++) {
		matrice[i][k] = 0;
	}
}
//matrice input
cout<<"Enter values for matrice entries(press Enter after every inserted entry). \n ";
for(int i = 0;i<rows;i++)
{
	cout<<"Enter values for row "<<i +1<<endl;
	for(int k = 0;k<cols;k++)
	{
		cout<<"Column "<<k +1<<": ";
		   	cin >> matrice[i][k];
	
		//cout<<" ";
	}
 cout<<endl;
}
//matrice input

//We will operate certaion operations on the matrix depending on certainstates of the matrix 

//if matrix is a zero matrix then return it
bool zero = true;
for(int i = 0; i<rows;i++)
{
	for(int k= 0;k<cols;k++)
	{
		if(matrice[i][k]>0 || matrice[i][k]<0)
		{
			zero = false;
			
		}
	}
}
if(zero == true)
{
	cout<<"This is a zero matrix";
			for(int i = 0;i<cols;i++)
	{
		for(int k = 0;k<cols;k++)
		{
			cout<<matrice[i][k]<<" ";
		}
	cout<<endl;
	}
}

//if matrix is a zero matrix then return it





return 0;
}
