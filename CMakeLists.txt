cmake_minimum_required(VERSION 3.1)
# This is a comment !

set(CMAKE_CXX_STANDARD 14)
project(prime_integer)
set(SRCS 	Sieve_Eratosthen.h
			Sieve_Eratosthen.cpp
	)
add_executable(prime_integer prime_integer.cpp ${SRCS})
