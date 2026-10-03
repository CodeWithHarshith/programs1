 #include<stdio.h>
 #include<string.h>

 void main(){
    char names[50][50];
    int n,i;
    printf("how many you want to enter: ");
    scanf("%d",&n);
    getchar();
    printf("enter %d names: ",n);
    for(i=0;i<n;i++){
        fgets(names[i],50,stdin);
        names[i][strcspn(names[i], "\n")] = '\0';     
    }
    printf("how many names you want to display : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%s\n",names[i]);
    }

 }