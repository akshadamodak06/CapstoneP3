void InsertNew( int arr_of_size[] , int gates )
    {
        cout << "Enter the no. of people entering: " ;
        int people ;
        cin >> people ;
        int index_of_min = 0 , i , min = arr_of_size[0] ;
        // min is the no. of people in queue containing the least amount of people
        //index_of_min is the queue no. of said queue
        while( people != 0 )
        {
            min =  arr_of_size[0] ;
            for(i = 0 ; i < gates ; i++ )
            {
                if( arr_of_size[i] < min )
                {
                    min = arr_of_size[i] ;
                    index_of_min = i ;
                }
            }
            arr_of_size[index_of_min]++ ;
            people-- ;
        }
    }
