void display(int arr_of_size[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Queue "<<i+1<<" : "<< arr_of_size[i]<<endl;
    }
}
void shift(int arr_of_size[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=1000000;
        int a=-1;
        int k=arr_of_size[i];
        for(int j=0;j<n;j++)
        {
            if(j==i)
            {
                j++;
            }
            else
            {
                if(min > arr_of_size[j])
                {
                    a=j;
                    min=arr_of_size[j];
                }
            }
           
        }
        if(a != -1 && min<arr_of_size[i])
        {
            (arr_of_size[a])++;1
            (arr_of_size[i])--;
        }
       
    }


    cout<<"After Shift : "<<endl;
   
    for(int i=0;i<n;i++)
    {
        cout<<arr_of_size[i]<<endl;
    }
}
