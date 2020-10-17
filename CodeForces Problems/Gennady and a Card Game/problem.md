**Link to the Problem:** https://codeforces.com/problemset/problem/1097/A

**Description:**
Gennady owns a small hotel in the countryside where he lives a peaceful life. He loves to take long walks, watch sunsets and play cards with tourists staying in his hotel. His favorite game is called "Mau-Mau".To play Mau-Mau, you need a pack of 52 cards. Each card has a suit (Diamonds — D, Clubs — C, Spades — S, or Hearts — H), and a rank (2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K, or A).At the start of the game, there is one card on the table and you have five cards in your hand. You can play a card from your hand if and only if it has the same rank or the same suit as the card on the table.In order to check if you'd be a good playing partner, Gennady has prepared a task for you. Given the card on the table and five cards in your hand, check if you can play at least one card.

**Input**
The first line of the input contains one string which describes the card on the table. The second line contains five strings which describe the cards in your hand.Each string is two characters long. The first character denotes the rank and belongs to the set {2,3,4,5,6,7,8,9,T,J,Q,K,A}. The second character denotes the suit and belongs to the set {D,C,S,H}.
All the cards in the input are different.

**Output**
If it is possible to play a card from your hand, print one word "YES". Otherwise, print "NO".
You can print each letter in any case (upper or lower).


**Sample input**
AS
2H 4C TH JH AD

**Sample output**
YES

**Sample input**
2H
3D 4C AC KD AS

**Sample output**
NO

**Explanation**
In the first example, there is an Ace of Spades (AS) on the table. You can play an Ace of Diamonds (AD) because both of them are Aces.
In the second example, you cannot play any card.
