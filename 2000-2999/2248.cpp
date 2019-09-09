// (c) Tivole

// 2248

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	short int *a = NULL;
	int i, j, n, k;
	scanf("%d%d", &n, &k);
	a = (short int*)malloc(n * sizeof(short int));
	for(i = 0; i < n; i++) scanf("%d", &a[i]);

	int m_ind=0, m_loc_ind=0;
	bool is_min = false;                    //cout << "a[m_ind]   m_ind   m_loc_ind  is_min\n\n";
	for(i = 0; i < (n-k+1); i++) {          //cout << "   i=" << i << endl;
		
		m_loc_ind--;
		if(m_loc_ind < 0) is_min = false;    //cout << "BFR * " << a[m_ind] << " " << m_ind << " " << m_loc_ind << " " << is_min << endl;
		if(is_min == false) {
			m_ind = i;
			for(j = i+1; j < i+k; j++) {
				if(a[j] <= a[m_ind]) {
					m_ind = j;
				}
			}
			m_loc_ind = m_ind-i-1;
			is_min = true;
		}
		else {
			if(a[i+k-1] <= a[m_ind]) {
				m_ind = i+k-1;
				m_loc_ind = k-1;
			}
		}                                    //cout << "AFT * " << a[m_ind] << " " << m_ind << " " << m_loc_ind << " " << is_min << endl;
		
		cout << a[m_ind];
		
		if(i != n-k) cout << " ";
	}
	cout << endl;
	return 0;
}