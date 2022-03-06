#include "Compare.h"

int compName(Students A, Students B) {
    if (A.getName() > B.getName()) {
        return 1;
    } else if (A.getName() < B.getName()) {
        return -1;
    } else {
        return 0;
    }
}

int compMath(Students A, Students B) {
    if (A.getMath() > B.getMath()) {
        return 1;
    } else if (A.getMath() < B.getMath()) {
        return -1;
    } else {
        return 0;
    }
}

int compEng(Students A, Students B) {
    if (A.getEnglish() > B.getEnglish()) {
        return 1;
    } else if (A.getEnglish() > B.getEnglish()) {
        return -1;
    } else {
        return 0;
    }
}

int compHist(Students A, Students B) {
    if (A.getHistory() > B.getHistory()) {
        return 1;
    } else if (A.getHistory() > B.getHistory()) {
        return -1;
    } else {
        return 0;
    }
}

int compAverage(Students A, Students B) {
    if (A.getAverage() > B.getAverage()) {
        return 1;
    } else if (A.getAverage() > B.getAverage()) {
        return -1;
    } else {
        return 0;
    }
}
