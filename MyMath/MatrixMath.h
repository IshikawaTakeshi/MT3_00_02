﻿#include "Vector2.h"
#include "Matrix4x4.h"
#include <assert.h>
#define _USE_MATH_DEFINES
#include <math.h>

///////////////////////////////////////////////////////////////////////////////
//	4x4行列
///////////////////////////////////////////////////////////////////////////////[

//行列の加法
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);

//行列の減法
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);

//行列の積
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

//逆行列
Matrix4x4 Inverse(const Matrix4x4& m);

//転置行列
Matrix4x4 Transpose(const Matrix4x4& m);

//単位行列の作成
Matrix4x4 MakeIdentity4x4();

//数値表示
void MatirxScreenPrintf(int x, int y, const Matrix4x4& matrix,const char* label);