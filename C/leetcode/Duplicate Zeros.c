void duplicateZeros(int* arr, int arrSize){
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = arrSize - 2; j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }
            i++;
        }
    }
}
