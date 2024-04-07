#include <iostream>
#include <random>
using namespace std;
class EntryQueueManager
{

private:
    int Gates;
    int VipGates;
    int population;
    int Vip_population;
    int *arr_of_gates;
    int *arr_of_vip;
    int poptime;

public:
    EntryQueueManager(int pop, int gates_1, int vip_gates, int vip_pop)
    {
        Vip_population = vip_pop;
        Gates = gates_1;
        population = pop;
        VipGates = vip_gates;
        arr_of_gates = new int[Gates];
        arr_of_vip = new int[VipGates];
        int j = 0;
        for (int i = 0; i < Gates, j < VipGates; ++i, ++j)
        {
            arr_of_gates[i] = 0;
            arr_of_vip[j] = 0;
        }
    }

    void RandomAssignment_initial()
    {
        random_device rd;
        // rd act as a seed for the below algorithm mt19937
        mt19937 gen(rd());
        // generates number uniformly in the range of 0 to Gates-1
        uniform_int_distribution<int> gate(0, Gates - 1);

        int initialPeople = population / 2;

        for (int i = 0; i < initialPeople; ++i)
        {
            int gateNumber = gate(gen);
            arr_of_gates[gateNumber]++;
        }
    }

    void RandomAssignmentVip_initial()
    {
        random_device rd;
        // rd act as a seed for the below algorithm mt19937
        mt19937 gen(rd());
        // generates number uniformly in the range of 0 to VipGates-1
        uniform_int_distribution<int> gateVip(0, VipGates - 1);

        int initialPeople = Vip_population / 2;

        for (int i = 0; i < initialPeople; ++i)
        {
            int gateNumber = gateVip(gen);
            arr_of_vip[gateNumber]++;
        }
    }

    int RandomAssignment(int Remaining)
    {
        random_device rd;
        // rd act as a seed for the below algorithm mt19937
        mt19937 gen(rd());
        // generates number uniformly in the range of 0 to Remaining
        // Remaining is the number of people which have not yet reached stadium
        uniform_int_distribution<int> gate(0, Remaining);
        return gate(gen);
    }
    int RandomAssignmentVip(int RemainingV)
    {
        random_device rd;
        // rd act as a seed for the below algorithm mt19937
        mt19937 gen(rd());
        // generates number uniformly in the range of 0 to Remaining
        // Remaining is the number of people which have not yet reached stadium
        uniform_int_distribution<int> gateVip(0, RemainingV);
        return gateVip(gen);
    }

    void display()
    {
        for (int counter = 0; counter < Gates; counter++)
        {
            cout << "The number of members in Gate " << counter + 1 << " is : " << arr_of_gates[counter] << endl;
        }

        for (int counter = 0; counter < VipGates; counter++)
        {
            cout << "The number of members in VIPGate " << counter + 1 << " is : " << arr_of_vip[counter] << endl;
        }
    }

    int InsertNew(int people, int group_t)
    {
        int index_of_min = 0;
        int counter;
        int min = arr_of_gates[0];
        // min is the no. of people in queue containing the least amount of people
        // index_of_min is the queue no. of said queue
        while (people != 0)
        {
            min = arr_of_gates[0];
            for (counter = 0; counter < Gates; counter++)
            {
                if (arr_of_gates[counter] <= min)
                {
                    min = arr_of_gates[counter];
                    index_of_min = counter;
                }
            }
            if (group_t == 0)
            {
                arr_of_gates[index_of_min]++;
                people--;
            }
            else
            {
                arr_of_gates[index_of_min] += group_t;
                people--;
            }
        }
        //  cout << "It will take " << poptime * arr_of_gates[index_of_min]/60<< " mins from your current position to reach stadium ." << endl;
        return index_of_min + 1;
    }

    int InsertNewVip(int peopleVip, int groupVip_t)
    {
        int index_of_min = 0;
        int counter;
        int min = arr_of_vip[0];
        // min is the no. of people in queue containing the least amount of people
        // index_of_min is the queue no. of said queue
        while (peopleVip != 0)
        {
            min = arr_of_vip[0];
            for (counter = 0; counter < VipGates; counter++)
            {
                if (arr_of_vip[counter] <= min)
                {
                    min = arr_of_vip[counter];
                    index_of_min = counter;
                }
            }
            if (groupVip_t == 0)
            {
                arr_of_vip[index_of_min]++;
                peopleVip--;
            }
            else
            {
                arr_of_vip[index_of_min] += groupVip_t;
                peopleVip--;
            }
        }
        // cout << "It will take " << poptime * (arr_of_vip[index_of_min] ) /60<< " mins from your current position to reach stadium ." << endl;
        return index_of_min + 1;
    }
