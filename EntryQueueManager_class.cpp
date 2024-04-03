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

   void RandomAssignment()
   {
       random_device rd;
       mt19937 gen(rd());
       uniform_int_distribution<int> gateDist(0, gates - 1);


       int initialPeople = population / 2;


       for (int i = 0; i < initialPeople; ++i)
       {
           int gateNumber = gateDist(gen);
           arr_of_size[gateNumber]++;
       }
   }

   void display()
   {
       for (int counter = 0; counter < gates; counter++)
       {
           cout << "The number of members in Queue " << counter + 1 << " is : " << arr_of_size[counter] << endl;
       }
   }


   void InsertNew()
   {
       cout << "Enter the no. of people entering: ";
       int people;
       cin >> people;
       int index_of_min = 0, i, min = arr_of_size[0];
       // min is the no. of people in queue containing the least amount of people
       // index_of_min is the queue no. of said queue
       while (people != 0)
       {
           min = arr_of_size[0];
           for (i = 0; i < gates; i++)
           {
               if (arr_of_size[i] <= min)
               {
                   min = arr_of_size[i];
                   index_of_min = i;
               }
           }
           arr_of_size[index_of_min]++;
           people--;


       }
   }


void shift()
   {
       for (int i = 0; i < gates; i++)
       {
           int min = 1000000;
           int a = -1;
           for (int j = 0; j < gates; j++)
           {
                   if (min >= arr_of_size[j])
                   {
                       a = j;
                       min = arr_of_size[j];
                   }
           }
           if (a != -1 && min < arr_of_size[i])
           {
               (arr_of_size[a])++;
               (arr_of_size[i])--;
           }
       }
   }
   void pop()
   {
       for(int i=0; i<gates; i++)
       {
           (arr_of_size[i])--;
       }
   }
};
