#include    <iostream>
using namespace std;

int main()
{
   int N, M, N2;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;
   N2 = N;
   for (size_t i = 0; i < M; i++)
   {
      if (i == 0)
      {
         cout << 1 << ", " << N;
      }
      else
      {
         cout << ", ";
         N2 *= N;
         cout << N2;
      }
   }
   
  
}
