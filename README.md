# Moore-Voting

## Q- Array is given to you. You have to find that element that occurs more then size/2 times.

example --> 3 2 1 1 1 3 3 3 3 <br>
Answer - 3<br>
Here size of array is <b> 9 </b> and 9/2 is 4. Here 3 occurs more than 4 times. 
<br>

## Working 
- As the algorithm include a word <b> VOTING </b> in it's name so it is simply related to voting. 
- In this Algorithm the first element has a <b>count(vote) = 1</b>. 
- If There are similar people (elements) with similar agenda than the counter(vote) will increment by 1.
- If not then counter(vote) will be decremented by 1.
- If counter(vote) becomes 0 then
  - counter(vote) value becomes 1.
  - now comparision will be started from the point where the counter(vote) value becomes 0.<br>
  - <b> [To understand this point read the program and solve it on paper.]</b>

#### COMPLEXITY
- Moore Voting - n
- Brute Force - n^2.
