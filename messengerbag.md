---
layout: page
title: 메신저백
subtitle: 잡다한 것이 들어있다.
---

<div class ="messangerbag" align="center" style="margin-bottom:25px">
{% assign sorted = site.pages | sort: 'date'%}
  {% for file in sorted %}
    {% if file.path contains "messengerbag" %}
      {% assign filenameparts = file.url | split: "/" %}
      {% assign filename = filenameparts | last | replace: ".html","" %}
      {% if filename != "messengerbag" %}
        <li class="post-teaser" style="list-style:none"><a href="{{ file.url }}" title="{{ filename }}"> <span class="post-teaser__title">{{file.title}}</span></a> </li>
      {% endif %}
    {% endif %}
  {% endfor %}
</div> 