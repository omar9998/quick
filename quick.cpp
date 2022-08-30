//quick sort

static int partit(std::vector<int> &arr, int startIndex, int endIndex) {
    int pivotIndex = (startIndex + endIndex) / 2;
    int pivotValue = arr[pivotIndex];

    while (true) {
        
        while (arr[startIndex] < pivotValue) {
            startIndex++;
        }

        \
        while (arr[endIndex] > pivotValue) {
            endIndex--;
        }

        if (startIndex >= endIndex) {
            return endIndex;
        }

        
        int temp = arr[startIndex];
        arr[startIndex] = arr[endIndex];
        arr[endIndex] = temp;
    }
}

void quickSort(std::vector<int> &arr, int startIndex, int endIndex) {
    
    if (startIndex < endIndex) {
      
        int pivotIndex = partition(arr, startIndex, endIndex);
        
        quickSort(arr, startIndex, pivotIndex);
      
        quickSort(arr, pivotIndex + 1, endIndex);
    }
}
