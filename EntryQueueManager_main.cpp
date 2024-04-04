#include "EntryQueueManager_class.cpp"
int main()
{
   int capacity, gates,poptime;
   cout << "Enter the capacity of your stadium: ";
   cin >> capacity;
   cout << "Enter the no of gates to be used for entering the people in the stadium: ";
   cin >> gates;
   cout<<"Enter the time required for the pop in mins : ";
   cin>>poptime;
   int max_time = 60/poptime;
   EntryQueueManager e(capacity, gates);
   e.RandomAssignment();
   e.display();
   int remaining=capacity/2;
   int timef;
   int a=0;

   cout<<"-----------------------------------"<<endl;
   cout<<"The members in each queue after shift are "<<endl;
   e.display();
   cout<<"---------------------------------";
   cout<<"The members in each queue after popping"<<endl;
   e.pop();
   e.display();
   cout<<"------------------------"<<endl;
   e.InsertNew();
   e.display();
}

