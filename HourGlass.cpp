#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr) {
int i,j,sum=0;
    int max=INT_MIN;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(i+2<6 && j+2<6)
            {
               sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j+2]+arr[i+2][j+1]+arr[i+2][j];
                if(sum>max)
                {
                  max=sum;
                } 
            }
            
        }
    }
    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    int a;
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> a;
            if(a<=9 && a>=-9)
                arr[i][j]=a;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

