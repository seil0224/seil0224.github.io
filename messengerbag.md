---
layout: page
title: 메신저백
subtitle: 잡다한 것이 들어있다.
---

<div class ="messangerbag">
{% assign sorted = site.pages | sort: 'date'%}
  {% for file in sorted %}
    {% if file.path contains include.folder %}
      {% assign filenameparts = file.url | split: "/" %}
      {% assign filename = filenameparts | last | replace: ".html","" %}
      {% if filename != include.folder %}
        <a href="{{ file.url }}" title="{{ filename }}"> {{file.title}} ㅎㅎ </a> </div> 
      {% endif %}
    {% endif %}
  {% endfor %}
