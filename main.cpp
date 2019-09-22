include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    for(int i=-1;i<=1;i+=2)
        for(int j=-1;j<=1;j+=2)
            {
                if(x+j>=1 && x+j<=8 && y+i+i>=1 && y+i+i<=8)
                    cout<<x+j<<","<<y+i+i<<endl;
                if(x+j+j>=1 && x+j+j<=8 && y+i>=1 && y+i<=8)
                    cout<<x+j+j<<","<<y+i<<endl;
            }
    return 0;
}
