#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Task
{
	public:
	std::string _description;
	Task(std::string description){
		_description = description;
	}
};

class TodoList{
	
public:
	std::vector<Task> todolist;
	void AddTask(const std::string & description){
		todolist.push_back(Task(description));
        	//todolist.emblace_back(description);
	}

};

int main() {

TodoList todo;
std:: string input;

std::cout<< "What task would you like to add?, write done when you are finished"<<std::endl;

	
	while (true) {
		std::cout << " - ";
		std::getline (std::cin, input);
	
		if (input=="done") {
		break;
	
		}
		todo.AddTask(input);
	}

    return 0;
}






