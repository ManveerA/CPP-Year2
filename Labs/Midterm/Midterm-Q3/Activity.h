#pragma once
class Activity {
public:
	Activity(Account account, int deposit) {
		Account account1 = account;
		int depositAmount = deposit;
	}
	void validate(int deposit) {
		if (deposit <= 0) {
			std::cout << "The deposit amount was invalid" << std::endl;
		}
	}


};