#include <iostream>
using namespace std;

int arr[4] = {1, 2, 3, 4};

class timeCombination
{
public:
     void Combination(void)
     {
          for (int i = 0; i <= 3; i++)
          {
               /* code */
               for (int j = 0; j <= 3; j++)
               {
                    /* code */
                    if (j == i)
                    {
                         cout << "";
                    }
                    else
                    {
                         int a = arr[i];
                         int b = arr[j];
                         Combination(a, b);
                    }
               }
          }
     };

     void Combination(int para1, int para2)
     {
          int k, l;
          for (k = 0; k <= 3; k++)
          {
               /* code */
               for (l = 0; l <= 3; l++)
               {
                    /* code */
                    if (k == l)
                    {
                         cout << "";
                    }
                    else
                    {
                         if (para1 <= 2 && para2 <= 3 && arr[k] <= 5 && arr[l] <= 9 && para1 != arr[k] && para1 != arr[l] && para2 != arr[k] && para2 != arr[l])
                         {
                              cout << para1 << para2 << " : " << arr[k] << arr[l] << endl;
                         }
                    }
               }
          }
     };
      
};

int main()
{
     timeCombination time;
     time.Combination();
     return 0;
}