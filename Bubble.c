/* function that sorts int array assending order */

/*
this includes:
1. bubble sort without improvements.
2. bubble sort with improvement to prevennt repeated passes on the sorted area.
3. bubble sort with time complixity improvement for the best cases.
*/

void Bubble_1 (int Arr[], int ArrSize)
{
  for (int k = 0; k < n-1; k++)               //number of passes on array.
  {
    for (int i = 0; i< n-2; i++)              //number of bubbles of 1 element.
    {
      if (Arr[i] > Arr[i+1])
      {
        //swap with a temp
        int temp = Arr[i];
        Arr[i] = Arr[i+1];
        Arr[i+1] = temp;
      }
    }
   }
}


void Bubble_2 (int Arr[], int ArrSize)
{
  for (int k = 0; k < n-1; k++)                //number of passes on array.
  {
    for (int i = 0; i< n-k-1; i++)             //number of bubbles of 1 element improved to stop at end of un sorted part
    {
      if (Arr[i] > Arr[i+1])
      {
        //swap with a temp
        int temp = Arr[i];
        Arr[i] = Arr[i+1];
        Arr[i+1] = temp;
      }
    }
   }
}


void Bubble_3 (int Arr[], int ArrSize)
{
  int flag = 0;                                //flag for swaps checking, if no swaps, break out of doing more passes.
  for (int k = 0; k < n-1; k++)                //number of passes on array.
  {
    for (int i = 0; i< n-k-1; i++)             //number of bubbles of 1 element improved to stop at end of un sorted part
    {
      if (Arr[i] > Arr[i+1])
      {
        //swap with a temp
        int temp = Arr[i];
        Arr[i] = Arr[i+1];
        Arr[i+1] = temp;
        flag = 1;
      }
    }
    if (flag == 0)
    {
      break;
    }
   }
}
