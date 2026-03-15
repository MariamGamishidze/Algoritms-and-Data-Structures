// loop optimization techniques
 /*1.Frequency reduction (code motion)- moving outside of the loop what is possible*/
  for (int i=0; i<100; i++ ){
    int x= sin (a); // sin(a) is computed 100 times, but it can be computed once and stored in a variable
    sum=sum+i;
  }
//--> we got:
    int x= sin (a); // computed once
    for (int i=0; i<100; i++ ){
        sum=sum+i;
    }
//--------------------------------------------------//
sum=0;
for (int i=0; i<n*n; i++){
    sum=sum+i;
}
//--> we got:
int sum =0;
int sq=n*n; // computed once
for (int i=0; i<sq; i++){
    sum=sum+i;
}
//--------------------------------------------------//
 int A[n], int a=3,int b=7;
    for (int i=0; i<n; i++){
        A[i]=a*i+b*i; /*we can compute a*i+b*i in O(1) time, but we are doing it n times,
         so we can optimize it by computing a*i and b*i once and then adding them together in each iteration*/
    }
    //--> we got:
    int A[n], int a=3,int b=7,  int sum=a+b; // computed once
    for (int i=0; i<n; i++){
        A[i]=sum*i; 
    }

//2. loop jamping(uniting the loops)
for (int i=0, i<100, i++){
    sum=sum+i;
}
for (int i=0, i<100, i++){
    m=m+10; 
}
//--> we got:
for (int i=0, i<100, i++){
    sum=sum+i;
    m=m+10; 
}
//3.Barrier- to reduce the number of logical operators inside the loop
// we are searching, if there is element 44 in the array:
int a[10]={7,-34,16,92,2,0,7,44,64,-56};
int x=44;
for (int i=0; i<10, i++){
    if (a[i]==x){
        printf("Found at index %d\n", i);
        break; 
    }
}
// we can optimize the loop when we give up one first of them(array range checking):
int a[10]={7,-34,16,92,2,0,7,44,64,-56};
int x=44;
a[0]=x;
i=10;
while (a[i]!=x){
    i--;
}
/* by set the valye we are looking for, to the end of the array, we are guaranteed that the loop will end before living the array range.
 after the loop end, the variable "i" gives us the naswer: if i>0, then the number was found in the array, but if "i" is equal to 0, this means,
  that is was hit only at the barrier, so it was not in the array we have searched in.*/

//other examples
for (i=0, i<n, i++){
    x=x+1; /*--> we can write it as x+=1, we dont need loop because we are just incrementing a variable */
}
//--------------------------------------------------------------//
for (int i=0, i<n, i++){
    sum=sum+n*n /* we can write it as sum+=n*n, we dont need loop
     because we are just incrementing a variable by the same value in each iteration*/
}
//--> we got:
int x=n*n*n; // computed once
sum+=x;