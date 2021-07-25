#include <iostream>
using namespace std;

class employee
{
     int id;
     static int count;

public:
     void setData(void)
     {
          cout << "Enter the id " << endl;
          cin >> id;
          count++;
     }
     void getData()
     {
          cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
     }
     static void getCount(void)
     {
          cout << "the value of count is " << count << endl;
     };
};

int employee::count;

int main()
{
     employee chandan, shubham, ankit;
     chandan.setData();
     chandan.getData();
     employee::getCount();

     shubham.setData();
     shubham.getData();
     employee::getCount();

     ankit.setData();
     ankit.getData();
     employee::getCount();

     return 0;
}