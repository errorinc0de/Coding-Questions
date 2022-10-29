using namespace std;

bool isMonotonic(vector<int> array) {
  if (array.size() <= 1) 
    return true;
  int currEle = array.front();
  int hasIncreased = 0;
  for (int i=1; i<array.size(); i++) {
    if (hasIncreased == 1) {
      if(array[i] >= currEle) {
        currEle = array[i];
      } else return false;
    } else if (hasIncreased == 2) {
      if(array[i] <= currEle) {
        currEle = array[i];
      } else return false;
    } else {
      if (currEle == array[i]) {
        continue;
      } else if (currEle > array[i]) {
        hasIncreased = 2;
      } else hasIncreased = 1;
    }
  }
  return true;
}
