//https://www.codewars.com/kata/5544c7a5cb454edb3c000047/train/cpp


using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window) {
        if (h <= 0 || bounce <= 0 || bounce >= 1 || window >= h) {
            return -1;
        }
        int count = 0;
        while (h > window) {
            h *= bounce;
            count += 2;
        }
        return count - 1;
    }
};