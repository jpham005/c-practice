#include <stdio.h>

char s[101];

char * tbl[8] = {
  "c=",
  "c-",
  "dz=",
  "d-",
  "lj",
  "nj",
  "s=",
  "z=",
};

int strlen(char* s) {
  int len = 0;
  for (char* ch = s; (*ch); ch++) {
    ++len;
  }
  return len;
}

// ("abc", "ab") => 1
// ("abc", "q") => 0
int startWith(char * s, char * cmp) {
  int s_len = strlen(s);
  int cmp_len = strlen(cmp);
  if (s_len < cmp_len) return 0;
  for (int i = 0; i < cmp_len; i++) {
    if (s[i] != cmp[i]) return 0;
  }
  return 1;
}

// "abc" => "bc"
// "c=bc" => "bc"
// "dz=qr" => "qr"
char* count(char* s) {
  for (int i = 0; i < 8; i++) {
    if (startWith(s, tbl[i])) {
      return s + strlen(tbl[i]);
    }
  }
  return s + 1;
}

int main() {
  scanf("%s", s);
  char * cur = s;
  int cnt = 0;
  while (*cur) {
    cur = count(cur);
    cnt++;
  }
  printf("%d\n", cnt);
}