program use_write
	implicit none
	!Declare two integers and assign values
	integer(kind=4)::i1=10, i2=200
	!Declare two floats and assign values
	real(kind=4)::fl1=1.11,fl2=2.2222

	!Print values
	write(6,'(a,i2, i4, a,f4.2,f7.4 )')'Two integers are: ',i1,i2, ' Two floats are: ', fl1,fl2
	stop
end program
