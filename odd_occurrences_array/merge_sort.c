void merge(int *array, int start, int mid, int end)
    {
        int array_temp[end - start];
        int count = 0;
        int start_temp = start;
        int mid_temp = mid + 1;
        int i;

        while(start_temp <= mid && mid_temp <= end)
        {
            if(array[start_temp] < array[mid_temp])
            {
                array_temp[count] = array[start_temp];
                count++;
                start_temp++;
            }
            else if(array[start_temp] >= array[mid_temp])
            {
                array_temp[count] = array[mid_temp];
                count++;
                mid_temp++;
            }
        }

        if(start_temp <= mid)
        {
            while (start_temp <= mid)
            {
                array_temp[count] = array[start_temp];
                count++;
                start_temp++;
            }
        }
        else if (mid_temp <= end)
        {
            while (mid_temp <= end)
            {
                array_temp[count] = array[mid_temp];
                count++;
                mid_temp++;
            }
        }

        for(i = start; i <= end; i++)
        {
            array[i] = array_temp[i - start];
        }
    }

void merge_sort(int *array, int start, int end)
{
    if (start == end)
    {
        return;
    }

    int mid = (start + end) / 2;

    merge_sort(array, start, mid);
    merge_sort(array, mid + 1, end);

    merge(array, start, mid, end);
}