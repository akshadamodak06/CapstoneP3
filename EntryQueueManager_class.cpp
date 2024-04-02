void RandomAssignment()
    {
        int vacancy=population/2;
        while(vacancy!=0)
        {
            int gate_no=rand() % gates;
            int entries = rand() % (vacancy +1);
            vacancy = vacancy - entries;
            arr_of_size[gate_no] += entries;
        }
    }
