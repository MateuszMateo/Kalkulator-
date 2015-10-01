#include <iostream>
#include<cstring>


using namespace std;

int main()
{
 int  a, b, wynik;
 char dzialanie;

  cout << "Aby, wybrac dodawanie wpisz +" <<endl;
  cout << "Aby wybrac odejmowanie wpisz -" <<endl;
  cout << "Aby wybrac mnozenie wpisz *" <<endl;
  cout << "Aby wybrac dzielenie calkowitoliczbowe wpisz /" <<endl;
  cin >> dzialanie;

  if (dzialanie == '+'){

      cout << "wybrales dodawanie" << endl;
      cout << "wpisz liczby ktore chcesz dodac do siebie aby otrzymac wynik" << endl;
      cin >> a >> b;
      wynik = b + a;
      cout << wynik << endl;
  }

     else if (dzialanie == '-'){

          cout << "wybrales odejmowanie"<<endl;
          cout << "wpisz liczby ktore chcesz odjac od siebie aby otrzymac wynik" << endl;
          cin >> a >> b;
          wynik = b - a;
          cout << wynik << endl;
      }

      else if (dzialanie == '*'){

          cout << "wybrales mnozenie"<<endl;
          cout << "wpisz liczby ktore chcesz pomnozyc aby otrzymac wynik" << endl;
          cin >> a >> b;
          wynik = b * a;
          cout << wynik << endl;
      }

      else if (dzialanie == '/'){

          cout << "wybrales dzielenie calkowitoliczbowe"<<endl;
          cout << "wpisz liczby ktore chcesz podzielic aby otrzymac wynik" << endl;
          cin >> a >> b;
          wynik = b / a;
          cout << wynik << endl;
      }


}

