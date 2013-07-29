---
layout: post
title:  "Facebook Hackercup 2012"
date:   2013-07-29 12:42:33
categories: facebook hackercup
---

![Facebook Hackercup](/assets/images/hackercup.jpg "Facebook Hackercup")

Last year, I took part in Facebook hacker cup 2012. There were three brain storming questions presented and solving any one of them would qualify me but i was quite unlucky as i couldn't pass through the qualification round.

The problem that i tried solving was [Alphabet soup]({{ site.url }}/assets/files/alphabet-soup/alphabet-soup.pdf) where i was provided with the [file]({{ site.url }}/assets/files/alphabet-soup/alphabet_soup.txt) to check whether my program would produce the correct result. The result was to be submitted within six minutes time-frame and any programming language could be used so i used the c programming language. The program i had written to solve the problem was: <script src="https://gist.github.com/467f46c5cde7b2422ffe.js"> </script>

This program produced the [output]({{ site.url }}/assets/files/alphabet-soup/output-bad.txt).

Unfortunately, i was not able to proceed as my program was incorrect. The possible reason is that i have used string of length 1000 which can only hold 999 characters and the loop for(i=0;i<=7;i++) has no sense as the maximum number that hold\[\] can handle is 6. So, probably the right solution would be: {% gist 6103050 %}

This program produced the [output]({{ site.url }}/assets/files/alphabet-soup/output-correct.txt), which was the correct output.