Class NestedTry{
public static void main(String args[]){
try{
       try{
                int[]numbers={1,2,3};
       System.out.println(numbers[5]);
        }
       catch(ArrayIndexOutOfBoundException e)
       {
               system.out.println(ArrayIndexOutOfBoundException e is caught!);
        }
        int result=divide(10,0);
        System.out.println(result);
        }
        catch(Arithmetic Exeption e)
        {
              system.out.println(ArithmeticException e caught!);
        }
}
public static int divide(int dividend,int divisor);
       return dividend/divisor;
}