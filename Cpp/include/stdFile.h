#pragma once
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <utility>
#include <sstream>

using namespace std;

void Exel_Output(string file_path,ios_base::openmode my_mode,float buff[],int len,string discription);
void Txt_Output(string file_path, ios_base::openmode my_mode, double buff[], int len);
void Txt_Output(string file_path, ios_base::openmode my_mode, double buff[], int len, string extraString);
void Txt_Output(string file_path, ios_base::openmode my_mode, float buff[], int len);
string Txt_Input(string file_path);
void Txt_Input(string file_path, string *buff, int len);
void Txt_Input(string file_path, double *buff, int len);
streampos get_file_size(string file_path);
bool file_exists(string file_path);
bool delete_file(const string file_path);
void file_create(string file_path, ios_base::openmode my_mode);

/* 可变参数代码函数 */
// 基础函数：将单个参数转换为字符串
template <typename T>
std::string csvFormat(const T& value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

// 特化处理字符串类型（防止字符串含逗号破坏CSV结构）
template <>
inline std::string csvFormat<std::string>(const std::string& value) {
    // 如果字符串包含逗号或换行符，添加双引号转义
    if (value.find(',') != std::string::npos || value.find('\n') != std::string::npos) {
        return "\"" + value + "\"";
    }
    return value;
}

// 特化处理浮点数类型（附加精度控制）
template<>
inline std::string csvFormat<double>(const double& value) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(6) << value; // 保留6位小数
    return oss.str();
}

// 递归终止条件（处理最后一个参数）
template <typename T>
void writeCSVLineImpl(std::ostringstream& oss, T&& lastArg) {
    oss << csvFormat(std::forward<T>(lastArg)) << "\n";
}

// 递归展开参数包
template <typename T, typename... Args>
void writeCSVLineImpl(std::ostringstream& oss, T&& firstArg, Args&&... restArgs) {
    oss << csvFormat(std::forward<T>(firstArg)) << ",";
    writeCSVLineImpl(oss, std::forward<Args>(restArgs)...);
}

// 主函数：将可变参数写入CSV行
template <typename... Args>
void writeCSVLine(std::ofstream& file, Args&&... args) {
    std::ostringstream lineStream;
    writeCSVLineImpl(lineStream, std::forward<Args>(args)...);
    file << lineStream.str();
}
