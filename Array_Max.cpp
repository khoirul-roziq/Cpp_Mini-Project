#include <iostream>
using namespace std;

int main() {

    int n=5;
    int bil[n];
    int max;

    for(int i=0;i<n;i++) {

        cin>>bil[i];
        if(i==0) {
            max = bil[i];
        } else if(bil[i] > max) {
            max = bil[i];
        }

    }

    cout<<max;
}
