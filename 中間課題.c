#include <stdio.h>
#include <string.h>
#include <ctype.h> // isupper, islower関数を使うため

int main() {
    char password[100]; // パスワードを格納する配列
    int minLength = 8;  // 最低文字数
    int hasUppercase = 0; // 大文字が含まれているかのフラグ
    int hasLowercase = 0; // 小文字が含まれているかのフラグ

    // ユーザーにパスワードを入力させる
    printf("パスワードを入力してください: ");
    scanf("%99s", password); // 最大99文字を読み込む

    // パスワードの長さを取得
    int length = strlen(password);

    // パスワードに大文字・小文字が含まれているかをチェック
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUppercase = 1;
        }
        if (islower(password[i])) {
            hasLowercase = 1;
        }
        // 両方見つかったらループを終了
        if (hasUppercase && hasLowercase) {
            break;
        }
    }

    // 条件を判定
    if (length >= minLength && hasUppercase && hasLowercase) {
        printf("強いパスワードです！ (長さ: %d, 大文字と小文字を含む)\n", length);
    } else {
        printf("パスワードは無効です。\n");
        if (length < minLength) {
            printf("- 長さが足りません (長さ: %d, 最低文字数: %d)\n", length, minLength);
        }
        if (!hasUppercase) {
            printf("- 大文字を含んでいません\n");
        }
        if (!hasLowercase) {
            printf("- 小文字を含んでいません\n");
        }
    }

    return 0;
}