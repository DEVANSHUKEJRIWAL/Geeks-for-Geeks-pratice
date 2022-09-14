int peakElement(int arr[], int n)
{
   // Your code here
  int temp=0;
   for( int i=0;i<n-1;i++){
              if(arr[i+1]>=arr[i]){
                   temp=i+1;
               }else{
               break;
               }     
}
return temp;
}
