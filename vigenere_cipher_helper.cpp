/*
4 kyu
Vigenère Cipher Helper
https://www.codewars.com/kata/52d1bd3694d26f8d6e0000d3
*/

#include <string>

class VigenèreCipher {
 public:
  std::string key;
  std::string alphabet;
  std::string encode(const std::string& str);
  std::string decode(const std::string& str);
};

static int cp_pos_in_alphabet(const std::string_view& cp,
                              const std::string_view& alpha) {
  size_t j = 0;
  for (size_t i = 0; i < alpha.size();) {
    unsigned char c = alpha[i];
    size_t len = (c < 0x80) ? 1 : (c < 0xE0) ? 2 : (c < 0xF0) ? 3 : 4;
    std::string_view alphacp(&alpha[i], len);
    if (alphacp == cp)
      return j;
    i += len;
    ++j;
  }
  return -1;
}

static size_t cp_count(const std::string& s) {
  size_t count = 0;
  for (unsigned char c : s)
    if ((c & 0xC0) != 0x80)
      count++;
  return count;
}

static std::string cp_at_pos(const std::string& s, size_t index) {
  size_t cp = 0;
  for (size_t i = 0; i < s.size();) {
    unsigned char c = s[i];
    size_t len = (c < 0x80) ? 1 : (c < 0xE0) ? 2 : (c < 0xF0) ? 3 : 4;
    if (cp == index)
      return s.substr(i, len);
    i += len;
    cp++;
  }
  return "";
}

static std::string endecode(const std::string& str,
                            const std::string& alphabet,
                            const std::string& key,
                            bool encode) {
  std::string result{""};
  size_t strlen = cp_count(str);
  size_t alphalen = cp_count(alphabet);
  size_t keylen = cp_count(key);
  size_t keypos = 0;
  for (size_t i = 0; i < strlen; ++i) {
    std::string cp = cp_at_pos(str, i);
    std::string new_cp = cp;
    int cp_pos_in_alpha = cp_pos_in_alphabet(cp, alphabet);
    if (cp_pos_in_alpha >= 0) {
      std::string key_cp = cp_at_pos(key, keypos);
      int key_cp_pos_in_alpha = cp_pos_in_alphabet(key_cp, alphabet);
      if (key_cp_pos_in_alpha > 0) {
        int new_cp_pos_in_alpha =
            (cp_pos_in_alpha + (encode ? key_cp_pos_in_alpha
                                       : (alphalen - key_cp_pos_in_alpha))) %
            alphalen;
        new_cp = cp_at_pos(alphabet, new_cp_pos_in_alpha);
      }
    }
    result += new_cp;
    keypos = (keypos + 1) % keylen;
  }
  return result;
}

std::string VigenèreCipher::encode(const std::string& str) {
  return endecode(str, alphabet, key, true);
}

std::string VigenèreCipher::decode(const std::string& str) {
  return endecode(str, alphabet, key, false);
}
