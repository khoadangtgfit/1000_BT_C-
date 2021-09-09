int getThePassword(string key1, string key2)
{
    int arr[100];
    for (int i=0;i<100;i++)
    {
        arr[i]=0;
    }
    for (int i=0;i<key1.size();i++)
    {
        for (int j=0;j<key2.size();j++)
        {
            if(key1[i]==key2[j])
            {for (int k=1;k<key1.size();k++)    
                if (key1[i+k]!=key2[j+k])
                {
                    arr[j]=k;
                    break;
                }
            }
        }
    }
    int max = arr[0];
    for (int i=0;i<100;i++)
    {
        if (arr[i]>max) {max=arr[i];}
    }
    if (max == 0) {return 6008009;} else {return max;}}
