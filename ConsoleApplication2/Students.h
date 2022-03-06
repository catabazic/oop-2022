#pragma once

class Students {
  private:
    char name[100];
    int math;
    int english;
    int history;
    int average;

  public:
    void init();
    void setName(const char * nume);
    void setMath(int math);
    void setEnglish(int english);
    void setHistory(int history);
    void setAverage();

    const char* getName() const;
    int getMath() const;
    int getEnglish() const;
    int getHistory() const;
    int getAverage() const;

};