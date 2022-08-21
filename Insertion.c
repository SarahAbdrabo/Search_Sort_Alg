/* insertion sort with two temp variables for int array in ascedning order. */


void Insertion_sort (int Arr[], int ArrSize  ) 
{
  for (int i = 1; i < ArrSize; i++)                  //i cant start at 0 since we use i-1
  {
    /*temp values for storing var and its index till the insertion happens.*/
    int temp_val = Arr[i];
    int temp_i   = i;
    
    /*conditon is that the value we're at is smaller than the one before it. 
    using temp instead of i to not modify the incrementer variable i. */
    while ( (temp_i > 0) && (Arr[(temp_i - 1)] > temp_val) )
    {
      Arr[temp_i] = Arr[(temp_i - 1)];
      temp_i = (temp_i - 1);
    }
    /* last step is to save the value in correct place, since we saved the index.*/
    Arr[temp_i] = temp_value;
    
    //question is why not write taht in the while loop? 
  }
}
