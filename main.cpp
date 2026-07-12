#include <bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        int count=i;
        while(j<=i){
            std::cout<<" "<<count<<" ";
            j+=1;
            count+=1;
        }
        std::cout<<std::endl;
        i+=1;
    }

} 
