/*
2 kyu
Evaluate mathematical expression
https://www.codewars.com/kata/52a78825cdfc2cfc87000005
*/

#include <cctype>
#include <string>

static std::string str;
static size_t pos;

static double parseFactor();
static double parseTerm();
static double parseExpression();
static void skipSpaces();

static double parseFactor() {
  skipSpaces();
  if (pos < str.size() && str[pos] == '-') {
    pos++;
    return -parseFactor();
  }
  if (pos < str.size() && str[pos] == '(') {
    pos++;
    double value = parseExpression();
    skipSpaces();
    pos++;
    return value;
  }
  size_t start = pos;
  while (pos < str.size() && (std::isdigit(str[pos]) || str[pos] == '.'))
    pos++;
  return std::stod(str.substr(start, pos - start));
}

static double parseTerm() {
  double value = parseFactor();
  while (true) {
    skipSpaces();
    if (pos < str.size() && (str[pos] == '*' || str[pos] == '/')) {
      char op = str[pos++];
      double rhs = parseFactor();
      if (op == '*')
        value *= rhs;
      else
        value /= rhs;
    } else
      break;
  }
  return value;
}

static double parseExpression() {
  double value = parseTerm();
  while (true) {
    skipSpaces();
    if (pos < str.size() && (str[pos] == '+' || str[pos] == '-')) {
      char op = str[pos++];
      double rhs = parseTerm();
      if (op == '+')
        value += rhs;
      else
        value -= rhs;
    } else
      break;
  }
  return value;
}

static void skipSpaces() {
  while (pos < str.size() && std::isspace(str[pos]))
    pos++;
}

double calc(const std::string& expression) {
  pos = 0;
  str = expression;
  return parseExpression();
}
