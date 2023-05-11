program zmienna_zew
   integer a,b,c
   real x
   common /blok1/ a,b,c

   x=0.0
   write(*,*) "Podaj liczby a,b,c"
   read(*,*)  a,b,c
   do 5 i=1,20
      x=x+0.5
      write(*,*) x,f(x)
5  continue
end program

function f(x)
   real x,f
   integer dd,ee,ff
   common /blok1/ dd,ee,ff
   f=dd*x*x + ee*x + ff
end function
