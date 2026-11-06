#include <iostream>
using namespace std;

int main() {
    int estado[10];
    int n, ativos = 0, inativos = 0;
    float percentual;

    cout << "Quantidade de dispositivos (1 a 10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Quantidade invalida!";
    } else {
        for (int i = 0; i < n; i++) {
            cout << "Dispositivo " << i + 1 << " (1 = ativo / 0 = inativo): ";
            cin >> estado[i];

            while (estado[i] != 0 && estado[i] != 1) {
                cout << "Valor invalido. Digite 0 ou 1: ";
                cin >> estado[i];
            }
        }

        cout << endl << "--- ESTADOS DOS DISPOSITIVOS ---" << endl;

        for (int i = 0; i < n; i++) {
            cout << "Dispositivo " << i + 1 << ": ";

            if (estado[i] == 1) {
                cout << "Ativo" << endl;
                ativos++;
            } else {
                cout << "Inativo" << endl;
                inativos++;
            }
        }

        percentual = (ativos * 100.0) / n;

        cout << endl << "--- RESULTADO FINAL ---" << endl;
        cout << "Dispositivos ativos: " << ativos << endl;
        cout << "Dispositivos inativos: " << inativos << endl;
        cout << "Disponibilidade: " << percentual << "%" << endl;

        if (inativos >= 2) {
            cout << "ALERTA: Existem dois ou mais dispositivos inativos!" << endl;
        } else {
            cout << "Rede funcionando normalmente!" << endl;
        }
    }

    return 0;
}
