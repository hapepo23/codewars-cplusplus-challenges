/*
2 kyu
Evaluate mathematical expression
https://www.codewars.com/kata/52a78825cdfc2cfc87000005
*/

#include <cctype>
#include <string>

class Parser {
 public:
  Parser(const std::string& s) : str(s), pos(0) {}

  double parse() { return parseExpression(); }

 private:
  const std::string& str;
  size_t pos;

  void skipSpaces() {
    while (pos < str.size() && std::isspace(str[pos]))
      pos++;
  }

  double parseExpression() {
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

  double parseTerm() {
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

  double parseFactor() {
    skipSpaces();
    // unary minus
    if (pos < str.size() && str[pos] == '-') {
      pos++;
      return -parseFactor();
    }
    // parentheses
    if (pos < str.size() && str[pos] == '(') {
      pos++;
      double value = parseExpression();
      skipSpaces();
      pos++;  // skip ')'
      return value;
    }
    // number
    size_t start = pos;
    while (pos < str.size() && (std::isdigit(str[pos]) || str[pos] == '.'))
      pos++;
    return std::stod(str.substr(start, pos - start));
  }
};

double calc(const std::string& expression) {
  Parser parser(expression);
  return parser.parse();
}
