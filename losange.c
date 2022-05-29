int main() {
int i, y, lignes;
lignes=20;
i=1;
y=1;
while(y<lignes)
{
  while(i<=lignes-y)
  {
    printf("- ");
    i++;
  }
  i=1;
  while(i<=lignes)
  {
  printf("* ");
  i++;
  }
  printf("\n");
  y++;
  i=1;
}
  return 0; 
}