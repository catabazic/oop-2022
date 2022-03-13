#include "Canvas.h"
#include <iostream>

Canvas::Canvas(int width, int height) {
    this->width  = width;
    this->height = height;
    Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
    for (int i = 0; i < x+ray; i++) {
        for (int j = 0; j < y+ray; j++) {
            int a  = i - (x + ray) / 2;
            int b   = j - (y + ray) / 2;
            int sum = a * a + b * b;
            int r   = ray * ray;
            if (((r - ray+1) < sum) && ((r + ray-1) > sum)){
                SetPoint(i,j, ch);
            }
        }
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    for (int i = 0; i < x + ray; i++) {
        for (int j = 0; j < y + ray; j++) {
            int a  = i - (x + ray) / 2;
            int b   = j - (y + ray) / 2;
            int sum = a * a + b * b;
            int r   = ray * ray;
            if (((r - ray) < sum*sum*sum*sum) && ((r + ray) > sum)) {
                SetPoint(i,j, ch);
            }
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            if (i >= left && i <= right && j == top ) {
                SetPoint(j, i, ch);
            }
            if (i >= left && i <= right && j == bottom) {
                SetPoint(j, i, ch);
            }
            if (i == left && j >= top && j <= bottom) {
                SetPoint(j, i, ch);
            }
            if (i == right && j >= top && j <= bottom) {
                SetPoint(j, i, ch);
            }
        }
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            if (i > left && i < right && j > top && j < bottom) {
                SetPoint(j, i, ch);
            }
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch) {
    mat[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            if (i >= x1 && i <= x2 && j >= y1 && j <= y2) {
                SetPoint(j,j,ch);
            }
        }
    }

}

void Canvas::Print() {
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            std::cout << mat[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

void Canvas::Clear() {
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            this->mat[i][j] = ' ';
        }
    }
}
