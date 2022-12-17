void zad5()
{
int random =0;

srand (time(NULL));

while(random!=6){
random = rand() % 6 + 1;
//commit
printf("%d ",random);
}
}
