#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// �֐��̃v���g�^�C�v�錾
string judge(string player, string computer);
void janken();

int main() {
    // �Q�[�������s
    janken();
    return 0;
}

// ���s�𔻒肷��֐�
string judge(string player, string computer) {
    if (player == computer) {
        return "��������";
    }
    else if ((player == "�O�[" && computer == "�`���L") ||
        (player == "�`���L" && computer == "�p�[") ||
        (player == "�p�[" && computer == "�O�[")) {
        return "����";
    }
    else {
        return "����";
    }
}

// ����񂯂���s���֐�
void janken() {
    string hands[] = { "�O�[", "�`���L", "�p�[" };
    srand(time(0)); // �����̎��ݒ�

    cout << "����񂯂���n�߂܂��I" << endl;
    cout << "1: �O�[, 2: �`���L, 3: �p�[" << endl;
    cout << "��������͂��Ă�������: ";
    int player_hand;
    cin >> player_hand;

    if (player_hand < 1 || player_hand > 3) {
        cout << "�s���ȓ��͂ł��B" << endl;
        return;
    }

    string player_choice = hands[player_hand - 1];
    int computer_hand_index = rand() % 3;
    string computer_choice = hands[computer_hand_index];

    cout << "���Ȃ��̎�: " << player_choice << endl;
    cout << "�R���s���[�^�̎�: " << computer_choice << endl;

    string result = judge(player_choice, computer_choice);
    cout << "����: " << result << endl;
}
