#include <stdio.h>
void function(int nums[5]) {
	for (int i = 0; i < 5; i++) {
		printf("%d\n", nums[i]);
	}
}

int main() { 
	int nums[5] = {10, 20, 30, 40, 50};
	function(nums);
	return 0;
}
