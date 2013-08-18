---
layout: post
title:  "Facebook Hackercup 2013"
date:   2013-08-07 19:22:20
categories: facebook hackercup
---

##Mistakes taught me how to win

Finally, after a year long break it was time for another hackercup. From last year challange i have learned many things and i hoped that this year i would at least be qualified.

This year 11,392 hackers participated in the qualification round out of which 10,169 hackers made their way up to the first round. I was one of them who made his way up the first round. My position turned out to be 7,935 which can be clearly seen in this [Scoreboard](https://www.facebook.com/hackercup/scoreboard?round=185564241586420&page=80 "Facebook hackercup 2013 scoreboard"). The problem that i solved was [Beautiful Strings]({{ site.url }}/assets/files/beautiful-strings/beautiful-strings.pdf) which was attempted by 10,697 contestants, and solved by 9,865.

I solved the problem using ruby programming language as i was learning the same and i wanted to try something new. I was presented with [input]({{ site.url }}/assets/files/beautiful-strings/beautiful_stringstxt.txt) and my solution to the problem: {% gist 6174628 %}

The main idea was to count the frequency of each letter, then assign the value 26 to the most frequent letter, 25 to the next, etc. If two letters are tied for most frequent, it doesn't matter which of them gets which value, since the sum will be the same.

This program produced the [output]({{ site.url }}/assets/files/beautiful-strings/output.txt) and i was able to proceed to the next round. I was quite excited after receiving the email from facebook regarding my success.

![congratulation email]({{ site.url }}/assets/images/congratulation-hackercup.png "Facebook Hackercup Congratulation Email")

However, i could not survive the next round, it was really a tough round where all three problems needs to be solved within the 24 hours time frame. Still i tried solving the [Card Game]({{ site.url }}/assets/files/card-game/card-game.pdf).

I tried solving it at the last hour as i knew quite well that i wasn't going to make to the next round, i was presented with [input]({{ site.url }}/assets/files/card-game/card_game.txt) and i tried solving it: <script src="https://gist.github.com/8db9522fdba750f96a7b.js"> </script>

Which could not produce the output as the input contained very large numbers and my program could not handle them. Unfortunately, i lost the six minutes time frame to upload the output file and was kicked out of the round.