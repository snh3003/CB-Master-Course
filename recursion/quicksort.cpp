#include<iostream>
using namespace std;

int partition ( int A[],int start ,int end) {
    int i = start + 1;
    int piv = A[start] ;            //make the first element as pivot element.
    for(int j =start + 1; j <= end ; j++ )  {
    /*rearrange the array by putting elements which are less than pivot
       on one side and which are greater that on other. */

          if ( A[ j ] < piv) {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ;  //put the pivot element in its proper place.
   return i-1;                      //return the position of the pivot
}

void quickSort(int *arr, int start, int end){

    // base case
    if(start>=end){
        return ;
    }
    // recursive case
    int p = partition(arr, start, end);
    // left part
    quickSort(arr, start, p-1);
    // right part
    quickSort(arr, p+1, end);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);
    //print the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}