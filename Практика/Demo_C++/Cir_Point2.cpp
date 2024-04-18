#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//Этот код входит в лекции курса "Технологии Программирования"

struct Point
{
    double x;
    double y;

    double DistToPoint(Point p)
    {
        double d = sqrt((p.x - x)*(p.x - x)+(p.y - y)*(p.y - y));
        return d;
    }
};

int main()
{
	vector<Point> v1;
    Point p1, p2;
	v1.push_back(p1);
	v1.push_back(p2);

    cout << "–Ґ­ва ®Єаг¦­®бвЁ" << endl;
    cin >> p1.x;
    cin >> p1.y;
    cout << "’®зЄ  ­  ¤гЈҐ" << endl;
    cin >> p2.x;
    cin >> p2.y;
    double S = p1.DistToPoint(p2)*p1.DistToPoint(p2)*3.14;
    cout << "Џ«®й ¤м ®Єаг¦­®бвЁ " << S << endl;
    return 0;
}

