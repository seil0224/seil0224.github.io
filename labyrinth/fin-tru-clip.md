---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<style>
body{
  background-color: #000;
}

p{
  color: white;
}
</style>
<script>
  function sleep(ms){
  const wakeUpTime = Date.now() + ms;
  while (Date.now() < wakeUpTime) {}
  }
  function defa(){
    sleep(9000);
    location.href="/labyrinth/fin-ending1";
  }
</script>


<body>
<div style="text-align:center;">
<p>
<img src = "/images/hanged.gif">
<br>
<a href="/labyrinth/fin-ending1">다음</a>
</p>
</div>
</body>