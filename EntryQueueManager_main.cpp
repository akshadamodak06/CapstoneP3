int main()
{
   int capacity, gates;
   cout << "Enter the capacity of your stadium: ";
   cin >> capacity;
   cout << "Enter the no of gates to be used for entering the people in the stadium: ";
   cin >> gates;
   EntryQueueManager e(capacity, gates);
   e.RandomAssignment();
   e.display();
   e.shift();
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

