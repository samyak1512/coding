#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of processes\n";
  cin >> n;
  int a[n];
  int temp[n];
  cout << "Enter the burst time of the processes\n";
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    temp[i] = a[i];
  }
  int quantum;
  cout << "Enter the quantum time\n";
  cin >> quantum;
  int wt[n];
  int t = 0;
  while (1)
  {
    bool comp = true;
    for (int i = 0 ; i < n; i++)
    {
      if (temp[i] > 0)
      {
        comp = false;
        if (temp[i] > quantum)
        {
          t += quantum;
          temp[i] -= quantum;
        }
        else
        {
          t = t + temp[i];
          wt[i] = t - a[i];
          temp[i] = 0;
        }
      }
    }
    if (comp)
    {
      break;
    }
  }
  float turn = 0;
  cout << "Waiting times are\n";
  float wait = 0;
  for (int i = 0; i < n; i++)
  {
    cout << wt[i] << " ";
    wait += float(wt[i]);
    turn += (float(wt[i]) + float(a[i]));
  }
  cout << endl;
  cout << "Turnaround times are\n";
  for (int i = 0; i < n; i++)
  {
    cout << wt[i] + a[i] << " ";
  }
  cout << endl;
  cout << "Average waiting time is " << wait / n << " s" << endl;
  cout << "Average turnaround time is " << turn / n << " s" << endl;
  return 0;
}


int main(){
  
}