#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 関数のプロトタイプ宣言
string judge(string player, string computer);
void janken();

int main() {
    // ゲームを実行
    janken();
    return 0;
}

// 勝敗を判定する関数
string judge(string player, string computer) {
    if (player == computer) {
        return "引き分け";
    }
    else if ((player == "グー" && computer == "チョキ") ||
        (player == "チョキ" && computer == "パー") ||
        (player == "パー" && computer == "グー")) {
        return "勝ち";
    }
    else {
        return "負け";
    }
}

// じゃんけんを行う関数
void janken() {
    string hands[] = { "グー", "チョキ", "パー" };
    srand(time(0)); // 乱数の種を設定

    cout << "じゃんけんを始めます！" << endl;
    cout << "1: グー, 2: チョキ, 3: パー" << endl;
    cout << "数字を入力してください: ";
    int player_hand;
    cin >> player_hand;

    if (player_hand < 1 || player_hand > 3) {
        cout << "不正な入力です。" << endl;
        return;
    }

    string player_choice = hands[player_hand - 1];
    int computer_hand_index = rand() % 3;
    string computer_choice = hands[computer_hand_index];

    cout << "あなたの手: " << player_choice << endl;
    cout << "コンピュータの手: " << computer_choice << endl;

    string result = judge(player_choice, computer_choice);
    cout << "結果: " << result << endl;
}
