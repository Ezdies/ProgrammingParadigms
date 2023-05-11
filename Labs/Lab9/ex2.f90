
      program zmienna_zew
         integer a,b,c
         real x

         x=0.0
         write(*,*) "Podaj liczby a,b,c"
         read(*,*)  a,b,c
         do 5 i=1,20
            x=x+0.5
            write(*,*) x,f(x,a,b,c)
    5    continue
      end program

      function f(x,a,b,c)
         real x,f
         integer a,b,c
         f=a*x*x + b*x + c
      end function
