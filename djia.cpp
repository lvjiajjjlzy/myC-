#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int main() {
    int luck = 0; // 幸运值
    int stars = 30000; // 星星数量
    int cost = 0; // 抽奖成本
    int s_count = 0; // s级道具数量
    int a_count = 0; // a级道具数量
    int b_count = 0; // b级道具数量
    int c_count = 0; // c级道具数量
    int d_count = 0; // d级道具数量
    srand(time(NULL)); // 随机数种子
    cout << "https://space.bilibili.com/138278560" << endl;
    cout << "本程序仅供模拟，按照猫鼠公开概率制作，无法确定猫鼠内部因素" << endl;
    cout << "请输入你预期星星数量（阿拉伯数字，123这种）：" << endl;
    cin >> stars;


    while (true) {
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        cout << "当前星星数量为：" << stars << endl;
        cout << "请选择抽奖方式：" << endl;
        cout << "1. 抽一次（消耗一颗星星）" << endl;
        cout << "2. 抽十次（消耗九颗星星）" << endl;
        cout << "3.充值！（不花钱）" << endl;

        int choice;
        cin >> choice;
        if (choice == 1) {
            if (stars < 1) {
                cout << "星星不足，无法抽奖！" << endl;
                continue;
            }
            stars -= 1;
            cost += 6;
            int rand_num = rand() % 10000;
            if (rand_num < 80) {
                cout << "恭喜你获得了一个S级永久皮肤！" << endl;
                s_count += 1;
                luck = 0;
            }
            else if (rand_num < 680) {
                cout << "恭喜你获得了一个A级道具！" << endl;
                a_count += 1;
                luck += 1;
            }
            else if (rand_num < 4250) {
                cout << "恭喜你获得了一个B级道具！" << endl;
                b_count += 1;
                luck += 1;
            }
            else if (rand_num < 8650) {
                cout << "恭喜你获得了一个C级道具！" << endl;
                c_count += 1;
                luck += 1;
            }
            else {
                cout << "恭喜你获得了一个D级道具！" << endl;
                d_count += 1;
                luck += 1;
            }
            if (luck >= 200) {
                cout << "恭喜你获得了一个S级永久皮肤！" << endl;
                s_count += 1;
                luck = 0;
            }
        }
        else if (choice == 2) {
            if (stars < 9) {
                cout << "星星不足，无法抽奖！" << endl;
                continue;
                break;
            }
            stars -= 9;
            cost += 54;
            for (int i = 0; i < 10; i++) {
                int rand_num = rand() % 10000;
                if (rand_num < 80) {
                    cout << "恭喜你获得了一个S级永久皮肤！" << endl;
                    s_count += 1;
                    luck = 0;
                }
                else if (rand_num < 680) {
                    cout << "恭喜你获得了一个A级道具！" << endl;
                    a_count += 1;
                    luck += 1;
                }
                else if (rand_num < 4250) {
                    cout << "恭喜你获得了一个B级道具！" << endl;
                    b_count += 1;
                    luck += 1;
                }
                else if (rand_num < 8650) {
                    cout << "恭喜你获得了一个C级道具！" << endl;
                    c_count += 1;
                    luck += 1;
                }
                else {
                    cout << "恭喜你获得了一个D级道具！" << endl;
                    d_count += 1;
                    luck += 1;
                }
                if (luck >= 200) {
                    cout << "恭喜你获得了一个S级永久皮肤！" << endl;
                    s_count += 1;
                    luck = 0;
                }
            }
        }
        else if (choice == 3) {
            cout << "充它丫的！（阿拉伯数字，123这种）：" << endl;
            cin >> stars;
            cout << "充值完毕，满血复活！" << endl;
        }
        else {
            cout << "无效的选项！" << endl;
        }
        cout << "" << endl;
        cout << "当前幸运值为：" << luck << endl;
        cout << "当前星星数量为：" << stars << endl;
        cout << "当前抽奖成本为：" << cost << "元" << endl;
        cout << "S级永久皮肤：" << s_count << "个" << endl;
        cout << "A级道具：" << a_count << "个" << endl;
        cout << "B级道具：" << b_count << "个" << endl;
        cout << "C级道具：" << c_count << "个" << endl;
        cout << "D级道具：" << d_count << "个" << endl;
    }
    return 0;
}
