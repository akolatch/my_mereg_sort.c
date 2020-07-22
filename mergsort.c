//this function sorts a given array (arr[]) into accending order
//int l = the left most placment in the array you want to start sorrting (ie arr[l...])
//int r = the right most placment in the array you want to start sorrting (ie arr[...r])
//to search the whole array l = 0 and r = the length of array - 1
//there is a sub function merge_a that must be included.

void mergesort_a(int arr[], int l, int r)
{
    void merge_a(int arr[], int l, int m, int r);
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergesort_a(arr, l, m);
        mergesort_a(arr, m + 1, r);
        merge_a(arr, l, m, r);
    }
}
//this is a sub function for mergesort_a that performes the merging function of merge sort 

void merge_a(int arr[], int l, int m, int r)
{
    int lp, rp, i, temp[r + 1];
    lp = l, rp = m + 1;
    for (i = 0; lp <= m && rp <= r; i++)
    {
        if (arr[lp] < arr[rp])
        {
            temp[i] = arr[lp];
            lp++;
        }
        else
        {
            temp[i] = arr[rp];
            rp++;
        }
    }
    if (lp > m)
    {
        for (; rp <= r; i++)
        {
            temp[i] = arr[rp];
            rp++;
        }
    }
    else
    {
        for (; lp <= m; i++)
        {
            temp[i] = arr[lp];
            lp++;
        }
    }
    for (int j = l, k = 0; j <= r; j++, k++)
    {
        arr[j] = temp[k];
    }
}

//this function sorts a given array (arr[]) into deccending order
//int l = the left most placment in the array you want to start sorrting (ie arr[l...])
//int r = the right most placment in the array you want to start sorrting (ie arr[...r])
//to search the whole array l = 0 and r = the length of array - 1
//there is a sub function merge_a that must be included.
void mergesort_d(int arr[], int l, int r)
{
    void merge_d(int arr[], int l, int m, int r);
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergesort_d(arr, l, m);
        mergesort_d(arr, m + 1, r);
        merge_d(arr, l, m, r);
    }
}
//this is a sub function for mergesort_d that performes the merging function of merge sort 
void merge_d(int arr[], int l, int m, int r)
{
    int lp, rp, i, temp[r + 1];
    lp = l, rp = m + 1;
    for (i = 0; lp <= m && rp <= r; i++)
    {
        if (arr[lp] > arr[rp])
        {
            temp[i] = arr[lp];
            lp++;
        }
        else
        {
            temp[i] = arr[rp];
            rp++;
        }
    }
    if (lp > m)
    {
        for (; rp <= r; i++)
        {
            temp[i] = arr[rp];
            rp++;
        }
    }
    else
    {
        for (; lp <= m; i++)
        {
            temp[i] = arr[lp];
            lp++;
        }
    }
    for (int j = l, k = 0; j <= r; j++, k++)
    {
        arr[j] = temp[k];
    }
}

