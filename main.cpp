#include <iostream>

struct remelis
{
  // Visi naudojami elementai
  std::string   vardas,
                pirma,
                antra,
                trecia = "* ";
  int kiek;
  // Paklausimas ir ivedimas
  void ivedimas()
  {
    // Vardo pareikalavimas ir jo teisingumo tikrinimas
    std::cout << "Iveskite varda (angliska abecele):\n";
    bool tinka;
    do
    {
        tinka = false;
        std::cin >> vardas;
        for (char e : vardas)
        {
            if ((e > 'a' && e < 'z') || (e > 'A' && e < 'Z') || e == 'a' || e == 'A' || e == 'z' || e == 'Z');
            else 
            {
                tinka = true;
                break;
            }
        }
    } while (tinka);
    // Programa reaguoja i vardo lyti (pagal paskutine raide)
    trecia += (*vardas.rbegin() == 's') ? "Sveikas, " : "Sveika, ";
    trecia += vardas + "! *";
    // Klausia ir tikrina eiluciu skaiciu
    std::cout << "Kiek turi buti eiluciu remelyje? (nelyginis skaicius, didesnis arba lygus 3)\n";
    while (true)
    {
        std::cin >> kiek;
        if (kiek % 2 == 0 || kiek < 3);
        else break;
    }
    // Palei kiekviena trecios eilutes simboli prisikiriu atitinkamus pirmai ir antrai
    for (char e : trecia)
    {
        pirma += "*";
        if (e == '*')
        {
          antra += "*";
        }
        else
        {
          antra += " ";
        }
    }
    // Pridedu eilutes galo simbolius (\n) prie kiekvienos eilutes. Del grazumo...
    pirma += "\n";
    antra += "\n";
    trecia += "\n";
  }
  // Isvedimas
  void isvedimas()
  {
    int N = (kiek - 3) / 2;
    std::cout << pirma;
    for (int i = 0; i < N; i++)
    {
        std::cout << antra;
    }
    std::cout << trecia;
    for (int i = 0; i < N; i++)
    {
        std::cout << antra;
    }
    std::cout << pirma;
  }
};

int main()
{
  remelis A;
  A.ivedimas();
  A.isvedimas();
  return 0;
}
