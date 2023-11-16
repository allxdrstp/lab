#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include "windows.h"
struct Matrix {
    int** data_ = nullptr;
    size_t n_ = 0u;
    size_t m_ = 0u;
};
void print(const Matrix& at) {
    for (int i = 0; i < at.n_; ++i) {
        for (int j = 0; j < at.m_; ++j) {
            cout << at.data_[i][j] << " ";
        }
        cout << endl;
    }
}

void Construct(Matrix& out, size_t n, size_t m) {
    out.n_ = n;
    out.m_ = m;
    srand(time(NULL));
    out.data_ = new int* [n];
    for (size_t i = 0; i < n; ++i) {
        out.data_[i] = new int[m];
    }
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            out.data_[i][j] = rand() % 100;
        }
    }
}
void Destruct(Matrix& in) {
    for (size_t i = 0; i < in.n_; ++i) {
        delete[]in.data_[i];
    }
    delete[]in.data_;
}

Matrix copy(const Matrix& matrix) {
    Matrix mt_cp;
    Construct(mt_cp, matrix.n_, matrix.m_);

    for (size_t i = 0; i < matrix.n_; ++i) {
        for (size_t j = 0; j < matrix.m_; ++j) {
            mt_cp.data_[i][j] = matrix.data_[i][j];
        }
    }
    return mt_cp;
}
Matrix add(const Matrix& a, const Matrix& b) {
    Matrix summa;
    Construct(summa, a.n_, a.m_);
    if (a.n_ == b.n_ and a.m_ == b.m_) {
        for (int i = 0; i < a.n_; ++i) {
            for (int j = 0; j < a.m_; ++j) {
                summa.data_[i][j] = a.data_[i][j] + b.data_[i][j];
            }
        }
        return summa;
    }
    else {
        Matrix empty;
        return empty;
    }
}
Matrix sub(const Matrix& a, const Matrix& b) {
    Matrix raz;
    Construct(raz, a.n_, a.m_);
    if (a.n_ == b.n_ and a.m_ == b.m_) {
        for (int i = 0; i < a.n_; ++i) {
            for (int j = 0; j < a.m_; ++j) {
                raz.data_[i][j] = a.data_[i][j] - b.data_[i][j];
            }
        }
        return raz;
    }
    else {
        Matrix empty;
        return empty;
    }
}
Matrix proizv(const Matrix& a, const Matrix& b) {
    Matrix pr;
    Construct(pr, a.n_, a.m_);
    for (int i = 0; i < a.n_; ++i) {
        for (int j = 0; j < a.m_; ++j) {
            for (int k = 0; k < a.m_; ++k) {
                pr.data_[i][j] += a.data_[k][j] * b.data_[i][k];
            }
        }
    }
    return pr;
}

Matrix Transposition(Matrix& matrix) {
    Matrix tr;
    Construct(tr, matrix.n_, matrix.m_);
    for (int i = 0; i < matrix.n_; ++i) {
        for (int j = 0; j < matrix.n_; ++j) {
            tr.data_[i][j] = matrix.data_[j][i];
        }
    }
    return tr;
}


int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    cin >> a >> b;
    Matrix swag;
    Matrix orkhan;
    Construct(swag, a, b);
    print(swag);
    cout << endl;
    Sleep(1000);
    Construct(orkhan, a, b);
    print(orkhan);
    cout << endl;
    print(add(swag, orkhan));
    cout << endl;
    print(sub(swag, orkhan));
    cout << endl;
    print(Transposition(swag));
    cout << endl;
    print(proizv(swag, orkhan));
}