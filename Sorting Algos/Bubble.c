void bubbleSort(int arr[], int n)
{
    int i = 0;
    while(i<n-1)
    {
        if(arr[i]>arr[i+1])
        {
            swap(&arr[i],&arr[i+1]);
        }
        i++;
    }
}
