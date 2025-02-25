#pragma once

/* algebra.h и algebra.cpp - основательные файлы,
 * в которых соответственно объявляются и реализовываются функции
 * для работы с матрицами, векторами и т.д.
 * */


#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

/* *** Начальные функции для испорта/экспорта данных *** */

/* Функция импорта матрицы из текстового файла*/
template <typename T>
vector<vector<T>> importSLAU(const string& filename);

/* Функция импорта матрицы из текстового файла*/
template <typename T>
vector<vector<T>> importMatrix(const string& filename);

/* Функция вывода матрицы на экран */
template <typename T>
void print(const vector<vector<T>>& matrix);


/* Функция вывода вектора на экран */
template <typename T>
void print(const vector<T>& vec);


/* Функция вывода обрезанного вектора на экран */
template <typename T>
void print_short(const vector<T>& vec, const int& n);

/* Функция, которая красиво выводит вектор*/
template<typename T>
void print_vec(const vector<T>& vec);

/* Функция вывода разделительной линии на экран */
void printline(const int& n);

/* Функция для получения матрицы из СЛАУ */
template <typename T>
vector<vector<T>> SLAU_to_matrix(const vector<vector<T>>& SLAU);


/* Функция для получения векторая из СЛАУ */
template <typename T>
vector<T> SLAU_to_vec(const vector<vector<T>>& SLAU);


/* *** Функции математики векторов *** */

/* Операция cложения векторов */
template <typename T>
vector<T> operator+(const vector<T>& vec1, const  vector<T>& vec2);

/* Операция вычитания векторов */
template <typename T>
vector<T> operator-(const vector<T>& vec1, const vector<T>& vec2);

/* Операция почленного умножения векторов */
template <typename T>
vector<T> operator*(const vector<T>& vec1, const vector<T>& vec2);

/* Операция умножения вектора на число */
template <typename T>
vector<T> operator*(const T& c, const vector<T>& vec2);

template <typename T>
vector<T> operator*(const vector<T>& vec2, const T& c);



/* Операция почленного деления векторов */
template <typename T>
vector<T> operator/(const vector<T>& vec1, const vector<T>& vec2);

// Определение оператора отрицания для матрицы
template <typename T>
vector<vector<T>> operator-(const vector<vector<T>>& matrix);

/* Функция для скалярного умножения векторов */
template <typename T>
T dot(const vector<T>& vec1, const vector<T>& vec2);


/* Функция для нормы вектора */
template <typename T>
T norm(const vector<T>& vec, const int& p = 2);

/* Функция, возвращает вектор модулей */
template<typename T>
vector<T> vec_abs(const vector<T>& vec);



/* Функция, возращающая сумму элементов вектора */
template<typename T>
T sum(const vector<T>& vec);




/* *** Функции математики матриц *** */

/* Матричное умножение */
template <typename T>
vector<vector<T>> operator*(const vector<vector<T>>& A, const vector<vector<T>>& B);

/* Операция для умножения матрицы на число */
template <typename T>
vector<vector<T>> operator*(const vector<vector<T>>& A,  const T& scalar);

template <typename T>
vector<vector<T>> operator*(const T& scalar, const vector<vector<T>>& A);

template <typename T>
vector<vector<T>> operator*(const vector<vector<T>>& A,  const T& scalar);

/* Функция поэлементного сложения матриц */
template <typename T>
vector<vector<T>> operator+(const vector<vector<T>>& A, const vector<vector<T>>& B);


/* Функция поэлементного вычитания матриц */
template <typename T>
vector<vector<T>> operator-(const vector<vector<T>>& A, const vector<vector<T>>& B);


/* Функция для умножения матрицы на вектор */
template <typename T>
vector<T> operator*(const vector<vector<T>>& matrix, const vector<T>& vec);

/* Функция для транспонирования матрицы */
template <typename T>
vector<vector<T>> transpose(const vector<vector<T>>& A);


/* Функция для создания единичной матрицы размера n x n */
template <typename T>
vector<vector<T>> create_identity_matrix(const int& n);

template <typename T>
vector<vector<T>> E(const int& n);

/* Функция для поэлементного умножения матриц */
template <typename T>
vector<vector<T>> Multyply(const vector<vector<T>>& A, const vector<vector<T>>& B);


/* Функция округления чисел в матрицах */
template <typename T>
vector<vector<T>> Matrix_round(const vector<vector<T>>& A, const double& eps);


/* Функция для вычисления нормы матрицы */
template <typename T>
T norm(const vector<vector<T>>& matrix, const int& p = 2);


/* Функция для вычисления числа обусловленности матрицы c нормой 1*/
template <typename T>
T cond_1(const vector<vector<T>>& matrix);


/* Функция для вычисления числа обусловленности матрицы c нормой 2*/
template <typename T>
T cond_2(const vector<vector<T>>& matrix);


/* Функция для вычисления числа обусловленности матрицы c нормой oo*/
template <typename T>
T cond_oo(const vector<vector<T>>& matrix);


/* Функция поворота матрицы вправо */
template <typename T>
vector<vector<T>> RotateRight(const vector<vector<T>>& A);


/* Функция поворота матрицы влево */
template <typename T>
vector<vector<T>> RotateLeft(const vector<vector<T>>& A);


// Функция для обратной матрицы с проверкой на вырожденность c определенной точностью
template <typename T>
vector<vector<T>> inverseMatrix(const vector<vector<T>>& A, const T& eps);

// Функция для обратной матрицы с проверкой на вырожденность c определенной точностью
template <typename T>
vector<vector<T>> inverseMatrix(const vector<vector<T>>& A);

// Функция обрезки матрицы снизу и справа
template <typename T>
vector<vector<T>> crop_matrix(const vector<vector<T>>& A, const int& k);

/* Функция, вычисляющая определитель матрицы 4х4 */
template <typename T>
double det(const vector<vector<T>>& matrix);


/* Функция, сортирующая вектор */
template< typename T>
vector<T> sorted(const vector<T>& vec_not_sort);

/* Функция, возращающая максимальный элемент вектора */
template<typename T>
T vec_max(const vector<T>& vec);

/* Функция, возращающая det(A - lambda * E) */
template<typename T>
T test_eigen(const vector<vector<T>>& matrix, const vector<T>& lambda);

/* Функция, возращающая норму разницы решений */
template<typename T>
T testeps(const vector<T>& x, const vector<T>& true_x, const int p);

template<typename T>
T test_eigen_vec(const vector<vector<T>>& matrix, vector<vector<T>> eigen_vec, const vector<T>& lambda);

template<typename T>
T test_eigen_vec2(const vector<vector<T>>& matrix, vector<T> eigen_vec, const T lambda);

template<typename T>
T cos_vec(const vector<T> x1, const vector<T> x2);

template<typename T>
vector<vector<T>> uncrop(vector<vector<T>> A, vector<vector<T>>A1, int crop);
