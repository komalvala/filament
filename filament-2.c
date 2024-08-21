#include <stdio.h>
main() 
{
    char str[100];
    int frequency[256] = {0}; 
    int l = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[l] != '\0') {
        frequency[(int)str[l]]++;
        l++;
    }

  

    printf("Frequency of each letter:\n");
    for(int i=0;i<256; i++)
    {
    	if(frequency[i]>0)
    	{
    		printf("%c= %d\n",i,frequency[i]);
		}
	}

}