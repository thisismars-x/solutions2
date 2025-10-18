#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  
  int m_xor = 0, m_and = 0, m_or = 0;
  for(int i = 1; i < n; i++) {
    for(int j = i + 1; j <= n; j++) {
        if(m_and < (i&j) && (i&j) < k) m_and = i&j;
        if(m_or < (i|j) && (i|j) < k) m_or = i|j;
        if(m_xor < (i^j) && (i^j) < k) m_xor = i^j;
    }
  }
  
  printf("%d\n%d\n%d\n", m_and, m_or, m_xor);
  
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
