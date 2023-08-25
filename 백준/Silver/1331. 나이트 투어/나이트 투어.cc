#include <cstdio>
int main(void){
   char xpos[36]={};
   int ypos[36]={};
   bool right=true;
   for(int i=0; i<36; i++){
      scanf(" %c%1d",&xpos[i],&ypos[i]);
      if(i!=0){
         if((xpos[i-1]+2)==xpos[i] || (xpos[i-1]-2)==xpos[i])
         {
            if(ypos[i-1]+1==ypos[i] || ypos[i-1]-1==ypos[i])
               right = true;
            else{
               right = false;
               break;
            }
         }
         else if((xpos[i-1]+1)==xpos[i] || (xpos[i-1]-1)==xpos[i])
         {
            if(ypos[i-1]+2==ypos[i] || ypos[i-1]-2==ypos[i])
               right = true;
            else{
               right = false;
               break;
            }
         }
         else{
            right = false;
            break;
         }
      }
      if(i==35){
         if((xpos[35]+2)==xpos[0] || (xpos[35]-2)==xpos[0])
         {
            if(ypos[35]+1==ypos[0] || ypos[35]-1==ypos[0])
               right = true;
            else{
               right = false;
               break;
            }
         }
         else if((xpos[35]+1)==xpos[0] || (xpos[35]-1)==xpos[0])
         {
            if(ypos[35]+2==ypos[0] || ypos[35]-2==ypos[0])
               right = true;
            else{
               right = false;
               break;
            }
         }
         else{
            right = false;
         }
      }
      for(int j=0; j<i; j++){
    	if(xpos[j]==xpos[i] && ypos[j]==ypos[i]){
    		right = false;
    		break;
		}
	  }
	  if(!right)
	  	break;
   }
   if(right)
      printf("Valid");
   if(!right)
      printf("Invalid");
}