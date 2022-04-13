
# include<stdio.h>
# include<math.h>
float x[5]={1,2,3,4,5};
float h[5]={2,1,3,4,5};
float y[10]; //output sequence
void main()
{ 
//input the two sequences, if of uneven lengths zero pad the smaller one such that both 

int N=5; // N=max of xlen and hlen//
int k,n,i;
for(n=0;n<N;n++) //outer loop for y[n] array
{ y[n]=0;
for(k=0;k<N;k++) //inner loop for computing each y[n] point
{ i=(n-k)%N; //compute the index modulo N
 if(i<0)
  //if index is <0, say x[-1], then convert to x[N-1]
    i=i+N;
    y[n]=y[n]+h[k]*x[i]; //compute output
    
} //end of inner for loop
printf("%f\t",y[n]); 
} //end of outer for loop
}