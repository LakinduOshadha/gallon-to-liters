// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

int main()
{
    // Initializing variables
    int n; //n-number of occurrences
    float gal,lit; //gal=gallon, lit= liters

    // Getting user input
    cout<<"Enter the number of occurrences : "; cin>>n;

    //calculating
    for(int i=0; i<n ;i++) {
        cout<<"\nEnter volume in Gallons : "; cin>>gal;
        lit = gal*3.785;
        cout<<"The volume in liters : "<<lit<<endl;
    }
    return 0;
}
