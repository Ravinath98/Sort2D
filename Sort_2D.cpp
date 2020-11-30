#include <iostream>

using namespace std;

int main()
{
    int rows,columns;  //rows and columns...
    cout<<"Enter the Number of Rows in the Matrix    : ";
    cin>>rows;
    cout<<"Enter the Number of Columns in the Matrix : ";
    cin>>columns;

    int matrix[rows][columns]; //2d matrix define...
    //input elements row by row.....
    cout << "Enter Matrix Elements row by row(**Please make sure each elements that entered are Unique) : " << endl;
    for(int i=0;i<rows;i++)
    {
        cout<<"Enter Row "<<i+1<<" Elements : "<<endl;
        for(int j=0;j<columns;j++)
        {
            cin>>matrix[i][j];
        }
    }


//SORT ROWS....
    for(int r=0;r<rows;r++)
    {
              for(int i2=1;i2<columns;i2++){
                for(int j2=0;j2<i2;j2++){
                    int c2=matrix[r][i2];
                    if(matrix[r][i2]<matrix[r][j2]){
                        matrix[r][i2]=matrix[r][j2];
                        matrix[r][j2]=c2;
                    }
                }
                }
    }


//SORT COLUMNS.....
    for(int c=0;c<columns;c++)
    {
                for(int i1=1;i1<rows;i1++){
                for(int j1=0;j1<i1;j1++){
                    int c1=matrix[i1][c];
                    if(matrix[i1][c]<matrix[j1][c]){
                        matrix[i1][c]=matrix[j1][c];
                        matrix[j1][c]=c1;
                    }
                }
                }
    }
    //output the sorted array.....
    cout<<endl<<endl<<"Sorted Matrix : "<<endl;  
    for(int x=0;x<rows;x++)
    {
        for(int y=0;y<columns;y++)
        {
            cout<<matrix[x][y]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
