<h2><a href="https://codeforces.com/contest/440/problem/A" target="_blank" rel="noopener noreferrer">440A — Forgotten Episode</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 440A](https://codeforces.com/contest/440/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Forgotten Episode</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Polycarpus adores TV series. Right now he is ready to finish watching a season of a popular sitcom "Graph Theory". In total, the season has <span class="tex-span"><i>n</i></span> episodes, numbered with integers from <span class="tex-span">1</span> to <span class="tex-span"><i>n</i></span>.</p><p>Polycarpus watches episodes not one by one but in a random order. He has already watched all the episodes except for one. Which episode has Polycaprus forgotten to watch?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains integer <span class="tex-span"><i>n</i></span> <span class="tex-span">(2 ≤ <i>n</i> ≤ 100000)</span> — the number of episodes in a season. Assume that the episodes are numbered by integers from <span class="tex-span">1</span> to <span class="tex-span"><i>n</i></span>.</p><p>The second line contains <span class="tex-span"><i>n</i> - 1</span> integer <span class="tex-span"><i>a</i><sub class="lower-index">1</sub>, <i>a</i><sub class="lower-index">2</sub>, ..., <i>a</i><sub class="lower-index"><i>n</i></sub></span> <span class="tex-span">(1 ≤ <i>a</i><sub class="lower-index"><i>i</i></sub> ≤ <i>n</i>)</span> — the numbers of episodes that Polycarpus has watched. All values of <span class="tex-span"><i>a</i><sub class="lower-index"><i>i</i></sub></span> are distinct.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the number of the episode that Polycarpus hasn't watched.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00280110592481012" id="id0028438056232549014" class="input-output-copier">Copy</div></div><pre id="id00280110592481012">10<br>3 8 10 1 7 9 6 5 2<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009143667489423173" id="id0044408964099729575" class="input-output-copier">Copy</div></div><pre id="id009143667489423173">4<br></pre></div></div></div>