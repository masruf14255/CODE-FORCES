/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

    for (int i = 0 ; i < t ; ++i)
    {
        int n;
        long long int m;
        scanf("%d%lld",&n,&m);

        char str1[n + 1];
        char str[n + 1];

        scanf("%s",str1);
        strcpy(str,str1);
        char temp[n + 1];

        strcpy(temp,str);

        for (long long int k = 0 ; k < m ; ++k)
        {
           int j = 0;
           while (str1[j] != '\0')
           {
               if (str1[j] == '0')
               {
                   int count = 0;
                   if(str1[j + 1] == '1' && (j + 1) < n)
                   {
                       count++;
                   }
                   if (str1[j - 1] == '1' && (j - 1) >=0 )
                   {
                       count ++;
                   }
                   if (count == 1)
                   {
                       str[j] = '1';
                      // j++;
                   }
               }

               j++;
           }
           strcpy(str1,str);
           // printf("%s\n",str);
           if(strcmp(str,temp))
           {
                strcpy(temp, str);
           }
           else
           {
               break;
           }
        }
        printf("%s\n",str);
    }
}
