#include <stdio.h>
#include "player.h"
#include "room.h"

int main() {
    int p, m;

    // �÷��̾� ���� �ִ� �� ũ�� �Է�
    scanf_s("%d %d", &p, &m);

    // �÷��̾� ���� �Է�
    input_players(p);

    // �� �Ҵ� �� ��Ī ó��
    assign_rooms(p, m);

    // ��� ���
    print_rooms(m);

    return 0;
}