#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int bil[n];
    int max[3];

    for(int i=0;i<n;i++){
        cin>>bil[i];

        if(i==0) {
            max[i] = bil[i];
        } else if(i==1) {
            if(bil[i] > max[0]) {
                max[0] = bil[i];
                max[i] = bil[0];
            } else {
                max[i] = bil[i];
            }
        } else if(i==2) {
            if(bil[i] > max[0] && bil[i] > max[1]) {
                max[2] = max[1];
                max[1] = max[0];
                max[0] = bil[i];
            } else if(bil[i] > max[1] && bil[i] < max[0]) {
                max[2] = max[1];
                max[1] = bil[i];
            } else {
                max[2] = bil[i];
            }
        } else {
            if(bil[i] > max[0]) {
                max[2] = max[1];
                max[1] = max[0];
                max[0] = bil[i];
            } else if(bil[i] > max[1] && bil[i] < max[0]) {
                max[2] = max[1];
                max[1] = bil[i];
            } else if(bil[i] > max[2] && bil[i] < max[1]) {
                max[2] = bil[i];
            }
        }
    }

    cout<<"Max1 = "<<max[0];
    cout<<"\nMax2 = "<<max[1];
    cout<<"\nMax3 = "<<max[2];
}
