#include <iostream>
#include <string>
#include "Regex.h"

using namespace std;

string getInt() {
    return R"(\b\d+\b)"; // ֳ� �����
}

string getFloat() {
    return R"(\b\d*\.\d+([eE][-+]?\d+)?\b)"; // ����� � ��������� �����
}

string getHexNumbers() {
    return R"(0x[0-9A-Fa-f]+)"; // س����������� �����
}

string getBinaryNumbers() {
    return R"(0b[01]+)"; // ������ �����
}

string getString() {
    return R"("((\\")|[^"])*")"; // �����
}

string getChar() {
    return R"('([^'\\]|\\.)')"; // �������
}

string getBoolean() {
    return R"(\b(true|false)\b)"; // ����� ��������
}

string getMultilineComments() {
    return R"(\/\*[\s\S]*?\*\/)"; // ����������� ��������
}

string getSingleLineComment() {
    return R"(\/\/.*)"; // ���������� ��������
}

string getVariable() {
    return R"(\b[a-zA-Z_][a-zA-Z0-9_]*\b)"; // ����
}

string getDataTypes() {
    return R"(\b(Int|Float|String|Char|Boolean)\b)"; // ���� �����
}

string getReservedWords() {
    return R"(\b(val|var|fun|if|else|when|for|while|return|try|catch|object|class|interface|this|super|null)\b)"; // ������������ �����
}

string getFunctionDefinition() {
    return R"(\bfun\s+[a-zA-Z_][a-zA-Z0-9_]*\s*\(([^()]*)\)\s*(\{)?)"; // ���������� �������
}

string getDelimiters() {
    return R"([\(\)\{\}\;\[\]\.,:])"; // ����������
}

string getOperators() {
    return R"([+\-*/=<>!%]+|(\+\+|--|==|!=|<=|>=|&&|\|\|))"; // ���������
}

string getLinesAndSpaces() {
    return R"([\t\n\r]+)"; // ˳� �� ������
}

string getPrintln() {
    return R"(\bprintln\b)"; // ���� �� �����
}

string getReadLine() {
    return R"(\breadLine\b)"; // ������� � �����
}

string getError() {
    return R"(.*)"; // ��������� ����� ��� �������/������������ �������
}
