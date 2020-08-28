#include <iostream>
using namespace std;

int main() {

    int n=5;
    int bil[n];
    float sum = 0;

    for(int i=0;i<n;i++) {
    
        cin>>bil[i];
        sum += bil[i];
        
    }

    cout<<sum;
}
