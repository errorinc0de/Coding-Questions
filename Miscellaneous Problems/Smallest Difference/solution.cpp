#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  vector<int> res(2);
	int sizeArrayOne = arrayOne.size(), sizeArrayTwo = arrayTwo.size();
	int firstPtr = 0, secondPtr = 0, absDiff, minAbsDiff = INT_MAX;
	sort(arrayOne.begin(), arrayOne.begin() + sizeArrayOne);
	sort(arrayTwo.begin(), arrayTwo.begin() + sizeArrayTwo);
	while(firstPtr != sizeArrayOne && secondPtr != sizeArrayTwo) {
		absDiff = abs(arrayOne[firstPtr] - arrayTwo[secondPtr]);
		if (absDiff == 0)
			return { arrayOne[firstPtr], arrayTwo[secondPtr] };
		else {
			if (minAbsDiff > absDiff) {
				minAbsDiff = absDiff;
				res = { arrayOne[firstPtr], arrayTwo[secondPtr] };
			}
			arrayOne[firstPtr] > arrayTwo[secondPtr] ? secondPtr++ : firstPtr++;
		}
	}
  return res;
}
