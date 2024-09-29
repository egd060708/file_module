#include "../include/stdFile.h"

/**
 * @brief exel write file float
 * @param file_path file file_path
 * @param my_mode file stream mode
 * @param buff write content
 * @param len element num
 * @param discription data discription
 */
void Exel_Output(string file_path, ios_base::openmode my_mode, float buff[], int len, string discription)
{
    ofstream outfile(file_path, my_mode);
    if (!outfile)
    {
        cerr << "open error!" << endl;
        exit(1);
    }
    // cout << file_path << " ok" << endl;
    outfile << discription << "\t"; // 建立表头描述
    for (int i = 0; i < len; i++)
    {
        outfile << buff[i] << "\t"; // 把数组所有数据写在这一行
    }
    outfile << "\n"; // 指针指到下一行
    outfile.close();
}

/**
 * @brief txt write file double
 * @param file_path file file_path
 * @param my_mode file stream mode
 * @param buff write content
 * @param len element num
 */
void Txt_Output(string file_path, ios_base::openmode my_mode, double buff[], int len)
{
    ofstream outfile(file_path, my_mode);
    if (!outfile)
    {
        cerr << "Unable to open file " + file_path << endl;
        exit(1);
    }
    // cout << file_path << " ok" << endl;
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            outfile << buff[i];
        }
        else
        {
            outfile << buff[i] << ","; // 把数组所有数据写在这一行
        }
    }
    outfile << "\n"; // 指针指到下一行
    outfile.close();
}

/**
 * @brief txt write file double
 * @param file_path file file_path
 * @param my_mode file stream mode
 * @param buff write content
 * @param len element num
 * @param extraString string in tail
 */
void Txt_Output(string file_path, ios_base::openmode my_mode, double buff[], int len, string extraString)
{
    ofstream outfile(file_path, my_mode);
    if (!outfile)
    {
        cerr << "Unable to open file " + file_path << endl;
        exit(1);
    }
    // cout << file_path << " ok" << endl;
    for (int i = 0; i < len; i++)
    {
        outfile << buff[i] << ",";
    }
    outfile << extraString;
    outfile << "\n"; // 指针指到下一行
    outfile.close();
}

/**
 * @brief txt write file float
 * @param neme file file_path
 * @param my_mode file stream mode
 * @param buff write content
 * @param len element num
 */
void Txt_Output(string file_path, ios_base::openmode my_mode, float buff[], int len)
{
    ofstream outfile(file_path, my_mode);
    if (!outfile)
    {
        cerr << "Unable to open file " + file_path << endl;
        exit(1);
    }
    // cout << file_path << " ok" << endl;
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            outfile << buff[i];
        }
        else
        {
            outfile << buff[i] << ","; // 把数组所有数据写在这一行
        }
    }
    outfile << "\n"; // 指针指到下一行
    outfile.close();
}

/**
 * @brief txt read file return string
 * @param file_path file file_path
 */
string Txt_Input(string file_path)
{
    ifstream inputFile(file_path);
    // 检查文件是否成功打开
    if (!inputFile)
    {
        cerr << "Unable to open file " + file_path << endl;
        return string("error");
    }
    string line;
    string out;
    // 逐行读取文件内容并输出到控制台
    while (getline(inputFile, line))
    {
        out += line;
    }
    // 关闭文件
    inputFile.close();

    return out;
}

/**
 * @brief txt read file string
 * @param file_path file file_path
 * @param buff destination input buff
 * @param len element num
 */
void Txt_Input(string file_path, string *buff, int len)
{
    ifstream inputFile(file_path);
    // 检查文件是否成功打开
    if (!inputFile)
    {
        cerr << "Unable to open file " + file_path << endl;
    }
    string line;
    int count = 0;
    // 逐行读取文件内容并输出到控制台
    while (getline(inputFile, line))
    {
        // 检查并去除末尾的换行符
        if (!line.empty() && line[line.length() - 1] == '\n')
        {
            line.erase(line.length() - 1);
        }
        buff[count] = line;
        if ((++count) >= len)
        {
            break;
        }
    }
    // 关闭文件
    inputFile.close();
}

/**
 * @brief txt read file double
 * @param file_path file file_path
 * @param buff destination input buff
 * @param len element num
 */
void Txt_Input(string file_path, double *buff, int len)
{
    ifstream inputFile(file_path);
    // 检查文件是否成功打开
    if (!inputFile)
    {
        cerr << "Unable to open file " + file_path << endl;
    }
    string line;
    int count = 0;
    // 逐行读取文件内容并输出到控制台
    while (getline(inputFile, line))
    {
        // 检查并去除末尾的换行符
        if (!line.empty() && line[line.length() - 1] == '\n')
        {
            line.erase(line.length() - 1);
        }
        buff[count] = stod(line);
        if ((++count) >= len)
        {
            break;
        }
    }
    // 关闭文件
    inputFile.close();
}

/**
 * @brief get file size
 * @param file_path file path
 */
streampos get_file_size(string file_path)
{
    ifstream file(file_path, ios::binary | ios::ate);
    if (!file.is_open())
    {
        cerr << "Failed to open file: " << file_path << endl;
        return -1;
    }

    streampos file_size = file.tellg(); // 获取文件的大小
    file.close();
    return file_size;
}

/**
 * @brief check file exist
 * @param file_path file path
 */
bool file_exists(string file_path)
{
    ifstream file(file_path);
    return file.is_open();
}

/**
 * @brief delete file
 * @param file_path file path
 */
bool delete_file(const string file_path)
{
    if (remove(file_path.c_str()) != 0)
    {
        cerr << "Error deleting file: " << file_path << endl;
        return false;
    }
    else
    {
        cout << "File successfully deleted: " << file_path << endl;
        return true;
    }
}

/**
 * @brief create file
 * @param file_path file path
 * @param my_mode file stream mode
 */
void file_create(string file_path, ios_base::openmode my_mode)
{
    ofstream outfile(file_path, my_mode);
    if (!outfile)
    {
        cerr << "open error!" << endl;
        exit(1);
    }
    // cout << file_path << " ok" << endl;
    outfile.close();
}