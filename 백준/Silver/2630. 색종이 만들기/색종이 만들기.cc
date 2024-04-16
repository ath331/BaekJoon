#include <iostream>
using namespace std;
int arr[129][129]; 
int white = 0; // 흰 종이
int blue = 0; // 파란 종이
void fc(int x, int y, int k){
    bool cut = false; // 잘라야하는지 
    int first_color = arr[x][y]; // 첫번째칸의 색
    for (int i = x; i < x + k;i++){
        for (int j = y; j < y + k;j++){
            if(arr[i][j] != first_color){ // 중간에 다른색이 나오면
                cut = true; // 잘라야함.
                break; 
            }
        }
    }
    if(cut){ // 잘라야하는 색종이면 
        fc(x, y, k / 2); // 위쪽에 왼쪽 파트
        fc(x, y + k / 2, k / 2); //위쪽에 오른쪽 파트
        fc(x + k / 2, y, k / 2); // 아래쪽에 왼쪽 파트
        fc(x + k / 2, y + k / 2, k / 2); // 아래쪽에 오른쪽 파트
    }else{
        if(first_color == 1) // 파란색
            blue++;
        else // 흰색
            white++;
    }    
}
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    fc(0, 0, n);
    cout << white << '\n';
    cout << blue << '\n';
    return 0;
}
