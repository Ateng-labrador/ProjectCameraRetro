#ifndef INDEX_HTML_H
#define INDEX_HTML_H

const char index_html[] PROGMEM= R"rawliteral(
  <!DOCTYPE html>
  <html>
  <head>
    <title>ESP32-CAM</title>
    <style>
      body{
        background: #202020;
        color:white;
        text-align:center;
        font-family:Arial;
      }
      img{
        width:320px;
        border-radius:15px;
      }
      button{
        padding:10px 20px;
        margin-top:20px;
      }
    </style>
  </head>
  <body>
    <h1>ESP32-CAM Web Server</h1>
    <img src="/stream">
    <br>

    <button onclick="window.location='/download'">
    Take Picture
    </button>

  </body>
  </html>
)rawliteral";

#endif
