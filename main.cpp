#include "chealthy.hpp"

struct INDEX_BODY {
public:
    float weight, height, waist, hip, max, maxHeartRate, restHeartRate, cholesterol, bloodPressure;
    int age, activityLevel;
    string gender;

    INDEX_BODY(string gender, int age, float weight, float height, float waist, float hip,
               int activityLevel, float maxHeartRate, float restHeartRate,
               float cholesterol, float bloodPressure)
    {
        this->gender = gender;
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->waist = waist;
        this->hip = hip;
        this->activityLevel = activityLevel;
        this->maxHeartRate = maxHeartRate;
        this->restHeartRate = restHeartRate;
        this->cholesterol = cholesterol;
        this->bloodPressure = bloodPressure;
    }
};

int main(){
    system("cls");

    C_HEALTHY ch;
    INDEX_BODY ib(
        "nam", 25, 70, 1.75, 85, 95, 3, 190, 60, 200, 120
    );

    cout << "Chỉ số BMI là: " << ch.BMI(ib.weight, ib.height) << endl;
    cout << "-> Lời khuyên: " << ch.NABMI(ch.BMI(ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "Chỉ số BMR là: " << ch.BMR(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Lời khuyên: " << ch.NABMR(ib.gender, ch.BMR(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "Chỉ số TDEE là: " << ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel) << endl;
    cout << "-> Lời khuyên: " << ch.NATDEE(ib.gender, ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel)) << endl;
    cout << endl;

    cout << "Chỉ số WHR là: " << ch.WHR(ib.gender, ib.waist, ib.hip) << endl;
    cout << "-> Lời khuyên: " << ch.NAWHR(ch.WHR(ib.gender, ib.waist, ib.hip)) << endl;
    cout << endl;

    cout << "Chỉ số LBM là: " << ch.LBM(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Lời khuyên: " << ch.NALBM(ch.LBM(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "Chỉ số FFMI là: " << ch.FFMI(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Lời khuyên: " << ch.NAFFMI(ch.FFMI(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "Chỉ số RFM là: " << ch.RFM(ib.waist, ib.height) << endl;
    cout << "-> Lời khuyên: " << ch.NARFM(ch.RFM(ib.waist, ib.height)) << endl;
    cout << endl;

    cout << "Chỉ số BFP là: " << ch.BFP(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Lời khuyên: " << ch.NABFP(ch.BFP(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "Chỉ số BBW là: " << ch.BBW(ib.weight) << endl;
    cout << "-> Lời khuyên: " << ch.NABBW(ch.BBW(ib.weight)) << endl;
    cout << endl;

    cout << "Chỉ số IBW là: " << ch.IBW(ib.gender, ib.height) << endl;
    cout << "-> Lời khuyên: " << ch.NAIBW(ch.IBW(ib.gender, ib.height)) << endl;
    cout << endl;

    cout << "Chỉ số MA là: " << ch.MA(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Lời khuyên: " << ch.NAMA(ch.MA(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "Chỉ số VFR là: " << ch.VFR(ib.waist, ib.hip) << endl;
    cout << "-> Lời khuyên: " << ch.NAVFR(ch.VFR(ib.waist, ib.hip)) << endl;
    cout << endl;

    cout << "Chỉ số BSA là: " << ch.BSA(ib.height, ib.weight) << endl;
    cout << "-> Lời khuyên: " << ch.NABSA(ch.BSA(ib.height, ib.weight)) << endl;
    cout << endl;

    cout << "Chỉ số VO2MAX là: " << ch.VO2MAX(ib.maxHeartRate, ib.restHeartRate) << endl;
    cout << "-> Lời khuyên: " << ch.NAVO2MAX(ch.VO2MAX(ib.maxHeartRate, ib.restHeartRate)) << endl;
    cout << endl;

    cout << "Chỉ số HSI là: " << ch.HSI(ib.gender, ib.weight, ib.height, ib.age, ib.cholesterol, ib.bloodPressure) << endl;
    cout << "-> Lời khuyên: " << ch.NAHSI(ch.HSI(ib.gender, ib.weight, ib.height, ib.age, ib.cholesterol, ib.bloodPressure)) << endl;
    cout << endl;

    cout << "Chỉ số MMI là: " << ch.MMI(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Lời khuyên: " << ch.NAMMI(ch.MMI(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "Chỉ số BFM là: " << ch.BFM(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Lời khuyên: " << ch.NABFM(ch.BFM(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    return 0;
}