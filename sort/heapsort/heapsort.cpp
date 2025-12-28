#include<iostream>

using namespace std;

void heapify(int a[],int n,int i){
    int largest = i;
    int l = 2*i+1;
    int r = l+1;
    if(l< n && a[l]>a[largest])
    largest = l;
    if(r<n && a[r]>a[largest])
    largest = r;

    if(largest != i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);

    }

}
void heapsort(int a[],int n){
    int i;
    for (i=n/2-1;i>=0;i--){
        heapify(a,n,i);

    }
    for (i=n-1;i>0;i--){
        swap(a[i],a[0]);
        heapify(a,i,0);
        
    }

    }

int main(){
    int a[] = {55,2,3,5,4232,43,21,232,1};
    int n = sizeof(a)/sizeof(a[0]);

    heapsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}