#include "Sort.h"

int main() {
    Sort s(5, 1, 10);
    s.Print();
    s.InsertSort(false);

    s.Print();
	return 0;
}