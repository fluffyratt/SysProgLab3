#include <iostream>
#include <string>
#include "Regex.h"

using namespace std;

string getInt() {
    return R"(\b\d+\b)"; // Цілі числа
}

string getFloat() {
    return R"(\b\d*\.\d+([eE][-+]?\d+)?\b)"; // Числа з плаваючою комою
}

string getHexNumbers() {
    return R"(0x[0-9A-Fa-f]+)"; // Шістнадцяткові числа
}

string getBinaryNumbers() {
    return R"(0b[01]+)"; // Двійкові числа
}

string getString() {
    return R"("((\\")|[^"])*")"; // Рядки
}

string getChar() {
    return R"('([^'\\]|\\.)')"; // Символи
}

string getBoolean() {
    return R"(\b(true|false)\b)"; // Булеві значення
}

string getMultilineComments() {
    return R"(\/\*[\s\S]*?\*\/)"; // Багаторівневі коментарі
}

string getSingleLineComment() {
    return R"(\/\/.*)"; // Однорядкові коментарі
}

string getVariable() {
    return R"(\b[a-zA-Z_][a-zA-Z0-9_]*\b)"; // Змінні
}

string getDataTypes() {
    return R"(\b(Int|Float|String|Char|Boolean)\b)"; // Типи даних
}

string getReservedWords() {
    return R"(\b(val|var|fun|if|else|when|for|while|return|try|catch|object|class|interface|this|super|null)\b)"; // Зарезервовані слова
}

string getFunctionDefinition() {
    return R"(\bfun\s+[a-zA-Z_][a-zA-Z0-9_]*\s*\(([^()]*)\)\s*(\{)?)"; // Оголошення функцій
}

string getDelimiters() {
    return R"([\(\)\{\}\;\[\]\.,:])"; // Роздільники
}

string getOperators() {
    return R"([+\-*/=<>!%]+|(\+\+|--|==|!=|<=|>=|&&|\|\|))"; // Оператори
}

string getLinesAndSpaces() {
    return R"([\t\n\r]+)"; // Лінії та пробіли
}

string getPrintln() {
    return R"(\bprintln\b)"; // Вивід на екран
}

string getReadLine() {
    return R"(\breadLine\b)"; // Читання з вводу
}

string getError() {
    return R"(.*)"; // Загальний вираз для помилок/нерозпізнаних символів
}
