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
	void DeleteTask(){
		todolist.pop_back(Task);
	}

};

int main() {

TodoList todo;

	//Choosing the task
	
	bool isRunning = true;
	
	while (isRunning = true){
	
		int chosenFunction = 0;
	
		std::cout << "Welcome!" << std::endl;
		std::cout << "Choose a function to get started:" << std::endl;
		std::cout << "1. Add task(s)" << std::endl;
		std::cout << "2. See all tasks" << std::endl;
		std::cout << "3. Edit task" << std::endl;
		std::cout << "4. Delete task" << std::endl;
		std::cout << "5. Mark task as done" << std::endl;
		std::cout << "6. Exit list" << std::endl;
		std::cout << "*Please enter the number of the function, you'd like to use:" << std::endl;
		
		std::cin >> chosenFunction;
		
		
		
		//Add task
		else if (chosenFunction == 1){
			std::cout<< "What task would you like to add?, write 'done' when you are finished"<<std::endl;

			while (true) {
				std::cout << " - ";
				std::string input;
				std::getline (std::cin, input);
			
				if (input == "done") {
				break;
			
				}
				todo.AddTask(input);
			}
			continue;
		}
		
		//See all tasks
		else if (chosenFunction == 2){
			if (todo.empty()){
				std::cout << "No tasks currently available\nPlease input new tasks" << std::endl;
				chosenFunction = 0;
			}
			else if (!TodoList.empty()){
				int sizeOfList = TodoList.size();
				for (int i = 0; i < sizeOfList; ++i){
					std::cout << "- " << TodoList[i] << std::endl;
				}
				std::cout << "Write 'done' to return to functions" << std::endl;
				std::string input = "";
				std::cin >> input;
				if (input == "done"){
					continue;
				}
			}
		}
			
		//Edit task
		else if (chosenFunction == 3){
			//Edit task
			continue;
		}
			
		//Delete task
		else if (chosenFunction == 4){
			std::cout<< "What task(s) would you like to delete? \nWrite 'done' when you are finished"<<std::endl;
			for (int i = 0; i < todo.size(); i++){
				std::cout << i + 1 << ": " << todo[i] << std::endl;
			}

			while (true) {
				for 
				std::cout << " - ";
				std::getline (std::cin, input);
			
				if (input == "done") {
				break;
			
				}
				todo.DeleteTask(input-1);
			continue;
			}
		}
		
		//Mark task as done
		else if (chosenFunction == 5){
			//Mark as done
			continue;
		}
		
		//Exit the loop
		else if (chosenFunction == 6){
			std::cout << "Goodbye!" << std::endl;
			isRunning = false;
		}
		
		//Other input has been given to choose task
		else {
			std::cout << "Please type one of the valid numbers" << std::endl;
			continue;
		}
	}
    return 0;
}






