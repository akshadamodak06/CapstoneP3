#include <iostream>
#include <cstdlib>
using namespace std;

class EntryQueueManager
{
private:
    int gates;
    int population;
    int *arr_of_size;

public:
    EntryQueueManager(int p, int g)
    {
        gates = g;
        population = p;
        arr_of_size = new int[gates];
        for (int i = 0; i < gates; ++i)
            arr_of_size[i] = 0;
    }

    void display()
    {
        for (int counter = 0; counter < gates; counter++)
        {
            cout << "The number of members in Queue " << counter + 1 << " is : " << arr_of_size[counter] << endl;
        }
    }
};
