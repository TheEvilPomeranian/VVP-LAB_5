#include <iostream>
#include <math.h>
using namespace std;

int main(){
        setlocale(LC_ALL, "Rus");
cout << "Задача 1: Найдите расстояние между двумя точками с заданными координатами (x1;y1) и (x2;y2)" << endl;
        double x1, y1, x2, y2, Ras, Qx, Qy, Qxy;
        cout << "Введите x1 = "; cin >> x1;
        cout << "Введите y1 = "; cin >> y1;
        cout << "Введите x2 = "; cin >> x2;
        cout << "Введите y2 = "; cin >> y2;
        Qx = (x2 - x1) * (x2 - x1);
        Qy = (y2 - y1) * (y2 - y1);
        Qxy = Qx + Qy;
        Ras = sqrt(Qxy);
        cout << "Ответ: " << Ras << endl;

cout << "\nЗадача 2: Найти длины отрезков AC и BC и их сумму" << endl;
         double a1, a2, a3, AC, BC, Sum;
         cout << "Введите значение точки A на числовой прямой: "; cin >> a1;
         cout << "Введите значение точки B на числовой прямой: "; cin >> a2;
         cout << "Введите значение точки C на числовой прямой: "; cin >> a3;
         if (a1 > a3) {
             AC = a1 - a3;
         }
         else {
             AC = a3 - a1;
         }
         if (a2 > a3) {
             BC = a2 - a3;
         }
         else {
             BC = a3 - a2;
         }
         Sum = AC + BC;
         cout << "Длина отрезка AC = " << AC << endl;
         cout << "Длина отрезка BC = " << BC << endl;
         cout << "Сумма длин отрезков AC и BC = " << Sum << endl;

cout << "\nЗадача 3: Точка C расположена между точками A и B.Найти произведение длин отрезков AC и BC" << endl;
        double b1, b2, b3, AC1, BC1, Pr;        
            cout << "Введите значение точки A на числовой прямой с учетом условия задачи: "; cin >> b1;
            cout << "Введите значение точки B на числовой прямой с учетом условия задачи: "; cin >> b2;
            cout << "Введите значение точки C на числовой прямой с учетом условия задачи: "; cin >> b3;
            if (b3 > b1 && b3 < b2) {
                AC1 = b3 - b1;
                BC1 = b2 - b3;
                Pr = AC1 * BC1;
                cout << "Длина отрезка AC = " << AC1 << endl;
                cout << "Длина отрезка BC = " << BC1 << endl;
                cout << "Произведение длин отрезков AC и BC = " << Pr << endl;
            }
            else {
                cout << "Противоречит условию задачи." << endl;
            }
        
cout << "\nЗадача 4: Даны координаты двух противоположных вершин прямоугольника: (x1, y1), (x2, y2).Стороны прямоугольника параллельны осям координат." << endl;
        cout << "Найти периметр и площадь данного прямоугольника." << endl;
        double X1, Y1, X2, Y2, X3, Y3, X4, Y4, AB, AD, P, S;
        cout << "Введите координаты точки A (x1;y1)" << endl;
        cout << "Введите x1 = "; cin >> X1;
        cout << "Введите y1 = "; cin >> Y1;
        cout << "Введите координаты точки C (x2;y2)" << endl;
        cout << "Введите x2 = "; cin >> X2;
        cout << "Введите y2 = "; cin >> Y2;
        X3 = X2;
        Y3 = Y1;
        X4 = X1;
        Y4 = Y2;
        if (X2 < X1) {
            AB = X1 - X2;
        }
        else {
            AB = X2 - X1;
        }
        if (Y2 < Y1) {
            AD = Y1 - Y2;
        }
        else {
            AD = Y2 - Y1;
        }
        P = 2 * (AB + AD);
        S = AB * AD;
        cout << "Периметр прямоугольника ABCD: " << P << endl;
        cout << "Площадь прямоугольника ABCD: " << S << endl;

cout << "\nЗадача 5: Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь" << endl;
        double r1, r2, r3, t1, t2, t3, SS, PP, p, Qr21, Qt21, Qr32, Qt32, Qr13, Qt13, RasAB, RasBC, RasCA;
        cout << "Введите координаты точки A (x1;y1)" << endl;
        cout << "Введите x1 = "; cin >> r1;
        cout << "Введите y1 = "; cin >> t1;
        cout << "Введите координаты точки B (x2;y2)" << endl;
        cout << "Введите x2 = "; cin >> r2;
        cout << "Введите y2 = "; cin >> t2;
        cout << "Введите координаты точки C (x3;y3)" << endl;
        cout << "Введите x3 = "; cin >> r3;
        cout << "Введите y3 = "; cin >> t3;
        Qr21 = pow(r2 - r1, 2);
        Qt21 = pow(t2 - t1, 2);
        Qr32 = pow(r3 - r2, 2);
        Qt32 = pow(t3 - t2, 2);
        Qr13 = pow(r1 - r3, 2);
        Qt13 = pow(t1 - t3, 2);
        RasAB = sqrt(Qr21 + Qt21);
        RasBC = sqrt(Qr32 + Qt32);
        RasCA = sqrt(Qr13 + Qt13);
        PP = RasAB + RasBC + RasCA;
        p = PP / 2;
        SS = sqrt(p * (p - RasAB) * (p - RasBC) * (p - RasCA));
        cout << "Периметр треугольника: " << PP << endl;
        cout << "Площадь треугольника: " << SS << endl;
}
