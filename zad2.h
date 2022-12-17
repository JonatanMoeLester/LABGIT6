void zad2()
{
	int i,j,wiersze,liczba=1;
	printf("Wprowadz ilosc wierszy:\n");
	scanf("%d",&wiersze);
	printf("\n");
	for(i=1;i<=wiersze;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",liczba);
			liczba++;
		}
		printf("\n");
	}
	return 0;
}

//tak
