#include "가중이동평균.h"

int main() {
    std::vector<double> 데이터 = {10, 5, 8, 12, 14}; // 예시 데이터
    std::vector<double> 가중치 = {0.05, 0.3, 0.15, 0.8, 0.05}; // 예시 가중치

    가중이동평균 객체(데이터, 가중치);
    std::cout << "가중이동평균: " << 객체.평균계산() << std::endl;

    return 0;
}
