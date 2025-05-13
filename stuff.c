#include <stdio.h>
void function(int nums[5]) {
	for (int i = 0; i < 5; i++) {
		printf("%d\n", nums[i]);
	}
}

int main() { 
	int nums[5] = {10, 20, 30, 40, 50};
	function(nums);
	
	int new_nums [5] = {2, 4, 8, 10, 12};
	function(new_nums); 

	//allegedly, the function can work with any array (as long as it's the correct size), regardless of the fact that 
	//it was initially defined with nums as opposed to new_nums. skeptical but let's see. 

	return 0;
}
