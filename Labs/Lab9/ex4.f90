program takie_samo_id
   real a,b,c,d

   a=1.
   b=2.
   c=5.
   d=7.
   write(*,*) a,b,c,d
   write(*,*) "Na zewnątrz funkcji a=",a
   write(*,*) suma(suma(a, b),suma(c,d))
end program

function suma(a,b)
   real a,b
   write(*,*) "Wewnątrz funkcji a=",a
   suma=a+b
end function
