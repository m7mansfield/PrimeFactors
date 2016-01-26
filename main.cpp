#include <iostream>

int main() {
  for(int n = 2; n <= 50; n++) {
    int num = n;
	std::cout << n << " = ";
    for (int i =2 ; i <= num; i++) {
		while(num % i == 0)  {
			num /= i;
			std::cout << i << " ";
		}
    }
    std::cout << std::endl;
  }
  return 0;
}
