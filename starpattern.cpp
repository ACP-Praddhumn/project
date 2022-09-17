#include<iostream>
using namespace std;

/*int main()
{
    int n;
    cin>>n;
    int i = 1;

    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
 int main()

 {
     int n;
     cin>>n;
     int i = 1;
     while(i<=n)
     {
         int j = 1;
         while(j<=n)
         {
             cout<<i;
             j++;
         }
         cout<<endl;
         i = i + 1;
     }
 }

 int main()
 {
     int n;
     cin>>n;
     int i = 1;
     while(i<=n)
     {
        int j = 1;
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;

     }

 }

 int main()
 {
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }


 }

 int main()
 {
    int n;
    cin>>n;
    int i = 1;
    int count = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
             cout<<count<<"  ";
            count = count + 1;
           
            j++;
        }
        cout<<endl;
        i++;
    }
    

 }
 int main()
 {
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }

    
 }
 int main()
 {
    int n;
    cin>>n;
    int i = 1;
    
        while(i<=n)
        {
            int j = 1;
            while(j<=i)
            {
                cout<<i<<"  ";
                j++;
            }
            cout<<endl;
            i++;

        }
    

 }
int main()
{
    int n;
    cin>>n;
    int i = 1;
    int count = 1;
    while(i<=n)
    {
      int j = 1;
      while(j<=i)
      {
          cout<<count<<"  ";
          count = count + 1;
          j++;
      }
      cout<<endl;
      i++;
    }
}
int main()
{
    int n;
    cin>>n;
    
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        int value = i;
        while(j<=i)
        {   
            cout<<value<<"  ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        
        while(j<=i)
        {
          cout<<i-j+1<<" ";
          j++;
        }
        cout<<endl;
        i++;
    }
}

int main()
{   
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
      int j = 1;
      while(j<=n)
      {   char ch = 'A'+i-1;
          cout<<ch<<" ";
          j++;
      }
      cout<<endl;
      i++;

    }
}
int main()
{
    int n;
    cin>>n;
    int i = 1;                  //ABC
    while(i<=n)                 //ABC
    {                           //ABC
        int j = 1;
        while(j<=n)
        {
            char ch = 'A'+j-1;
            char value = ch;
            
            cout<<value<<" ";
            
            j++;
            
        }
        cout<<endl;
        i++;
    }
}
int main()
{
    int n;
    cin>>n;
    int i = 1;
    char ch = 'A';
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        
        {   
           // char ch = 'A';              // ABC
                                          // DEF
            cout<<ch<<" ";                // GHI    
            ch = ch +1;
            
            j++;
        }
        cout<<endl;
        i++;
    }
}

int main()
{
    int n;
    cin>>n;
    int i = 1;
    //char ch ='A'+i+j-2;
    while(i<=n)
    {
        int j = 1;
       // char ch = 'A'+i+j-2;               //A B C D E F
        while(j<=n)                          //B C D E F G
        {   char ch = 'A'+i+j-2;             //C D E F G H
            cout<<ch<<" ";                   //D E F G H I 
            j++;                             //E F G H I J
        }                                    //F G H I J K
        cout<<endl;
        i++;
    }

}
                        //TRIANGULAR PATTERN

int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        //char ch = 'A';
        while(j<=i)
        {   char ch = 'A'+i-1;         //A
            cout<<ch<<" ";             //B B
            //ch++;                    //C C C
            j++;                       //D D D D

        }
        cout<<endl;
        i++;
    }
}  
int main()
{
    int n;
    cin>>n;
    int i = 1;
    char ch = 'A';
    while(i<=n)
    {
        int j = 1;                      //A
        // char ch = 'A';                //B C
        while(j<=i)                     //D E F
        {  // char ch = 'A';            //G H I J
            cout<<ch<<" ";              //K L M N O
            ch++; 
            j++;
        }
        cout<<endl;
        i++;
    }
} 
int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;                            //A
        char ch = 'A'+i-1;                    //B C
        while(j<=i)                           //C D E
        {                                     //D E F G
            // char ch = 'A'+i-1;              //E F G H I
            cout<<ch<<" ";                    //F G H I J K
            ch++;
            j++;

        }
        cout<<endl;
        i++;
    }
}   
int main()
{
    int  n;                                 //TYPECASTING : MAKING A VARIABLE OF ONE TYPE.
    cin>>n;
    int i = 1;
    while(i<=n)
    {                                        //A
        int j = 1;                           //B C
        while(j<=i)                          //C D E
        {                                    //D E F G
            char ch = 'A'+i+j-2;             //E F G H I
            cout<<ch<<" ";                   //F G H I J K
            j++;
        }
        cout<<endl;
        i++;

    }
}
                         // Diamond pattern

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j>=6-i)                                          
            {                                                  
                printf("*");                                   
            }                                                  
            else                                                                       
            {                                                  
                printf(" ");                                   
            }
                                                              
        }   
        for(j=6; j<=9; j++)
        {
            if(j<=4+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }                                                  
        printf("\n");

    }

    for(i=6; i<=9; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j>=i-4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        for(j=6; j<=8; j++)
        {
            if(j<=14-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        

        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    //int arr[1] = {10};
    //printf("%d\n",0[arr]);
    // printf("%d",sizeof(void*));
    int a = 100;
    printf("%d\n"+1,a);
    printf("value is %d\n "+3,a);
}*/





 
