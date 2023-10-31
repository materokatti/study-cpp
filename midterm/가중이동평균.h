#ifndef 가중이동평균_H
#define 가중이동평균_H

#include <vector>
#include <iostream>

class 가중이동평균 {
private:
    std::vector<double> 데이터;
    std::vector<double> 가중치;
    int 최대크기;

public:
    가중이동평균(std::vector<double> 초기데이터, std::vector<double> 가중치);
    double 평균계산();
};

#endif
