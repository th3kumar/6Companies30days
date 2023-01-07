/*

Intution

Let us suppose n>1
Now let us suppose first person goes and sits on k position. Now we surely know that person(2 to k-1) will sit on their correct position(Because when person 2 to k-1 comes then they will find their place empty and will sit on their respective seats). Now k'th person has 3 choices

Sit on seat 1 in which case last person will surely sit on his seat.
Sit on last seat in which case last person will surely not sit on his seat.
Sit on some seat from k+1 to n-1.
Now if he takes option 3 then he will sit on some seat say "j". Now j will again have three options to sit.
This cycle will continue and every person can sit on first and last seat will equal probability. Hence the probability will be 0.5

Since in each part of the cycle there are only 2 possibilities to end the cycle(either the person sits at first or the last seat). So in a way, there is an equal chance that the person sits on first or last seat.

tc = o(1);
sc = o(1);

*/

class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        return (n == 1) ? 1 : 0.5 ;
    }
};