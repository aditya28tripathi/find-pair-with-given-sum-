bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    int i=0;
    int j= i+1;
    while(j<size){
        int diff=arr[j]-arr[i];
        if(diff==n)
        {
            return true;
            break;
        }
        else if(diff<n)
        {
            j++;
        }
        else 
        {
            i++;
        j=i+1;
        }
        
    }
    return false;
    

}
