#include<iostream>

using namespace std;

int main()
{
    double n;
    cin>>n;
    double hitung=0;
    double sum=0;
    for(int i=1;i<=n;i++){
        hitung+=i;
    }
    double rata=hitung/n;
    for(int i=1;i<=n;i++){
        sum+=(i-rata)*(i-rata);
    }
    
    double hasil=sum/(n-1);
    
    
    cout<<hasil;
    
    return 0;
}
