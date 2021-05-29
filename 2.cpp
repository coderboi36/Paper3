
void rotatee(int arr[], int n)
{
int temp = arr[0], i;
for (i = 0; i < n - 1; i++)
arr[i] = arr[i + 1];
arr[i] = temp;
}

void array_left_rotate(int arr[], int no_of_rotations, int n)
{
for (int i = 0; i < no_of_rotations; i++)
rotatee(arr, n);  
}

int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6};
int n = sizeof(arr) / sizeof(arr[0]);   
cout<<"\nBefore rotating : \n";
for(int i = 0; i < n; i++)
{
cout<<arr[i]<<" ";    
}
int no_of_rotations = 2;  
array_left_rotate(arr, no_of_rotations, n);
cout<<"\n\nAfter rotating : \n";
for(int i = 0; i < n; i++)
{
cout<<arr[i]<<" ";   
} 
cout<<"\n";
return 0;
}
