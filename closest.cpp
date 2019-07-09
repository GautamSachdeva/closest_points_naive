#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>

using std::vector;
using std::string;
using std::pair;
using std::min;

double distance(int x_1, int x_2, int y_1,int y_2){
	return pow((pow((x_1 - x_2),2) + pow((y_1 - y_2),2)),0.5);
}

double minimal_distance(vector<int> x, vector<int> y) {
	double m_distance = distance(x[0],x[1],y[0],y[1]);
	for(int i = 0 ; i < x.size() ; i++){
		for(int j = 0; j < x.size() ; j++){
			if( m_distance > distance(x[i],x[j],y[i],y[j]) && distance(x[i],x[j],y[i],y[j]) != 0){
				m_distance = distance(x[i],x[j],y[i],y[j]);
			}
		}
	}
  return m_distance;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> x[i] >> y[i];
  }
  std::cout << std::fixed;
  std::cout << std::setprecision(9) << minimal_distance(x, y) << "\n";
}
