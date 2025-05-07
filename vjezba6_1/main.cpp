#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Upotreba: " << argv[0] << " ulazna.txt izlazna.txt" << std::endl;
        return 1;
    }

    std::ifstream ulaz(argv[1]);
    if (!ulaz.is_open()) {
        std::cerr << "Ne mogu otvoriti ulaznu datoteku!" << std::endl;
        return 1;
    }

    std::ofstream izlaz(argv[2]);
    if (!izlaz.is_open()) {
        std::cerr << "Ne mogu otvoriti izlaznu datoteku!" << std::endl;
        return 1;
    }

    std::string retci[20];
    int brojRedaka = 0;

    while (std::getline(ulaz, retci[brojRedaka]) && brojRedaka < 20) {
        brojRedaka++;
    }

    for (int i = 0; i < brojRedaka; ++i) {
        izlaz << retci[i] << std::endl;
        izlaz << retci[i] << std::endl;
    }

    std::cout << "Završeno. " << brojRedaka << " redaka zapisano po 2 puta u " << argv[2] << std::endl;

    return 0;
}
