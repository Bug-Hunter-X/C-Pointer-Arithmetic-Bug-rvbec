int main() {
  int x = 10;
  int *ptr = &x; //Ensure the pointer points to a valid memory location
  *ptr = 20; 
  int y = *ptr; 
  printf("%d\n", y); //Added \n for proper output
  return 0;
}