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

   timef=a*poptime;
   cout<<"No new Entry allowed now : "<<endl;
   a=0;
   remaining=e.people_in_queue();
   cout<<remaining;
   if(remaining !=0)
   {
       
       while(remaining != 0)
       {
           e.shift();
           e.pop();
           a++;
           remaining= e.people_in_queue();
           e.display();
       }
     
   }
   timef+=a*poptime;
   cout<<"Total time required for the people to enter is : "<<timef<<endl;
   return 0 ;
}

