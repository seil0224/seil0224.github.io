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
    sleep(500);
    location.href="/labyrinth/fin-endless";
  }
</script>


<body onload="defa()">
<div style="text-align : center;">
<img src = "/images/fear.png">
</div>
</body>