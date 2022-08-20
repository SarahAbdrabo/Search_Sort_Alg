/*Function to sort array in ascending order, given array of integers and their number.*/

void SelectionSort (int Arr[], int arrSize )
{
  /* pass the array n-2 times because first and last elements will fall in place. */
  for ( int i = 0; i < n-2; i++)
  {
    /* use a variable to define min element index */
    int min_index = i; 
    for (int j = i+1; j<n; j++)
    {
      if (Arr[j] < Arr[min_index] ) 
      {
        /*update min index then swap using a temp var*/
        min_index = j; 
      }
      int temp = Arr[i];
      Arr[i] = Arr[min_index];
      Arr[min_index] = temp;
    }
    
  }
}
