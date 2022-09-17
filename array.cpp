#include<iostream>
#include<stdio.h>
using namespace std;

/*int main()
{   //declare
    int num[5];
    //accessing an array by index
    cout<<num[8]<<endl;
    //initialisation
    int sec[3] = {2,7,8};
    //access of an array
    cout<<sec[0];
    cout << endl << "Everything is fine." << endl;
}


int main()
{
    int a;
    cout << "Size of int is : "<<sizeof(a)<<endl;
    char b;
    cout << "Size of char is : "<<sizeof(b)<<endl;
    float c;
    cout << "Size of float is : "<<sizeof(c)<<endl;
    double d;
    cout << "Size of double is : "<<sizeof(d)<<endl;
    short e;
    cout << "Size of short is : "<<sizeof(e)<<endl;
    long f;
    cout << "Size of long is : "<<sizeof(f)<<endl;
    bool g;
    cout << "Size of bool is : "<<sizeof(g)<<endl;

}                                      

                                     //Max and min value in an array's elements

int getmin(int num[],int n)
{
    int min = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        if(num[i]<min)
        {
            min = num[i];
        }
    }
    return min;
}
int getmax(int num[],int n)
{
    int max = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
    }
    return max;
}
int main()
{   cout<<"The size of array is ";
    int size;
    cin>>size;
    cout<<"The elements of array are "<<endl;
    int num[101];
    for(int i = 0; i<size; i++)
    {
      cin>>num[i];
    }
    cout<<"Max value is : "<<getmax(num,size)<<endl;
    cout<<"Min value is : "<<getmin(num,size)<<endl;
}                                              

                                                    //checking upper and lower case character

int main()
{
  char ch;
  cout<<"The character is : ";
  cin>>ch;
  if(ch>='A' && ch<='Z')
  {
    cout<<"The upper case character."<<endl;
  }
  else
  {
    cout<<"The lower case character.";  
  }
}                        
                            
                                                         // Alternate way

int main()
{
    char ch;
    cout<<"The character is : ";
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
      cout<<"The upper character ."<<endl;
    }
    else
    {
      cout<<"The lower character .";
    }
}
      //Alternate way

int main()
{
    char ch;
    cout<<"The character is : ";
    cin>>ch;
    if(ch>=97 && ch<=122)
    {
      cout<<"The lower character ."<<endl;
    }
    else
    {
      cout<<"The upper character .";
    }
}

                                                 //greatest among 3 numbers

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        cout<<"a is greatest."<<endl;
    }
    else if(b>=a && b>=c)
    {
        cout<<"b is greatest."<<endl;
    }
    else
    {
        cout<<"c is greatest."<<endl;
    }
}
          //Alternate way

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b)
    {
        if(a>=c)
        cout<<"a is greatest.";
    }
    else if(b>=c)
    {
        cout<<"b is greatest.";
    }
    else
    {
        cout<<"c is greatest.";
    }
}     

                                                //  ## Lenear Search ##

bool search(int arr[],int size,int key)
{
    for(int i = 0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{   
    int size;
    cout<<"Size of array : ";
    cin>>size;
    int arr[1000];
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the no. to search for : ";
    cin>>key;
    bool found = search(arr,size,key);
    if(found)
    {
        cout<<"The number is present.";
    }
    else
    {
        cout<<"The number is absent.";
    }
}
          
                                                 //Alternate way

bool search(int arr[],int size,int key)
{
    for(int i = 0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{   
    int arr[5] = {3,6, 1,-7, 8};
    int key;
    cout<<"Enter the no. to search for : ";
    cin>>key;
    bool found = search(arr,5,key);
    if(found)
    {
        cout<<"The number is present.";
    }
    else
    {
        cout<<"The number is absent.";
    }
}

                                                // Reverse an array

void reverse(int arr[],int n)
{   
    int i = 0;
    int j = n-1;
    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void printArray(int arr[],int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {3,4,6,8,-3};
    int brr[6] = {2,7,1,4,-9,-43};

    reverse(arr,5);
    reverse(brr,6);

    printArray(arr,5);
    printArray(brr,6);
}

                                                  //Swap Alternative

void printArray(int arr[],int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int n)
{
    for(int i = 0; i<n; i+=2)
    {
        if(i+1<n)
        {
            //swap(arr[i],arr[i+1]);
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int even[8] = {4,6,8,-5,7,2,3,0};
    int odd[5] = {3,8,5,2,7};

    swapAlternate(even,8);
    printArray(even,8);

    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);
}
 
 
                                           // decimal to binary conversion

#include<math.h>
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n!=0)
    {
        int bit = n&1;
        ans = (bit*pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    cout<<ans<<endl;
}

                                               //Kaden's Algorithm

int getmaxsubarray(int arr[],int n)
{
    int sum = 0;
    int ans = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
        ans = max(sum,ans);

        if(sum<0)
        { 
            sum = 0;
        } 

    }
    return ans;

}

int main()
{
    int arr[8] = {1,-3,2,1,-1};
    cout<<getmaxsubarray(arr,5);
}

                                           //Maximum and Minimum element in an Array

int max_element(int arr[],int n)
{
    int ans = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int min_element(int arr[],int n)
{
    int ans = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]<ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}
int main()
{
    int arr[8] = {4,5,-4,-5,6,8,9,11};
    cout<<"The maximum element is : "<<max_element(arr,8)<<endl;
    cout<<"The minimum element is : "<<min_element(arr,8);
}                                                        

                                                           //Swap Alternative  

void print_array(int arr[],int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void swap_alternative(int arr[],int n)
{
    int i = 0;
    while(i<n-1)
    {
        swap(arr[i],arr[i+1]);
        i+=2;
    }
}

int main()
{
    int arr[9] = {3,-4,5,6,7,9,11,65,23};
    swap_alternative(arr,9);
    cout<<"The swapped array is : ";
    print_array(arr,9);
    
}

                                     //Sort an array of 0 1 2

void sort_array(int arr[],int n)
{
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==0)
        {
            cout<<arr[i]<<" ";
        }

    }
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==1)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==2)
        {
            cout<<arr[i]<<" ";
        }
        
    }
}
int main()
{
    int arr[7] = {1,0,2,1,1,2,0};
    cout<<"The sorted array is : ";
    sort_array(arr,7);
}

                                                    //Sort negative numbers to one side of an array

void sort_negative_number(int arr[],int n)
{
    for(int i = 0; i<n; i++)
    {
        if(arr[i]<0)
        {
            cout<<arr[i]<<" ";
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(arr[i]>=0)
        {
            cout<<arr[i]<<" ";
        }
    }

}
int main()
{
    int arr[8] = {9,-4,5,-3,6,8,-5,-22};
    cout<<"The negative number sorted array is : ";
    sort_negative_number(arr,8);
}

bool search_element(int arr[][3],int n,int key)
{
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]==key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][3] = {4,6,2,6,3,6,3232,6,3};
    int key;
    cin>>key;
    if(search_element(arr,key,3))
    {
        cout<<"The number is present.";
    }
    else
    {
        cout<<"The number is absent.";
    }
    
}

void printspiral(int arr[4][4],int n)
{
   int start_row = 0,end_row = n; 
   int start_col = 0,end_col = n;
   int count = 0,total = n*n;
   
   while(count!=total)
   {
       for(int i = start_col; i<end_col; i++)
       {   
          cout<<arr[start_row][i];
          count++;
       }

        start_row++;
        
        for(int i = start_row; i<end_row; i++)
       {   
          cout<<arr[i][end_col];
          count++;
       }
        
        end_col--;

       for(int i = end_col; i>start_col; i--)
       {  
          cout<<arr[end_row][i];
          count++;
       }

       end_row--;

       for(int i = end_row; i>start_row; i--)
       {   
          cout<<arr[i][start_col];
          count++;
       }

       start_col++;

       


       
   }

}
int main()
{
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    printspiral(arr,4);
}

                                 
                                          // SEIVE OF ERATOSTHENES
#include<vector>
int countPrime(int n)
{
    vector<bool>v(n+1,true);
    int c = 0;
    v[0] = v[1] = false;
    for(int i = 2; i<n+1; i++)
    {
        if(v[i]==true)
        {
            for(int j = 2*i; j<n+1; j=j+i)
            {
                v[j] = false;
            }
        }
        if(v[i]==true)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The number of prime numbers is : "<<countPrime(n);
}
                                       
                                       //sum of two matrices

int main()
{
    int a[10][10],b[10][10],m,n,c[10][10];
    cout<<"enter the no of rows and colums :";
    cin>>m>>n;
    cout<<"enter the elements of a : \n";
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"enter the elements of b :\n";
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"elements of c are :\n";

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}

int main()
{
    int a[10][10],i,j,m,n;
    cout<<"enter no of rows and columns : ";
    cin>>m>>n;
    cout<<"enter elements of array : \n";
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"transpose of matrix is :\n";
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

}

                                        //DELETION OF ELEMENT IN AN ARRAY

int main()
{
    int arr[5] = {3,5,8,2,4};
    int index , i;
    printf("Enter the index of element to be deleted : ");
    scanf("%d",&index);
    if(index<5)
    {   
        for(i = index; i<5; i++)
        {
            arr[i] = arr[i+1];
        }
        printf("Printing new array : \n");
        for(i=0; i<4; i++)
        {
            printf("%d ",arr[i]);
        }
    }  
    else
    {
        printf("element not found.");
    }  
}

                                               // MERGING TWO ARRAYS

int main()
{
    int a[50],b[50],c[50],n1,n2;
    cout<<"enter size of a : ";
    cin>>n1;
    cout<<"enter size of b : ";
    cin>>n2;
    cout<<"enter elements of a : ";
    for(int i = 0; i<n1; i++)
    {
        cin>>a[i];
    }

    cout<<"enter elements of b : ";
    for(int i = 0; i<n2; i++)
    {
        cin>>b[i];
    }
    cout<<"merging two arrays : ";
    for(int i = 0; i<n1; i++)
    {
        c[i] = a[i];
    }
    for(int i = n1; i<n1+n2; i++)
    {
        c[i] = b[i-n1];
    }

    for(int i = 0; i<n1+n2; i++)
    {
        cout<<c[i];
    }
}



                           // ALTERNATE MWTHOD

int main()
{
    int a[50],b[50],c[50],n1,n2;
    cout<<"enter size of a : ";
    cin>>n1;
    cout<<"enter size of b : ";
    cin>>n2;
    cout<<"enter elements of a : ";
    for(int i = 0; i<n1; i++)
    {
        cin>>a[i];
        c[i] = a[i];
    }
    
    int k = n1;
    cout<<"enter elements of b : ";
    for(int i = 0; i<n2; i++)
    {
        cin>>b[i];
        c[k] = b[i];
        k++;
    }
    cout<<"printing merged array: ";
    for(int i = 0; i<n1+n2; i++)
    {
        cout<<c[i]<<" ";
    }
}


                          // INSERTION OF AN ELEMENT IN AN ARRAY


int main()
{
    int a[10],i,n,j,k,item;
    cout<<"enter the size of an array : ";
    cin>>n;
    j = n-1;
    cout<<"enter the elements of array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the index of no. : ";
    cin>>k;
    cout<<"enter the number to be inserted : ";
    cin>>item;
    if(k<n)
    {
        while(j>=k)
        {
        a[j+1] = a[j];
        j--;
        }
        a[k] = item;
        for(i = 0; i<n+1; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        cout<<"Insertion is not possible.";
    }
}

                                 // Multiplication Of Two Arrays

int main()
{
    int A[10][10],B[10][10],C[10][10],m,n,p,q,i,j;
    cout<<"Enter the no. of rows and columns of matrix A: ";
    cin>>m>>n;
    cout<<"enter the elements of array A : \n";

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Enter the no. of rows and columns of matrix B: ";
    cin>>p>>q;
    cout<<"enter the elements of array B : \n";
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            cin>>B[i][j];
        }
    }
    if(n==p)
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                C[i][j] = 0;
                for(int k = 0; k<n; k++)
                {
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }

        cout<<"Matrix C is : \n";
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
 
    }
    else
    {
        cout<<"Multiplication not possible.";
    }

}


                                            // FIND MAXIMUM NO OF # 


int main()
{
    char arr[50][50];
    int m, n, max = 0 , max1 = 0, max2 = 0;
    cout<<"enter the no 0f rows : ";
    cin>>m;
    cout<<"enter the no 0f columns : ";
    cin>>n;
    cout<<"enter the elements of array :\n";
    for(int i=0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        max1 = max2 = 0;
        for(int j = 0; j<n; j++)
        {
            if(i%2==0 && arr[i][j] == '#' && arr[i][j+1] == '#')
            {
                
                max1++;
            }
            else if(i%2!=0 && arr[i][j] == '#' && arr[i][j+1] == '#')
            {
                max2++;
            }
        }
        if(max1>max)
        {
            max = max1;
        }
        else if(max2>max)
        {
            max = max2;
        }
        
    }

    cout<<"the answer is : "<<max+1;
}

                      // Reverse the array

int main()
{
    int a[10],i,j,n,temp;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The given array is : \n");
    for(i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    j = n-1;
    i = 0;
    while(i<=j)
    {
       temp = a[i];
       a[i] = a[j];
       a[j] = temp;
       i++;
       j--;
    }
    printf("\nThe reversed array is : \n");
    for(i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}


                       // STRING PALINDROME          

int main()
{
    char a[10],b[10],n,i,j,c=0;
    printf("Enter the size of string : ");
    scanf("%d",&n);
    printf("Enter the characters of string : \n");
    for(i=0; i<n; i++)
    {
        scanf("%s",&a[i]);
        b[i] = a[i];
    }
    printf("The given string is : ");
    for(i = 0; i<n; i++)
    {
        printf("%c",a[i]);
    }
    j = 0;
    for(i=n-1; i>=0; i--)
    {
        if(a[i] != b[j])
        {
            c++;
        }
        j++;
    }
    if(c == 0)
    {
        printf("\npalindrome.");
    }
    else
    {
        printf("\nNot Palindrome");
    }  
}

                         // INTERSECTRION OF TWO SETS

int main()
{
    int A[10],B[10],C[20],i,j,m,n,k=0;
    printf("Enter the no of elements in set A : ");
    scanf("%d",&m);
    printf("enter the elements of set A : ");
    for(i=0; i<m; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the no of elements in set B : ");
    scanf("%d",&n);
    printf("enter the elements of set B : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(A[i]==B[j])
            {
                C[k] = A[i];
                k++;
            }
        }
    }

    printf("The intersection of A and B is : \n");
    for(i=0; i<k; i++)
    {
        printf("%d ",C[i]);
    }

}


int main()
{
    int A[10],B[10],C[20],i,j,m,n,k=0;
    printf("Enter the no of elements in set A : ");
    scanf("%d",&m);
    printf("enter the elements of set A : ");
    for(i=0; i<m; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the no of elements in set B : ");
    scanf("%d",&n);
    printf("enter the elements of set B : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<k; j++)
        {
            if(C[j]==A[i])
            {
                break;
            }
        }
        if(j == k)
        {
            C[k++] = A[i];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<k; j++)
        {
            if(C[j]==B[i])
            {
                break;
            }
        }
        if(j == k)
        {
            C[k++] = B[i];
        }
    }
    printf("The union of A and B is : \n");
    for(i=0; i<k; i++)
    {
        printf("%d ",C[i]);
    }
}


struct student
{
    char name[50];
    int roll;
    float marks[3];
};

int main()
{
    float sum = 0;
    struct student a;
    printf("Enter name : ");
    gets(a.name);
    printf("Enter roll no : ");
    scanf("%d",&a.roll);
    printf("enter marks : ");
    for(int i = 0; i<3; i++)
    {
        scanf("%f",&a.marks[i]);
    }

    printf("The name : %s\n roll no. : %d\n ",a.name,a.roll);
    for(int i = 0; i<3; i++)
    {
        printf("%f ",a.marks[i]);
        sum += a.marks[i];
    }
    sum /= 3;
    printf("The average is : %f",sum);


}

                                        // swapping of two numbers

void exchange(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    printf("After swaping The first no. is  : %d\n",a);
    printf("After swaping The second no. is  : %d",b);
}

int main()
{
    int a,b;
    printf("Enter the first no. : ");
    scanf("%d",&a);
    printf("Enter the second no. : ");
    scanf("%d",&b);
    exchange(a,b);
}


                    // Calculater 

int main()
{
    char o,ch;
    float a,b,c;
    printf("Enter the operation to perform : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+' :  printf("Enter the first number : ");
                    scanf("%f",&a);
                    printf("Enter the second number : ");
                    scanf("%f",&b);
                    c = a + b;
                    printf("The sum is : %f",c);
                    break;

        case '-' :  printf("Enter the first number : ");
                    scanf("%f",&a);
                    printf("Enter the second number : ");
                    scanf("%f",&b);
                    c = a - b;
                    printf("The subtration is : %f",c);
                    break;

        case '*' :  printf("Enter the first number : ");
                    scanf("%f",&a);
                    printf("Enter the second number : ");
                    scanf("%f",&b);
                    c = a * b;
                    printf("The multiplication is : %f",c);
                    break;

        case '/' :  printf("Enter the first number : ");
                    scanf("%f",&a);
                    printf("Enter the second number : ");
                    scanf("%f",&b);
                    c = a / b;
                    printf("The division is : %f",c);
                    break;

        default :   printf("Wrong choice");

    }
}



                            // Largest number in an matrix

int main()
{
    int A[5][5],i,j,m,n,max;
    printf("Enter the no. of rows in A : ");
    scanf("%d",&m);
    printf("Enter the no. of columns in A : ");
    scanf("%d",&n);
    printf("Enter the elements in A :\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    max = A[0][0];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(A[i][j]>max)
            {
                max = A[i][j];
            }
        }
    }
    printf("The maximum element is : %d",max);
}
*/
                         
                         // multiplication of diagonal elements

int main()
{
    int A[10][10],B[10],m,n,k=0,i,j,ans = 1;
    printf("Enter the no. of rows in A : ");
    scanf("%d",&m);
    printf("Enter the no. of columns in A : ");
    scanf("%d",&n);
    printf("Enter the elements in A :\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
            if(i==j)
            {
                B[k++] = A[i][i]; 
            }
        }
    }
    printf("The diagonal elements are : ");
    for(i=0; i<k; i++)
    {
        printf("%d ",B[i]);
        ans = ans * B[i];
    }
    printf("\nThe multiplication of diagonal elements is : %d",ans);

}