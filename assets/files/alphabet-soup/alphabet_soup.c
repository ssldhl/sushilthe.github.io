#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp,*fwp;
    int i=0,cas=0,j=1,ans=0,min=0,hloc=0,aloc=1,c=0,kloc=2,eloc=3,rloc=4,uloc=5,ploc=6,hold[7]={0,0,0,0,0,0,0,0};
    char s[1001];
    fp=fopen("d:\\alphabet_soup.txt","r");
    fwp=fopen("d:\\output.txt","w");
    fscanf(fp,"%d",&cas);
    while((i=fgetc(fp))!=EOF)
    {
            if(j>cas)
            {
                break;
            }
            fscanf(fp,"%[^\n]",s);
            for(i=0;i<=strlen(s);i++)
            {
                if(s[i]=='H')
                {
                    hold[hloc]++;
                }
                if(s[i]=='A')
                {
                    hold[aloc]++;
                }
                if(s[i]=='C')
                {
                    c++;
                }
                if(s[i]=='K')
                {
                    hold[kloc]++;
                }
                if(s[i]=='E')
                {
                    hold[eloc]++;
                }
                if(s[i]=='R')
                {
                    hold[rloc]++;
                }
                if(s[i]=='U')
                {
                    hold[uloc]++;
                }
                if(s[i]=='P')
                {
                    hold[ploc]++;
                }

            }
            ans=c/2;
            min=hold[0];
            for(i=0;i<7;i++)
            {
                if(min>hold[i])
                {
                    min=hold[i];
                }
            }
            if(min<=ans)
            {
                ans=min;
            }
            fprintf(fwp,"Case #%d: %d",j,ans);
            hold[hloc]=0;hold[aloc]=0;c=0;hold[kloc]=0;hold[eloc]=0;hold[rloc]=0;hold[uloc]=0;hold[ploc]=0;
            j++;
            fprintf(fwp,"\n");
    }
    fclose(fwp);
    fclose(fp);
    return (0);
}
