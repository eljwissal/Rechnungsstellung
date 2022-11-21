#include <iostream>

using namespace std;

 main()
{
const double MWST_SATZ = 19.6 ; //declaration d une constante.
double ht, ttc, net ,tauxr, remise ;//declaration des variables.
  cout<<"Exo ist in der Beschreibung!\n\n";
  cout <<"geben Sie den Preis ohne Steuern an : " ;
  cin >> ht ;
  ttc = ht * (1.+MWST_SATZ/100) ;
  if ( ttc < 1000.) tauxr = 0 ;
  else if ( ttc < 2000 ) tauxr = 1. ;
  else if ( ttc < 5000 ) tauxr = 3. ;
  else tauxr = 5. ;
  remise = ttc * tauxr / 100. ;
  net = ttc = remise ;
  cout << "Preis inkl. MwSt. = " << ttc << "\n";
  cout << "Rabatt = " << remise << "\n";
  cout << "Nettozahler = " << net << "\n\n";
  cout<<"Vielen Dank! für Ihren Besuch!\n\n";
  main () ;
  return 0;
}

