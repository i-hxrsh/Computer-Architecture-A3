#include <iostream>
#include <bits/stdc++.h>
#include <time.h>
using namespace std;

unsigned int A[512][512];
unsigned int B[512][512];
long double C[512][512];

int main(){
    
    srand(10);
    int n=512;
    
    for(int j=0; j<n; j++){
        for(int i=0;i<n;i++){
            A[i][j]=rand();
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            B[i][j]=rand();
        }
    }

    auto begin = std::chrono::high_resolution_clock::now();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                int ans=A[i][k]*B[k][j];
                C[i][j]+=ans;
            }
            
        }
    }
    cout<<n<<endl;
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    // End 
    
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);
 
    return 0;
}