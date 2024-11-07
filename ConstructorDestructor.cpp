/*Create a class that keeps track of the number of its instances. Use a static data member, constructors, and destructors to maintain updated information about active objects.*/ 
#include <iostream>
using namespace std;

class InstanceTracker {
public:
    static int count;

    InstanceTracker() {
        count++;
    }

    ~InstanceTracker() {
        count--;
    }

    static void showCount() {
        cout << "Active instances: " << count << endl;
    }
};

int InstanceTracker::count = 0;

int main() {
    InstanceTracker::showCount();

    InstanceTracker obj1;
    InstanceTracker::showCount();

    {
        InstanceTracker obj2, obj3;
        InstanceTracker::showCount();
    }

    InstanceTracker::showCount();

    return 0;
}
