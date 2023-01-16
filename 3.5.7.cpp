#include <iostream>

using namespace std;

int del(int a, int b);
int proverka();
int kolvkam(int a, int b);

int main()
{
    setlocale(LC_ALL, "Russian");
    int lin1 = 3, lin2 = 5, lin3 = 7, n =1, vzal=1;
    cout << "первая линия: " << lin1 << endl << "вторая линия: " << lin2<< endl << "третия линия: " << lin3 << endl;

    
    while ((lin1 > 0) && (lin2 > 0) && (lin3 > 0))
    {


        cout << "введите номер линии " << endl;
        n = proverka();

        cout << "сколько камней убрать" << endl;
        vzal = proverka();
        if (n == 1) {
            vzal = kolvkam(lin1, vzal);
            lin1 = del(lin1, vzal);
        }

        else if (n == 2){
            vzal = kolvkam(lin2, vzal);
            lin2 = del(lin2, vzal);
        }

        else {
            vzal = kolvkam(lin2, vzal);
            lin3 = del(lin3, vzal);
        }


        cout << "первая линия: " << lin1 << endl << "вторая линия: " << lin2 << endl << "третия линия: " << lin3 << endl;


    }

    cout << "geme over" << endl;

    return 0;

}


int del(int a, int b) {
    a = a - b;
    return a;
}


int proverka() {
    int n;
    cin >> n;
    if ((n > 3) || (n < 0)) {
        while ((n != 1) && (n != 2) && (n != 3))
        {
            cout << "недопустимое значение" << endl;
            cin >> n;
        }
    }
    return n;
}

int kolvkam(int a, int b) {
    if (a < b)
        while (a - b < 0) {
            cout << "в линии недостаточно камней" << endl;
            cin >> b;
        }
    return b;
}
