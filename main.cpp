#include <iostream>
#include <string>

int main()
{
  // Visi naudojami elementai
  std::string   vardas,
                pirma,
                antra,
                trecia = "* ";
  // Paklausimas ir ivedimas
  std::cout << "Iveskite varda:\n";
  std::cin >> vardas;
  // Programa reaguoja i vardo lyti (pagal lietuviu kalba)
  trecia += (*vardas.rbegin() == 's') ? "Sveikas, " : "Sveika, ";
  trecia += vardas + "! *";
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
  // Isvedimas
  std::cout << pirma << antra << trecia << antra << pirma;
  return 0;
}
