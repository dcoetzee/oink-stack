// this funky qualifier causes flow from the arugument to the return
int $_1_2 f(int
            $_1                 // bad
            x) {}

int main() {
  int $tainted t;
  int $untainted u;
  u = f(t);
}
