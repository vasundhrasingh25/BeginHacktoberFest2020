#include <string>
using namespace std;
std::string DNAStrand(std::string dna)
{
  //your code here
  for(int i=0; i<dna.length(); i++)
    {
      switch(dna[i]){
        case 'A': dna[i]='T'; break;
        case 'C': dna[i]='G'; break;
        case 'T': dna[i]='A'; break;
        case 'G': dna[i]='C'; break;
          }
    }
  return dna;
}