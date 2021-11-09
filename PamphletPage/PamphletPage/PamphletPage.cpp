#include <iostream>
#include <string>

using namespace std;
int main()
{
   
    // 전체 페이지수 x, 장수 맞출려면 몇페이지가 더 있어야 하는가 temp, 전체 장수
    int x, temp, N, allPage, cnt ;
    bool isUndo = true;
    int allCnt[2000] = {0};

    while (true)
    {
        cout << "전체 페이지 수 입력 : ";
        cnt = 1;
        cin >> x;
        temp = x % 4;
        if (temp > 0)
        {
            temp = 4 - temp;
            allPage = x + temp;

        }
        else {
            allPage = x;
        }
        N = allPage / 4;
        for (int i = 0; i < allPage; i++)
        {
            // 반환점을 돌지 않았으면
            if (isUndo)
            {
                if (cnt == (allPage - 1))
                {
                    if (x != 1) 
                    {
                        allCnt[cnt - 1] = i;
                    }   
                    cnt++;
                    isUndo = false;
                }
                else
                {
                    if (cnt == 1) {
                        cnt++;
                    }
                    else {
                        if (cnt % 2 == 0)
                        {
                            cnt++;
                        }
                        else {
                            cnt += 3;
                        }
                    }

                }
            }
            else
            {
                if (cnt % 2 == 0)
                {
                    cnt -= 3;
                }
                else
                {
                    cnt--;
                }
            }
            if (x > i)
                allCnt[cnt - 1] = i + 1;
            else
                allCnt[cnt - 1] = 0;

        }
        isUndo = true;


        cout << "전체 필요한 장수 : " << N << endl; 
        for (int i = 0; i < allPage; i++)
        {            
            if (i % 2 == 0) 
            {
                
                 if ((i + 1) % 4 == 1)
                 {
                    cout << " [ " << allCnt[i] << ", ";
                 }
                 else
                    cout << allCnt[i] << ", ";
            }
            else {
                if ((i + 1) % 4 == 0)
                {
                    cout << allCnt[i] << " ] ";
                }
                
                else
                    cout << allCnt[i] << " | " ;
            }
            allCnt[i] = 0;
        }
        cout << endl;
        
   }
   
}
