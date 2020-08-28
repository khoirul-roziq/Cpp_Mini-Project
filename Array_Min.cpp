#include <iostream>
using namespace std;

int main() {

    int n=5;
    int bil[n];
    int min;

    for(int i=0;i<n;i++) {

        cin>>bil[i];
        if(i==0) {
            min = bil[i];
        } else if(bil[i] < min) {
            min = bil[i];
        }

    }

    cout<<min;
}
