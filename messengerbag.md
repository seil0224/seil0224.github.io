---
layout: page
title: 메신저백
subtitle: 잡다한 것이 들어있다.
---

<div class ="messangerbag" align="center" style="margin-bottom:12px">
{% assign sorted = site.pages | sort: 'date'%}
  {% for file in sorted %}
    {% if file.path contains "messengerbag" %}
      {% assign filenameparts = file.url | split: "/" %}
      {% assign filename = filenameparts | last | replace: ".html","" %}
      {% if filename != "messengerbag" %}
        <a href="{{ file.url }}" title="{{ filename }}"> {{file.title}} </a> </div> 
      {% endif %}
    {% endif %}
  {% endfor %}
