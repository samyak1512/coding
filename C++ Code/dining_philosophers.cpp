#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

using namespace std;

const int num_philosophers = 5;

mutex forks[num_philosophers];

void philosopher(int id) {
    int left_fork = id;
    int right_fork = (id + 1) % num_philosophers;

    while (true) {
        // Think for a while
        cout << "Philosopher " << id << " is thinking" << endl;
        this_thread::sleep_for(chrono::milliseconds(500));

        // Pick up forks
        forks[left_fork].lock();
        forks[right_fork].lock();
        cout << "Philosopher " << id << " is eating" << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));

        // Put down forks
        forks[right_fork].unlock();
        forks[left_fork].unlock();
    }
}

int main() {
    vector<thread> philosophers;
    for (int i = 0; i < num_philosophers; i++) {
        philosophers.push_back(thread(philosopher, i));
    }

    for (auto& p : philosophers) {
        p.join();
    }

    return 0;
}