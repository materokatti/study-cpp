#include "가중이동평균.h"

가중이동평균::가중이동평균(std::vector<double> 초기데이터, std::vector<double> 가중치) 
: 데이터(초기데이터), 가중치(가중치), 최대크기(초기데이터.size()) {
    if(초기데이터.size() != 가중치.size()) {
        std::cout << "데이터와 가중치의 크기가 일치하지 않습니다." << std::endl;
        exit(1);
    }
}

double 가중이동평균::평균계산() {
    double 합계 = 0.0;
    double 가중치합계 = 0.0;
    for (int i = 0; i < 최대크기; i++) {
        합계 += 데이터[i] * 가중치[i];
        가중치합계 += 가중치[i];
    }
    return 합계 / 가중치합계;
}
