#pragma once
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

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



