#include <iostream>

using namespace std;

int main()
{
   

    for (int i = 1; i <= 10; i++)
    {
        cout << "ile wynosi wynik dzialania " << i << "*" << i << endl;

        int wynik = i * i;
        cin >> wynik;
   
        if (wynik == i*i)
    
            cout << "poprawna odpowiedz" << endl;
        
        else 
            cout << "zla odpowiedz, poprawna odpowiedz to " << i*i << endl;
            
    }
    return 0;
}