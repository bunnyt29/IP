//#include <iostream>
//
//// Връща true ако сред първите n елемента (arr[0..n-1])
//// има подмножество със сума точно target.
//bool hasSubsetSum(const unsigned arr[], int n, int target) {
//    // дъно: търсим сума 0 -> винаги може (вземаме празно подмножество)
//    if (target == 0) return true;
//
//    // дъно: няма елементи, но target != 0 -> няма как
//    if (n == 0) return false;
//
//    // ако текущият елемент е по-голям от target, няма смисъл да го взимаме
//    if ((int)arr[n - 1] > target) {
//        return hasSubsetSum(arr, n - 1, target);
//    }
//
//    // избор: не го взимаме ИЛИ го взимаме
//    return hasSubsetSum(arr, n - 1, target) ||
//        hasSubsetSum(arr, n - 1, target - (int)arr[n - 1]);
//}
//
//int main() {
//    unsigned arr[] = { 1, 4, 7, 9 };
//    int n = 4;
//    int target = 13;
//
//    std::cout << (hasSubsetSum(arr, n, target) ? "Yes" : "No") << std::endl;
//}
