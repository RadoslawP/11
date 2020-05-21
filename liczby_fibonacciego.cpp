#include <iostream>
#include <iomanip>

using namespace std;

long double fib[100000]; int n;

int main()
{
    cout << "Ile liczb Fibonacciego mam wyznaczyc?" << endl;
    cin>>n;

    fib[0]=1;
    fib[1]=1;

    for(int i=2; i<n; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    cout<<setprecision(100000);

    //wypisanie kolejnych wyrazow ciagu Fibonacciego
    //for (int i=0; i<n; i++)
    //{
      //  cout<<endl<<"wyraz nr "<<i+1<<" : "<<fib[i];
    //}

    //wypisanie ostatniego wyrazu ciagu Fibonacciego
    //cout<<endl<<"wyraz nr "<<n<<" : "<<fib[n-1];

    //zlota liczba 23601
    cout<<"zlota liczba: "<<fib[n-1]/fib[n-2];

    return 0;
}
