#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Task {
public:
    string description;
    bool completed;

    Task(string desc, bool comp = false) {
        description = desc;
        completed = comp;
    }
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void loadFromFile() {
        ifstream file("tasks.txt");
        if (!file) return;

        string desc;
        bool comp;

        while (getline(file, desc)) {
            file >> comp;
            file.ignore();
            tasks.push_back(Task(desc, comp));
        }
        file.close();
    }

    void saveToFile() {
        ofstream file("tasks.txt");
        for (auto &task : tasks) {
            file << task.description << endl;
            file << task.completed << endl;
        }
        file.close();
    }

    void addTask(string desc) {
        tasks.push_back(Task(desc));
        cout << "Task added!\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks available.\n";
            return;
        }

        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". "
                 << (tasks[i].completed ? "[✔] " : "[ ] ")
                 << tasks[i].description << endl;
        }
    }

    void deleteTask(int index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number.\n";
            return;
        }
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task deleted.\n";
    }

    void markCompleted(int index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number.\n";
            return;
        }
        tasks[index - 1].completed = true;
        cout << "Task marked as completed.\n";
    }
};

int main() {
    TodoList todo;
    todo.loadFromFile();

    int choice;
    string desc;

    do {
        cout << "\n--- TO-DO LIST ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Mark Task Completed\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter task: ";
            getline(cin, desc);
            todo.addTask(desc);
            break;

        case 2:
            todo.viewTasks();
            break;

        case 3:
            int delIndex;
            cout << "Enter task number to delete: ";
            cin >> delIndex;
            todo.deleteTask(delIndex);
            break;

        case 4:
            int compIndex;
            cout << "Enter task number to mark completed: ";
            cin >> compIndex;
            todo.markCompleted(compIndex);
            break;

        case 5:
            todo.saveToFile();
            cout << "Tasks saved. Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
