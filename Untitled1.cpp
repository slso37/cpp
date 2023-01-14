#include<bits/stdc++.h>
using namespace std;

bool check(int n){
     for ( int i=0; i<=sqrt(n); ++i){
         if ( n%i==0){
            sum++;
         }
     }
     if (sum==0){
     return true;
     } else {
      return false;       
     }
}

int main(){
    
    int table,count;
    int rows[100],columns[100];
    int numbers[100];
    cin>>table;
    for ( int i=1; i<=table; ++i){
        cin>>rows[i]>>columns[i];
    }
    for ( int i=0; i<=columns; ++i){
        for ( int i=0; i<=rows; ++i){
            cin>>numbers[i];
        }
    }
    for ( int i=0; i<=columns; ++i){
        for ( int i=0; i<=rows; ++i){
            if (check(numbers[i])==true){
               count++;
               }
        }
    }
    for ( int i=0; i<=columns; ++i){
        for ( int i=0; i<=rows; ++i){
            if ( count>=2){
                cout<<numbers[i]
            }
        }
    }
    
    system("pause");
    return 0;
}
