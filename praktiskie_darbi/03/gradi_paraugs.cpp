#include <iostream>
using namespace std;

int main()
{
    double h, m, s;

    cout << "Ievadiet laiku (h m s): " << endl;
    cin >> h >> m >> s;

    double gradi_sekunde = 360.0 / (3600*12); // 360.0 savādāk dalīšānas rezultāts ir 0
    double laiks_sekundes = h*60*60 + m*60 + s;

    cout << "Lenkis ir: " << laiks_sekundes * gradi_sekunde << endl;

    // system ("pause");
    return 0;
}
