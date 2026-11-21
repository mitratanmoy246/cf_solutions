<h2><a href="https://codeforces.com/contest/2288/problem/D" target="_blank" rel="noopener noreferrer">2288D — Satori Komeiji and the Metro</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2288D](https://codeforces.com/contest/2288/problem/D) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">D. Satori Komeiji and the Metro</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>Deep beneath Gensokyo lies the Former Hell. Satori Komeiji, the mistress of the Palace of the Earth Spirits, has opened a new metro line leading from the surface entrance to the palace. The line has $$$n$$$ stations numbered $$$1, 2, \ldots, n$$$ in order. If a train stops at station $$$i$$$, it spends $$$a_i$$$ units of time there. Exactly two trains operate on this line.</p><p>For every pair of stations $$$u  \lt  v$$$, there exists at least one passenger who wants to travel from $$$u$$$ to $$$v$$$. The passenger behaves as follows.</p><ol> <li> If neither of the two trains stops at both $$$u$$$ and $$$v$$$, the passenger walks. The walking time is $$$10^{100}$$$. </li><li> Otherwise, the passenger chooses the train that gives the shorter travel time among all trains that stop at both $$$u$$$ and $$$v$$$. Suppose this chosen train stops at stations $$$p_0  \lt  p_1  \lt  \ldots  \lt  p_k$$$, with $$$p_l = u$$$ and $$$p_r = v$$$. Then the travel time is $$$\sum_{i=l}^{r} a_{p_i}$$$. </li></ol><p>Satori may decide, independently for the two trains, which stations each train stops at. She wants to minimize the maximum travel time over all passengers. Output that minimum possible value.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each case contains an integer $$$n$$$ ($$$2 \le n \le 10^5$$$).</p><p>The second line of each case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum possible maximum travel time.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009663296030060198" id="id00014355643146798602" class="input-output-copier">Copy</div></div><pre data-content="4
4
1 2 3 4
4
1 1 1 1
2
5 7
5
1 10 10 10 1
" id="id0009663296030060198"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 3 4</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">1 1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">5 7</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">1 10 10 10 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009562892970553535" id="id0005487947665697446" class="input-output-copier">Copy</div></div><pre data-content="7
3
12
22
" id="id009562892970553535"><div class="test-example-line test-example-line-odd test-example-line-1">7</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">12</div><div class="test-example-line test-example-line-even test-example-line-4">22</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first two test cases, an optimal arrangement is to make one train stop at every station and the other train stop only at stations $$$\{1, 2, 4\}$$$.</p><p>In the first test case, the maximum travel time is then $$$7$$$: it is attained by the passenger travelling from $$$3$$$ to $$$4$$$ on the first train and by the passenger travelling from $$$1$$$ to $$$4$$$ on the second train.</p><p>In the second test case, the maximum travel time is $$$3$$$, attained, for example, by the passenger travelling from $$$1$$$ to $$$3$$$ on the first train and by the passenger travelling from $$$1$$$ to $$$4$$$ on the second train.</p><p>In the third test case, the line has only two stations, so both trains stop at both of them, and the only passenger travels from $$$1$$$ to $$$2$$$: the answer is $$$a_1 + a_2 = 12$$$.</p></div>