#include <stdio.h>

int main()

{   const int username = 123;
    const int password = 123;
    int username_ip, password_ip;
    printf("Enter Username & Password\n");
    scanf("%d%d", &username_ip, &password_ip);
    if(username == username_ip && password == password_ip)
    {
        printf("User is Authorised");

    }
    else{
        printf("User is not Authorised");
    }
    return 0;
}
