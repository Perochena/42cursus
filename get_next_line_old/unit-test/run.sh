# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/19 14:57:38 by tfleming          #+#    #+#              #
#    Updated: 2019/12/16 18:28:08 by ramrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "making get_next_line files..."
gcc -Wall -Wextra -Werror ../get_next_line.h -c ../get_next_line.c main.c
gcc -Wall -Wextra -Werror get_next_line.o main.o -o test_gnl
if [ ! -f test_gnl ]; then
        echo "failed compilation"
        exit
fi
echo "done making"
chmod u+x test_gnl


tester () {
	exec 3>&1 4>&2
	TIMING=$(( { time ./test_gnl $1 1>&3 2>&4; } 2>&1 ) | grep "real" | cut -f 2)
	#$(./test_gnl $1 1>&3 2>&4)
	exec 3>&- 4>&-
	echo "done testing \"$1\": "
	if (cmp --silent "$1" "this_out.txt")
	then
		echo "   ERROR: \"$1\" did not work"
	else
		echo "   OK"
	fi
	printf "done testing %-25s (%s)\n" "\"$1\"" "$TIMING"
}

echo "testing..."
touch "this_out.txt"
echo "================================================================================"

tester "4-one"
tester "4-one-n"
tester "4-two"
tester "4-three"
tester "4-five"
tester "8-one"
tester "8-one-n"
tester "8-two"
tester "8-three"
tester "8-five"
tester "16-one"
tester "16-one-n"
tester "16-two"
tester "16-three"
tester "16-five"

tester "hello"
tester "easy"
tester "this_is_a_file"
tester "main.c"
tester "empty"
tester "one_blank_line"
tester "empty_line_then_char"
tester "two_blank_lines"
tester "libft_catted"
tester "moulinetter"
tester "moulinetter2"
tester "long_line_easy"
tester "long_line"
tester "long_line_three"
tester "long_lines_same_length"
tester "factbook"
if [ -f "factbook20" ]; then
	tester "factbook20"
fi
if [ -f "factbook100" ]; then
	tester "factbook100"
fi
if [ -f "factbook500" ]; then
	tester "factbook500"
fi
./test_gnl "fake" "fd"

echo "================================================================================"
rm "this_out.txt"
echo "done testing"

rm "test_gnl"