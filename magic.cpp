#include <bits/stdc++.h> 
using namespace std; 
  
int isMagicSquare(int matrix[50][50], int n, int m); 
  
int main(){ 
    int matrix[50][50], n, m;

    cout<<"Enter the length of row of the matrix: ";
    cin >> m;
    cout<<"Enter the length of column of the matrix: ";
    cin >> n;

    if(n != m){
        cout<<"Length of roe and column should be equal.";
        exit(0);
    }

    cout << "\nInput the element of matrix: ";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>matrix[i][j];

    if (isMagicSquare(matrix, n, m))
        cout << "The matrix is Magic Square"; 
    else
        cout << "The matrix is Not a magic Square"; 
      
    return 0; 
}

int isMagicSquare(int matrix[50][50], int n, int m){  

    int sum1 = 0, sum2=0;

    //finding the sum of first diagonal
    for (int i = 0; i < n; i++) 
        sum1 = sum1 + matrix[i][i];

    
    for (int i = 0; i < n; i++) 
        sum2 = sum2 + matrix[i][n - 1 - i]; 
    
    
    if(sum1 != sum2)  
        return 0; 
  
    
    for (int i = 0; i < n; i++){ 
          
        int rowSum = 0;

        for (int j = 0; j < m; j++) 
            rowSum = rowSum + matrix[i][j]; 
          
        
        if (rowSum != sum1) 
            return 0; 
    } 
  
    
    for (int i = 0; i < n; i++){ 
          
        int columnSum = 0;  

        for (int j = 0; j < n; j++) 
            columnSum += matrix[j][i]; 
  
        
        if (columnSum != sum1)  
            return 0; 
    } 
  
    return true; 
}
