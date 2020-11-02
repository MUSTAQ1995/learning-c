void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
main()
{
	printf("Inside main\n");
}
void fun1()
{
	printf("Insidefun1\n");
}
void fun2()
{
	printf("INside fun2 \n");
}