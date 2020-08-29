#include <iostream>
using namespace std;

int main() {

    int n = 10;
    int bil[n];
    int m1,m2;

    for(int i=0;i<n;i++) {

        cin>>bil[i];

        if(i==0) {

            m1 = bil[i];

        } else if(i==1) {

            if(m1<bil[i]) {
                m1=bil[i];
                m2=bil[i-1];
            } else {
                m2=bil[i];
            }

        } else if(bil[i]>m1 && bil[i]>m2) {

            m2=m1;
            m1=bil[i];

        } else if(bil[i]>m2 && bil[i]<m1) {

            m2=bil[i];

        }
    }

    cout<<"max1 = "<<m1;
    cout<<"\nmax2 = "<<m2;
}
