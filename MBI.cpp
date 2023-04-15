#include<iostream>
using namespace std;
//# 【深基3.例7】肥胖问题

// ## 题目描述

// BMI 指数是国际上常用的衡量人体胖瘦程度的一个标准，其算法是 $\dfrac{m}{h^2}$，其中 $m$ 是指体重（千克），$h$ 是指身高（米）。不同体型范围与判定结果如下：
// - 小于 $18.5$：体重过轻，输出 `Underweight`；
// - 大于等于 $18.5$ 且小于 $24$：正常体重，输出 `Normal`；
// - 大于等于 $24$：肥胖，不仅要输出 BMI 值（使用 `cout` 的默认精度），然后换行，还要输出 `Overweight`；
// 现在给出体重和身高数据，需要根据 BMI 指数判断体型状态并输出对应的判断。
// 对于非 C++ 语言，在输出时，请四舍五入保留六位**有效数字**输出，如果小数部分存在后缀 $0$，不要输出后缀 $0$。
// 请注意，保留六位**有效数字**不是保留六位小数。例如 $123.4567$ 应该输出为 $123.457$，$5432.10$ 应该输出为 $5432.1$。
// ## 输入格式
// 共一行。
// 第一行，共 $2$ 个浮点数，$m, h$，分别表示体重（单位为 kg），身高（单位为 m）。
// ## 输出格式
// 输出一行一个字符串，表示根据 BMI 的对应判断。特别地，对于 `Overweight` 情况的特别处理请参照题目所述。
// ## 样例 #1
// ### 样例输入 #1
// ```
// 70 1.72
// ```
// ### 样例输出 #1
// ```
// Normal
// ```
// ## 提示
// 对于所有数据，$40\le m \le 120$，$1.4 \le h \le 2.0$。$m$ 和 $h$ 的小数点后不超过三位。

class CalculateClass{
    public: double Calculate(double mass, double height){
        return mass/height/height;
    }
};

int main(void){
    double a,b;
    printf("请输入您的体重/n");
    scanf("%lf",&a);
    printf("请输入您的身高");
    scanf("%lf",&b);
    CalculateClass cal;
    double c=cal.Calculate(a,b);
    if(c<18.5){
        printf("Underweight");
    }
    else if(c>=18.5&&c<24){
        printf("Normal");
    }
    else{
        printf("Overweight");
    }
    printf("%lf",c);
    return 0;
}


// #include<iostream>
// using namespace std;

// double m,h;
// double BMI;

// int main(void){

//     cin >> m >> h;
//     BMI = m / h / h;
//     if(BMI < 18.5){
//         cout << "Underweight" << endl;
//     }
//     else if(BMI >=18.5 and BMI < 24){
//         cout << "Normal" << endl;
//     }
//     else{
//         cout << BMI << endl << "Overweight" << endl;
//     }
    
//     return 0;
// }