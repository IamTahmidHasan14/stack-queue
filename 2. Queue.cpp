#include <iostream>
using namespace std;
int tahmid_q[10], n = 10, f = -1, r = -1;
void Enqueue()
{
    int x;
    if (r == n-1)
        cout<<"QUEUE FULL !!"<<endl;
    else{
        if (f == -1)
        f = 0;
        cout << "Insert an element: ";
        cin >> x;
        r++;
        tahmid_q[r] = x;
    }
}
void Dequeue()
{
   if (f == -1 || f>r){
      cout<<"QUEUE EMPTY !!";
      return ;
   }
   else{
      cout<<"Element removed from queue: "<< tahmid_q[f] <<endl;
      f++;;
   }
}
void Display()
{
    if (f == -1)
        cout<<"QUEUE EMPTY !!"<<endl;
    else{
        cout<<"\nQueue elements are: ";
        for (int i = f; i <= r; i++)
        cout << tahmid_q[i]<<"  ";
        cout << endl << endl;
    }
}
int main()
{
    int choice;
    cout << "<--Menu-->\n";
    cout << " 1. Enqueue\n";
    cout << " 2. Dequeue\n";
    cout << " 3. Display\n";
    cout << " 4. Exit\n";
    do{
        cout << "Enter your Choice(1-4): ";
        cin >> choice;
        switch (choice){
            case 1: Enqueue(); break;
            case 2: Dequeue(); break;
            case 3: Display(); break;
            case 4: cout << "EXIT " << endl; break;
            default: cout << "Invalid choice" << endl;
        }
    }
    while(choice!=4);
    return 0;
}
