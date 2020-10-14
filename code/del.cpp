<!DOCTYPE html>
<!-- saved from url=(0073)https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1 -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style id="ace-chrome">.ace-chrome .ace_gutter {background: #ebebeb;color: #333;overflow : hidden;}.ace-chrome .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-chrome {background-color: #FFFFFF;color: black;}.ace-chrome .ace_cursor {color: black;}.ace-chrome .ace_invisible {color: rgb(191, 191, 191);}.ace-chrome .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-chrome .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-chrome .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-chrome .ace_invalid {background-color: rgb(153, 0, 0);color: white;}.ace-chrome .ace_fold {}.ace-chrome .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-chrome .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-chrome .ace_support.ace_type,.ace-chrome .ace_support.ace_class.ace-chrome .ace_support.ace_other {color: rgb(109, 121, 222);}.ace-chrome .ace_variable.ace_parameter {font-style:italic;color:#FD971F;}.ace-chrome .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-chrome .ace_comment {color: #236e24;}.ace-chrome .ace_comment.ace_doc {color: #236e24;}.ace-chrome .ace_comment.ace_doc.ace_tag {color: #236e24;}.ace-chrome .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-chrome .ace_variable {color: rgb(49, 132, 149);}.ace-chrome .ace_xml-pe {color: rgb(104, 104, 91);}.ace-chrome .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-chrome .ace_heading {color: rgb(12, 7, 255);}.ace-chrome .ace_list {color:rgb(185, 6, 144);}.ace-chrome .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-chrome .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-chrome .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-chrome .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-chrome .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-chrome .ace_gutter-active-line {background-color : #dcdcdc;}.ace-chrome .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-chrome .ace_storage,.ace-chrome .ace_keyword,.ace-chrome .ace_meta.ace_tag {color: rgb(147, 15, 128);}.ace-chrome .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-chrome .ace_string {color: #1A1AA6;}.ace-chrome .ace_entity.ace_other.ace_attribute-name {color: #994409;}.ace-chrome .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}
/*# sourceURL=ace/css/ace-chrome */</style><style id="autocompletion.css">.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #CAD6FA;    z-index: 1;}.ace_dark.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #3a674e;}.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid #abbffe;    margin-top: -1px;    background: rgba(233,233,253,0.4);    position: absolute;    z-index: 2;}.ace_dark.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid rgba(109, 150, 13, 0.8);    background: rgba(58, 103, 78, 0.62);}.ace_completion-meta {    opacity: 0.5;    margin: 0.9em;}.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #2d69c7;}.ace_dark.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #93ca12;}.ace_editor.ace_autocomplete {    width: 300px;    z-index: 200000;    border: 1px lightgray solid;    position: fixed;    box-shadow: 2px 3px 5px rgba(0,0,0,.2);    line-height: 1.4;    background: #fefefe;    color: #111;}.ace_dark.ace_editor.ace_autocomplete {    border: 1px #484747 solid;    box-shadow: 2px 3px 5px rgba(0, 0, 0, 0.51);    line-height: 1.4;    background: #25282c;    color: #c1c1c1;}
/*# sourceURL=ace/css/autocompletion.css */</style><style>.ace_snippet-marker {    -moz-box-sizing: border-box;    box-sizing: border-box;    background: rgba(194, 193, 208, 0.09);    border: 1px dotted rgba(211, 208, 235, 0.62);    position: absolute;}</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style><style id="ace-tm">.ace-tm .ace_gutter {background: #f0f0f0;color: #333;}.ace-tm .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-tm .ace_fold {background-color: #6B72E6;}.ace-tm {background-color: #FFFFFF;color: black;}.ace-tm .ace_cursor {color: black;}.ace-tm .ace_invisible {color: rgb(191, 191, 191);}.ace-tm .ace_storage,.ace-tm .ace_keyword {color: blue;}.ace-tm .ace_constant {color: rgb(197, 6, 11);}.ace-tm .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-tm .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-tm .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-tm .ace_invalid {background-color: rgba(255, 0, 0, 0.1);color: red;}.ace-tm .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-tm .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-tm .ace_support.ace_type,.ace-tm .ace_support.ace_class {color: rgb(109, 121, 222);}.ace-tm .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-tm .ace_string {color: rgb(3, 106, 7);}.ace-tm .ace_comment {color: rgb(76, 136, 107);}.ace-tm .ace_comment.ace_doc {color: rgb(0, 102, 255);}.ace-tm .ace_comment.ace_doc.ace_tag {color: rgb(128, 159, 191);}.ace-tm .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-tm .ace_variable {color: rgb(49, 132, 149);}.ace-tm .ace_xml-pe {color: rgb(104, 104, 91);}.ace-tm .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-tm .ace_heading {color: rgb(12, 7, 255);}.ace-tm .ace_list {color:rgb(185, 6, 144);}.ace-tm .ace_meta.ace_tag {color:rgb(0, 22, 142);}.ace-tm .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-tm .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-tm.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;}.ace-tm .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-tm .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-tm .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-tm .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-tm .ace_gutter-active-line {background-color : #dcdcdc;}.ace-tm .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-tm .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}
/*# sourceURL=ace/css/ace-tm */</style><style id="ace_editor.css">.ace_br1 {border-top-left-radius    : 3px;}.ace_br2 {border-top-right-radius   : 3px;}.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}.ace_br4 {border-bottom-right-radius: 3px;}.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}.ace_br8 {border-bottom-left-radius : 3px;}.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}.ace_editor {position: relative;overflow: hidden;font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;direction: ltr;text-align: left;-webkit-tap-highlight-color: rgba(0, 0, 0, 0);}.ace_scroller {position: absolute;overflow: hidden;top: 0;bottom: 0;background-color: inherit;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;cursor: text;}.ace_content {position: absolute;box-sizing: border-box;min-width: 100%;contain: style size layout;}.ace_dragging .ace_scroller:before{position: absolute;top: 0;left: 0;right: 0;bottom: 0;content: '';background: rgba(250, 250, 250, 0.01);z-index: 1000;}.ace_dragging.ace_dark .ace_scroller:before{background: rgba(0, 0, 0, 0.01);}.ace_selecting, .ace_selecting * {cursor: text !important;}.ace_gutter {position: absolute;overflow : hidden;width: auto;top: 0;bottom: 0;left: 0;cursor: default;z-index: 4;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;contain: style size layout;}.ace_gutter-active-line {position: absolute;left: 0;right: 0;}.ace_scroller.ace_scroll-left {box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;}.ace_gutter-cell {position: absolute;top: 0;left: 0;right: 0;padding-left: 19px;padding-right: 6px;background-repeat: no-repeat;}.ace_gutter-cell.ace_error {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: 2px center;}.ace_gutter-cell.ace_warning {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");background-position: 2px center;}.ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");background-position: 2px center;}.ace_dark .ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");}.ace_scrollbar {contain: strict;position: absolute;right: 0;bottom: 0;z-index: 6;}.ace_scrollbar-inner {position: absolute;cursor: text;left: 0;top: 0;}.ace_scrollbar-v{overflow-x: hidden;overflow-y: scroll;top: 0;}.ace_scrollbar-h {overflow-x: scroll;overflow-y: hidden;left: 0;}.ace_print-margin {position: absolute;height: 100%;}.ace_text-input {position: absolute;z-index: 0;width: 0.5em;height: 1em;opacity: 0;background: transparent;-moz-appearance: none;appearance: none;border: none;resize: none;outline: none;overflow: hidden;font: inherit;padding: 0 1px;margin: 0 -1px;contain: strict;-ms-user-select: text;-moz-user-select: text;-webkit-user-select: text;user-select: text;white-space: pre!important;}.ace_text-input.ace_composition {background: transparent;color: inherit;z-index: 1000;opacity: 1;}.ace_composition_placeholder { color: transparent }.ace_composition_marker { border-bottom: 1px solid;position: absolute;border-radius: 0;margin-top: 1px;}[ace_nocontext=true] {transform: none!important;filter: none!important;perspective: none!important;clip-path: none!important;mask : none!important;contain: none!important;perspective: none!important;mix-blend-mode: initial!important;z-index: auto;}.ace_layer {z-index: 1;position: absolute;overflow: hidden;word-wrap: normal;white-space: pre;height: 100%;width: 100%;box-sizing: border-box;pointer-events: none;}.ace_gutter-layer {position: relative;width: auto;text-align: right;pointer-events: auto;height: 1000000px;contain: style size layout;}.ace_text-layer {font: inherit !important;position: absolute;height: 1000000px;width: 1000000px;contain: style size layout;}.ace_text-layer > .ace_line, .ace_text-layer > .ace_line_group {contain: style size layout;position: absolute;top: 0;left: 0;right: 0;}.ace_hidpi .ace_text-layer,.ace_hidpi .ace_gutter-layer,.ace_hidpi .ace_content,.ace_hidpi .ace_gutter {contain: strict;will-change: transform;}.ace_hidpi .ace_text-layer > .ace_line, .ace_hidpi .ace_text-layer > .ace_line_group {contain: strict;}.ace_cjk {display: inline-block;text-align: center;}.ace_cursor-layer {z-index: 4;}.ace_cursor {z-index: 4;position: absolute;box-sizing: border-box;border-left: 2px solid;transform: translatez(0);}.ace_multiselect .ace_cursor {border-left-width: 1px;}.ace_slim-cursors .ace_cursor {border-left-width: 1px;}.ace_overwrite-cursors .ace_cursor {border-left-width: 0;border-bottom: 1px solid;}.ace_hidden-cursors .ace_cursor {opacity: 0.2;}.ace_smooth-blinking .ace_cursor {transition: opacity 0.18s;}.ace_animate-blinking .ace_cursor {animation-duration: 1000ms;animation-timing-function: step-end;animation-name: blink-ace-animate;animation-iteration-count: infinite;}.ace_animate-blinking.ace_smooth-blinking .ace_cursor {animation-duration: 1000ms;animation-timing-function: ease-in-out;animation-name: blink-ace-animate-smooth;}@keyframes blink-ace-animate {from, to { opacity: 1; }60% { opacity: 0; }}@keyframes blink-ace-animate-smooth {from, to { opacity: 1; }45% { opacity: 1; }60% { opacity: 0; }85% { opacity: 0; }}.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {position: absolute;z-index: 3;}.ace_marker-layer .ace_selection {position: absolute;z-index: 5;}.ace_marker-layer .ace_bracket {position: absolute;z-index: 6;}.ace_marker-layer .ace_active-line {position: absolute;z-index: 2;}.ace_marker-layer .ace_selected-word {position: absolute;z-index: 4;box-sizing: border-box;}.ace_line .ace_fold {box-sizing: border-box;display: inline-block;height: 11px;margin-top: -2px;vertical-align: middle;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");background-repeat: no-repeat, repeat-x;background-position: center center, top left;color: transparent;border: 1px solid black;border-radius: 2px;cursor: pointer;pointer-events: auto;}.ace_dark .ace_fold {}.ace_fold:hover{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");}.ace_tooltip {background-color: #FFF;background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));border: 1px solid gray;border-radius: 1px;box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);color: black;max-width: 100%;padding: 3px 4px;position: fixed;z-index: 999999;box-sizing: border-box;cursor: default;white-space: pre;word-wrap: break-word;line-height: normal;font-style: normal;font-weight: normal;letter-spacing: normal;pointer-events: none;}.ace_folding-enabled > .ace_gutter-cell {padding-right: 13px;}.ace_fold-widget {box-sizing: border-box;margin: 0 -12px 0 1px;display: none;width: 11px;vertical-align: top;background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: center;border-radius: 3px;border: 1px solid transparent;cursor: pointer;}.ace_folding-enabled .ace_fold-widget {display: inline-block;   }.ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");}.ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");}.ace_fold-widget:hover {border: 1px solid rgba(0, 0, 0, 0.3);background-color: rgba(255, 255, 255, 0.2);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);}.ace_fold-widget:active {border: 1px solid rgba(0, 0, 0, 0.4);background-color: rgba(0, 0, 0, 0.05);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);}.ace_dark .ace_fold-widget {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");}.ace_dark .ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget:hover {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);background-color: rgba(255, 255, 255, 0.1);}.ace_dark .ace_fold-widget:active {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);}.ace_inline_button {border: 1px solid lightgray;display: inline-block;margin: -1px 8px;padding: 0 5px;pointer-events: auto;cursor: pointer;}.ace_inline_button:hover {border-color: gray;background: rgba(200,200,200,0.2);display: inline-block;pointer-events: auto;}.ace_fold-widget.ace_invalid {background-color: #FFB4B4;border-color: #DE5555;}.ace_fade-fold-widgets .ace_fold-widget {transition: opacity 0.4s ease 0.05s;opacity: 0;}.ace_fade-fold-widgets:hover .ace_fold-widget {transition: opacity 0.05s ease 0.05s;opacity:1;}.ace_underline {text-decoration: underline;}.ace_bold {font-weight: bold;}.ace_nobold .ace_bold {font-weight: normal;}.ace_italic {font-style: italic;}.ace_error-marker {background-color: rgba(255, 0, 0,0.2);position: absolute;z-index: 9;}.ace_highlight-marker {background-color: rgba(255, 255, 0,0.2);position: absolute;z-index: 8;}
/*# sourceURL=ace/css/ace_editor.css */</style>
        <title>Delete without head pointer | Practice | GeeksforGeeks</title>
        <link rel="icon" href="https://media.geeksforgeeks.org/img-practice/gfgiconn.ico" type="image/x-icon">
          
        
        <meta name="keywords" content="programming,coding,online, code online, online judge, practice, run code, test, expected outcome, programming competition, programming contest, online programming, online computer programming">
        <meta name="description" content="You are given a pointer/ reference to the node which is to be deleted from the&amp;nbsp;linked list of N&amp;nbsp;nodes. The task is to delete the node. Pointer/ reference to head node is not given.&amp;nbsp;

Note: No head reference is given to you.

Input  ">
        <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
        <meta property="og:image" content="https://media.geeksforgeeks.org/img-practice/gfg_200X200.png">
        <meta property="og:image:type" content="image/png">
        <meta property="og:image:width" content="200">
        <meta property="og:image:height" content="200">

        <iframe src="javascript:void(0)" title="" style="width: 0px; height: 0px; border: 0px; display: none;" src="./del_files/saved_resource(1).html"></iframe><script src="./del_files/osd.js"></script><script async="" src="./del_files/async-ads.js"></script><script type="text/javascript" async="" src="./del_files/f(6).txt"></script><script src="./del_files/pubads_impl_rendering_2019092602.js"></script><script src="./del_files/inferredEvents.js" async=""></script><script src="./del_files/286059565445921" async=""></script><script src="./del_files/sdk.js" async="" crossorigin="anonymous"></script><script type="text/javascript" async="" src="./del_files/f(7).txt"></script><script id="facebook-jssdk" src="./del_files/sdk(1).js"></script><script async="" src="./del_files/fbevents.js"></script><script async="" src="./del_files/analytics.js"></script><script src="./del_files/jquery.min.js"></script>
        <script src="./del_files/bootstrap.min.js"></script>
        <link rel="stylesheet" href="./del_files/bootstrap.min.css">
        <link rel="stylesheet" type="text/css" href="./del_files/style-2.8.css">
        <script src="./del_files/header-min.js"></script>        
        <link rel="stylesheet" type="text/css" href="./del_files/header.light.css">
        <link rel="stylesheet" class="mediaquerydependent" data-media="only screen and (max-width: 768px)" type="text/css" data-href="https://cdnpractice.geeksforgeeks.org/css/sidr.min.css">
        <link rel="stylesheet" type="text/css" href="./del_files/animate.min.css" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
        <link href="./del_files/icon" rel="stylesheet" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;"> 
        <link href="./del_files/css" rel="stylesheet" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;"> 
        <link rel="stylesheet" href="./del_files/all.css" integrity="sha384-DNOHZ68U8hZfKXOrtjWvjxusGo9WQnrNx2sqG0tfsghAvtVlRW3tvkXWZh58N9jp" crossorigin="anonymous" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;"> 
        <link href="./del_files/font-awesome.min.css" rel="stylesheet" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
        <link href="./del_files/common.css" rel="stylesheet" type="text/css">
        <link rel="stylesheet" href="./del_files/bootstrap-select.min.css">
        <link rel="stylesheet" href="./del_files/jquery.datetimepicker.min.css">
    <script src="./del_files/jquery.datetimepicker.full.min.js"></script>  
        <script src="./del_files/bootstrap-select.min.js"></script>        
        <meta property="og:title" content="Delete without head pointer | Practice | GeeksforGeeks ">
<script>document.title="Delete without head pointer | Practice | GeeksforGeeks";var def_lang ="";</script>        <link rel="canonical" href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1">        <script> 
            (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
            (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
            m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
            })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

            ga('create', 'UA-71763465-1', 'auto');
            ga('send', 'pageview');
        </script>

        <script src="./del_files/commonJs.js"></script>
        <script async="async" src="./del_files/gpt.js"></script>
        <script>
          var googletag = googletag || {};
          googletag.cmd = googletag.cmd || [];
        </script>
        <script type="text/javascript">
        var gptAdSlots = [];
            googletag.cmd.push(function() {
        var verticalLT270Sizes = googletag.sizeMapping().addSize([1500, 768], [[250, 250], [240, 400], [160, 600], [180, 150], [120, 600], [200, 200],[234, 60]])
                                .addSize([1025, 300], [[88,31], [120,20], [120,30], [120,240], [120,600], [160,600]])
                                .addSize([0, 0],[[88,31], [120,20], [120,30], [120,240],[120, 600]]).build();

        var verticalLT337Sizes = googletag.sizeMapping()
                                .addSize([1200, 768], [[88,31], [120,20], [120,30], [120,60], [120,90], [120,240], [120,600], [125,125], [160,600], [168,28], [168,42], [180,150], [200,200], [200,446], [216,36], [216,54], [220,90], [234,60], [240,133], [240,400], [250,250], [250,360], [292,30], [300,31], [300,50], [300,75], [300,100], [300,250], [300,600], [300,1050], [320,50], [320,100], [320,480], [336,280]])
                                .addSize([728, 300], [[88,31], [120,20], [120,30], [120,60], [120,90], [120,240], [120,600], [125,125], [160,600], [168,28], [168,42], [180,150], [200,200], [200,446], [216,36], [216,54], [220,90], [234,60], [240,133], [240,400], [250,250]])
                                .addSize([0, 0], [160,600]).build();

        gptAdSlots[0] = googletag.defineSlot('/27823234/Practice/Vertical_W<270', [[250, 250], [240, 400], [160, 600], [180, 150], [120, 600], [200, 200],[234, 60]], 'div-gpt-ad-1523612657686-0').defineSizeMapping(verticalLT270Sizes).addService(googletag.pubads());
        gptAdSlots[1] = googletag.defineSlot('/27823234/Practice/Vertical_W<337', [[88,31], [120,20], [120,30], [120,60], [120,90], [120,240], [120,600], [125,125], [160,600], [168,28], [168,42], [180,150], [200,200], [200,446], [216,36], [216,54], [220,90], [234,60], [240,133], [240,400], [250,250], [250,360], [292,30], [300,31], [300,50], [300,75], [300,100], [300,250], [300,600], [300,1050], [320,50], [320,100], [320,480], [336,280]], 'div-gpt-ad-1523612657686-1').defineSizeMapping(verticalLT337Sizes).addService(googletag.pubads());
        gptAdSlots[1] = googletag.defineSlot('/27823234/Practice/Vertical_W<337', [[88,31], [120,20], [120,30], [120,60], [120,90], [120,240], [120,600], [125,125], [160,600], [168,28], [168,42], [180,150], [200,200], [200,446], [216,36], [216,54], [220,90], [234,60], [240,133], [240,400], [250,250], [250,360], [292,30], [300,31], [300,50], [300,75], [300,100], [300,250], [300,600], [300,1050], [320,50], [320,100], [320,480], [336,280]], 'div-gpt-ad-1523612657686-2').defineSizeMapping(verticalLT337Sizes).addService(googletag.pubads());
        googletag.pubads().enableSingleRequest();
        googletag.pubads().collapseEmptyDivs();
        googletag.enableServices();
        });
        </script>


        <!-- Global site tag (gtag.js) - Google Ads: 796001856 --> <script async="" src="./del_files/js"></script> <script> window.dataLayer = window.dataLayer || []; function gtag(){dataLayer.push(arguments);} gtag('js', new Date()); gtag('config', 'AW-796001856'); </script> 
                <link rel="stylesheet" type="text/css" href="./del_files/cookieconsent.min.css">
        <script src="./del_files/cookieconsent.min.js"></script>
        <script>

        (function(){
            var queries = document.querySelectorAll('.mediaquerydependent'),
            all = queries.length,
            cur = null,
            attr = null;
            while (all--) {
              cur = queries[all];
              if (cur.dataset.media &&
                  window.matchMedia(cur.dataset.media).matches) {
                      for (attr in cur.dataset) {
                          if (attr !== 'media') {
                              cur.setAttribute(attr, cur.dataset[attr]);
                          }
                      }
                  }
              }
          }());

        window.addEventListener("load", function(){
            window.cookieconsent.initialise({
                "palette": {
                    "popup": {
                      "background": "#3c404d",
                      "text": "#d6d6d6",
                      "font-size": "12px"
                    },
                    "button": {
                      "background": "#8bed4f"
                    }
                },
                "theme": "classic",
                    onStatusChange: function(status) {
                    
                    },
                    "content": {
                    "message": "We use cookies to ensure you have the best browsing experience on our website. By using our site, you acknowledge that you have read and understood our <a href=\"https://www.geeksforgeeks.org/cookie-policy/\" class=\"cc-link\" target=\"_blank\">Cookie Policy</a> & ",
                    "link": "Privacy Policy",
                    "href": "https://www.geeksforgeeks.org/privacy-policy/"
                    },
                cookie: {
                    name : "geeksforgeeks_consent_status",
                }
            })
        });  
        </script>

        <!-- automatically pop-up login modal -->
        <script>
            function openGuestLoginModal() {
               if (jQuery('.header--sidebar').find('.header--nav__item').find('.login-modal-btn').length) {
                    function openModalforGuests() {
                        setTimeout(function() {
                          jQuery('.header--sidebar').find('.header--nav__item').find('.login-modal-btn').trigger('click');
                          if(jQuery('body').hasClass('.sidr-open')) {
                            jQuery('#header--menu__icon').trigger('click');
                          }
                        }, 5000)
                    }

                    function setCookie() {
                        var guest = document.cookie.indexOf('guest=');
                        if (guest == -1) {
                            date = new Date();
                            date.setTime(date.getTime() + (2 * 24 * 60 * 60 * 1000));
                            expires = "; expires=" + date.toGMTString();
                            document.cookie = "guest=yes" + expires + "; path=/";
                            openModalforGuests()
                        }
                    }
                    var callGuestModal = !1;
                    if (localStorage.getItem('guestPageCount')) {
                        localStorage.setItem('guestPageCount', parseInt(localStorage.getItem('guestPageCount')) + 1);
                            if (parseInt(localStorage.getItem('guestPageCount')) > 2) {
                                callGuestModal = !0;
                                localStorage.removeItem('guestPageCount')
                            }
                    } else if (!localStorage.getItem('guestPageCount') && document.cookie.indexOf('guest=') == -1) {
                        localStorage.setItem('guestPageCount', 1)
                    }
                    if (callGuestModal) {
                        setCookie()
                    }
                    if (!callGuestModal) {
                        setTimeout(function() {
                            setCookie()
                        }, 20000)
                    }
                }
            }
            
            $(document).ready(function() {
                openGuestLoginModal();
                $('[data-toggle="popover"]').popover(); 
            })
    
            $('a > #popover--button').on('click', function(e) {e.preventDefault(); return true;});
        </script>

        <!-- Facebook Pixel Code -->
        <script>
          !function(f,b,e,v,n,t,s)
          {if(f.fbq)return;n=f.fbq=function(){n.callMethod?
          n.callMethod.apply(n,arguments):n.queue.push(arguments)};
          if(!f._fbq)f._fbq=n;n.push=n;n.loaded=!0;n.version='2.0';
          n.queue=[];t=b.createElement(e);t.async=!0;
          t.src=v;s=b.getElementsByTagName(e)[0];
          s.parentNode.insertBefore(t,s)}(window, document,'script',
          'https://connect.facebook.net/en_US/fbevents.js');
          fbq('init', '286059565445921');
          fbq('track', 'PageView');
        </script>
        <noscript><img height="1" width="1" style="display:none"
          src="https://www.facebook.com/tr?id=286059565445921&ev=PageView&noscript=1"
        /></noscript>
        <!-- End Facebook Pixel Code -->

    
  <script>(window.BOOMR_mq=window.BOOMR_mq||[]).push(["addVar",{"rua.upush":"false","rua.cpush":"true","rua.upre":"false","rua.cpre":"false","rua.uprl":"false","rua.cprl":"false","rua.cprf":"false","rua.trans":"SJ-a4a0942b-c347-4e0b-9289-23b3aae66c33","rua.cook":"false","rua.ims":"false","rua.ufprl":"false","rua.cfprl":"false"}]);</script>
  <script>!function(){function o(n,i){if(n&&i)for(var r in i)i.hasOwnProperty(r)&&(void 0===n[r]?n[r]=i[r]:n[r].constructor===Object&&i[r].constructor===Object?o(n[r],i[r]):n[r]=i[r])}try{var n=decodeURIComponent("");if(n.length>0&&window.JSON&&"function"==typeof window.JSON.parse){var i=JSON.parse(n);void 0!==window.BOOMR_config?o(window.BOOMR_config,i):window.BOOMR_config=i}}catch(r){window.console&&"function"==typeof window.console.error&&console.error("mPulse: Could not parse configuration",r)}}();</script>
  <script>!function(a){var e="https://s.go-mpulse.net/boomerang/",t="addEventListener";if("False"=="True")a.BOOMR_config=a.BOOMR_config||{},a.BOOMR_config.PageParams=a.BOOMR_config.PageParams||{},a.BOOMR_config.PageParams.pci=!0,e="https://s2.go-mpulse.net/boomerang/";if(function(){function n(e){a.BOOMR_onload=e&&e.timeStamp||(new Date).getTime()}if(!a.BOOMR||!a.BOOMR.version&&!a.BOOMR.snippetExecuted){a.BOOMR=a.BOOMR||{},a.BOOMR.snippetExecuted=!0;var i,o,r,O=document.createElement("iframe");if(a[t])a[t]("load",n,!1);else if(a.attachEvent)a.attachEvent("onload",n);O.src="javascript:void(0)",O.title="",O.role="presentation",(O.frameElement||O).style.cssText="width:0;height:0;border:0;display:none;",r=document.getElementsByTagName("script")[0],r.parentNode.insertBefore(O,r);try{o=O.contentWindow.document}catch(_){i=document.domain,O.src="javascript:var d=document.open();d.domain='"+i+"';void(0);",o=O.contentWindow.document}o.open()._l=function(){var a=this.createElement("script");if(i)this.domain=i;a.id="boomr-if-as",a.src=e+"DRC3M-XVBSV-FUQK8-83JJR-8KUMW",BOOMR_lstart=(new Date).getTime(),this.body.appendChild(a)},o.write("<bo"+'dy onload="document._l();">'),o.close()}}(),"".length>0)if(a&&"performance"in a&&a.performance&&"function"==typeof a.performance.setResourceTimingBufferSize)a.performance.setResourceTimingBufferSize();!function(){if(BOOMR=a.BOOMR||{},BOOMR.plugins=BOOMR.plugins||{},!BOOMR.plugins.AK){var e="true"=="true"?1:0,t="",n="m7rmwbqxeaomsxmvap7q-f-cd23ec5f1-clientnsv4-s.akamaihd.net",i={"ak.v":23,"ak.cp":"855609","ak.ai":parseInt("547329",10),"ak.ol":"0","ak.cr":44,"ak.ipv":4,"ak.proto":"h2","ak.rid":"13d25edc","ak.r":30002,"ak.a2":e,"ak.m":"dscr","ak.n":"ff","ak.bpcip":"103.226.203.0","ak.cport":43818,"ak.gh":"23.32.28.197","ak.quicv":"","ak.tlsv":"tls1.2","ak.0rtt":"","ak.csrc":"-","ak.acc":"","ak.t":"1570046975"};if(""!==t)i["ak.ruds"]=t;var o={i:!1,av:function(e){var t="http.initiator";if(e&&(!e[t]||"spa_hard"===e[t]))i["ak.feo"]=void 0!==a.aFeoApplied?1:0,BOOMR.addVar(i)},rv:function(){var a=["ak.bpcip","ak.cport","ak.cr","ak.csrc","ak.gh","ak.ipv","ak.m","ak.n","ak.ol","ak.proto","ak.quicv","ak.tlsv","ak.0rtt","ak.r","ak.acc","ak.t"];BOOMR.removeVar(a)}};BOOMR.plugins.AK={akVars:i,akDNSPreFetchDomain:n,init:function(){if(!o.i){var a=BOOMR.subscribe;a("before_beacon",o.av,null,null),a("onbeacon",o.rv,null,null),o.i=!0}return this},is_complete:function(){return!0}}}}()}(window);</script><script>
        if ( $(window).width() < 769) {      
           //Add your javascript for small screens here  
           document.write('<script type="text/javascript" src="https://cdnpractice.geeksforgeeks.org/js/sidr.min.js"><\/script>');
        } 
    </script><link rel="preload" href="./del_files/f(8).txt" as="script"><script type="text/javascript" src="./del_files/f(8).txt"></script><link rel="preload" href="./del_files/f(9).txt" as="script"><script type="text/javascript" src="./del_files/f(9).txt"></script><script src="./del_files/pubads_impl_2019092602.js" async=""></script><script src="./del_files/cse_element__en.js" type="text/javascript"></script><link type="text/css" rel="stylesheet" href="./del_files/default+en.css"><link type="text/css" rel="stylesheet" href="./del_files/default.css"><link rel="prefetch" href="https://tpc.googlesyndication.com/safeframe/1-0-35/html/container.html"><link rel="stylesheet" type="text/css" href="./del_files/prettify.css"><script src="./del_files/theme-chrome.js"></script><script src="./del_files/mode-c_cpp.js"></script><style type="text/css">.gsc-control-cse{font-family:arial, sans-serif}.gsc-control-cse .gsc-table-result{font-family:arial, sans-serif}.gsc-refinementsGradient{background:linear-gradient(to left,rgba(233,233,233,1),rgba(233,233,233,0))}.gsc-control-cse{border-color:#FFFFFF;background-color:#FFFFFF}input.gsc-input,.gsc-input-box,.gsc-input-box-hover,.gsc-input-box-focus{border-color:#4CB96B}.gsc-search-button-v2,.gsc-search-button-v2:hover,.gsc-search-button-v2:focus{border-color:#4CB96B;background-color:#4CB96B;background-image:none;filter:none}.gsc-search-button-v2 svg{fill:#FFFFFF}.gsc-tabHeader.gsc-tabhActive,.gsc-refinementHeader.gsc-refinementhActive{color:#4CB96B;border-color:#4CB96B;background-color:#FFFFFF}.gsc-tabHeader.gsc-tabhInactive,.gsc-refinementHeader.gsc-refinementhInactive{color:#4CB96B;border-color:#4CB96B;background-color:#E9E9E9}.gsc-webResult.gsc-result,.gsc-results .gsc-imageResult{border-color:#FFFFFF;background-color:#FFFFFF}.gsc-webResult.gsc-result:hover,.gsc-imageResult:hover{border-color:#FFFFFF;background-color:#FFFFFF}.gs-webResult.gs-result a.gs-title:link,.gs-webResult.gs-result a.gs-title:link b,.gs-imageResult a.gs-title:link,.gs-imageResult a.gs-title:link b{color:#0000CC}.gs-webResult.gs-result a.gs-title:visited,.gs-webResult.gs-result a.gs-title:visited b,.gs-imageResult a.gs-title:visited,.gs-imageResult a.gs-title:visited b{color:#0000CC}.gs-webResult.gs-result a.gs-title:hover,.gs-webResult.gs-result a.gs-title:hover b,.gs-imageResult a.gs-title:hover,.gs-imageResult a.gs-title:hover b{color:#0000CC}.gs-webResult.gs-result a.gs-title:active,.gs-webResult.gs-result a.gs-title:active b,.gs-imageResult a.gs-title:active,.gs-imageResult a.gs-title:active b{color:#0000CC}.gsc-cursor-page{color:#0000CC}a.gsc-trailing-more-results:link{color:#0000CC}.gs-webResult .gs-snippet,.gs-imageResult .gs-snippet,.gs-fileFormatType{color:#000000}.gs-webResult div.gs-visibleUrl,.gs-imageResult div.gs-visibleUrl{color:#008000}.gs-webResult div.gs-visibleUrl-short{color:#008000}.gs-webResult div.gs-visibleUrl-short{display:none}.gs-webResult div.gs-visibleUrl-long{display:block}.gs-promotion div.gs-visibleUrl-short{display:none}.gs-promotion div.gs-visibleUrl-long{display:block}.gsc-cursor-box{border-color:#FFFFFF}.gsc-results .gsc-cursor-box .gsc-cursor-page{border-color:#4CB96B;background-color:#E9E9E9;color:#4CB96B}.gsc-results .gsc-cursor-box .gsc-cursor-current-page{border-color:#4CB96B;background-color:#FFFFFF;color:#4CB96B}.gsc-webResult.gsc-result.gsc-promotion{border-color:#336699;background-color:#FFFFFF}.gsc-completion-title{color:#0000CC}.gsc-completion-snippet{color:#000000}.gs-promotion a.gs-title:link,.gs-promotion a.gs-title:link *,.gs-promotion .gs-snippet a:link{color:#0000CC}.gs-promotion a.gs-title:visited,.gs-promotion a.gs-title:visited *,.gs-promotion .gs-snippet a:visited{color:#0000CC}.gs-promotion a.gs-title:hover,.gs-promotion a.gs-title:hover *,.gs-promotion .gs-snippet a:hover{color:#0000CC}.gs-promotion a.gs-title:active,.gs-promotion a.gs-title:active *,.gs-promotion .gs-snippet a:active{color:#0000CC}.gs-promotion .gs-snippet,.gs-promotion .gs-title .gs-promotion-title-right,.gs-promotion .gs-title .gs-promotion-title-right *{color:#000000}.gs-promotion .gs-visibleUrl,.gs-promotion .gs-visibleUrl-short{color:#008000}.gcsc-find-more-on-google{color:#0000CC}.gcsc-find-more-on-google-magnifier{fill:#0000CC}</style><style type="text/css">.gscb_a{display:inline-block;font:27px/13px arial,sans-serif}.gsst_a .gscb_a{color:#a1b9ed;cursor:pointer}.gsst_a:hover .gscb_a,.gsst_a:focus .gscb_a{color:#36c}.gsst_a{display:inline-block}.gsst_a{cursor:pointer;padding:0 4px}.gsst_a:hover{text-decoration:none!important}.gsst_b{font-size:16px;padding:0 2px;position:relative;user-select:none;-webkit-user-select:none;white-space:nowrap}.gsst_e{vertical-align:middle;opacity:0.55;}.gsst_a:hover .gsst_e,.gsst_a:focus .gsst_e{opacity:0.72;}.gsst_a:active .gsst_e{opacity:1;}.gsst_f{background:white;text-align:left}.gsst_g{background-color:white;border:1px solid #ccc;border-top-color:#d9d9d9;box-shadow:0 2px 4px rgba(0,0,0,0.2);-webkit-box-shadow:0 2px 4px rgba(0,0,0,0.2);margin:-1px -3px;padding:0 6px}.gsst_h{background-color:white;height:1px;margin-bottom:-1px;position:relative;top:-1px}.gsib_a{width:100%;padding:4px 6px 0}.gsib_a,.gsib_b{vertical-align:top}.gssb_c{border:0;position:absolute;z-index:989}.gssb_e{border:1px solid #ccc;border-top-color:#d9d9d9;box-shadow:0 2px 4px rgba(0,0,0,0.2);-webkit-box-shadow:0 2px 4px rgba(0,0,0,0.2);cursor:default}.gssb_f{visibility:hidden;white-space:nowrap}.gssb_k{border:0;display:block;position:absolute;top:0;z-index:988}.gsdd_a{border:none!important}.gsq_a{padding:0}.gsq_a{padding:0}.gssb_a{padding:0 7px}.gssb_a,.gssb_a td{white-space:nowrap;overflow:hidden;line-height:22px}#gssb_b{font-size:11px;color:#36c;text-decoration:none}#gssb_b:hover{font-size:11px;color:#36c;text-decoration:underline}.gssb_g{text-align:center;padding:8px 0 7px;position:relative}.gssb_h{font-size:15px;height:28px;margin:0.2em;-webkit-appearance:button}.gssb_i{background:#eee}.gss_ifl{visibility:hidden;padding-left:5px}.gssb_i .gss_ifl{visibility:visible}a.gssb_j{font-size:13px;color:#36c;text-decoration:none;line-height:100%}a.gssb_j:hover{text-decoration:underline}.gssb_l{height:1px;background-color:#e5e5e5}.gssb_m{color:#000;background:#fff}.gssb_a{padding:0 9px}.gsib_a{padding:5px 9px 4px 9px}.gscb_a{line-height:27px}.gssb_e{border:0}.gssb_l{margin:5px 0}input.gsc-input::-webkit-input-placeholder{font-size:14px}input.gsc-input:-moz-placeholder{font-size:14px}input.gsc-input::-moz-placeholder{font-size:14px}input.gsc-input:-ms-input-placeholder{font-size:14px}input.gsc-input:focus::-webkit-input-placeholder{color:transparent}input.gsc-input:focus:-moz-placeholder{color:transparent}input.gsc-input:focus::-moz-placeholder{color:transparent}input.gsc-input:focus:-ms-input-placeholder{color:transparent}.gssb_c .gsc-completion-container{position:static}.gssb_c{z-index:5000}.gsc-completion-container table{background:transparent;font-size:inherit;font-family:inherit}.gssb_c > tbody > tr,.gssb_c > tbody > tr > td,.gssb_d,.gssb_d > tbody > tr,.gssb_d > tbody > tr > td,.gssb_e,.gssb_e > tbody > tr,.gssb_e > tbody > tr > td{padding:0;margin:0;border:0}.gssb_a table,.gssb_a table tr,.gssb_a table tr td{padding:0;margin:0;border:0}</style><script src="./del_files/f(10).txt"></script><script src="./del_files/f(11).txt"></script><style></style><style type="text/css">.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:"lucida grande", tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_dialog{background:rgba(82, 82, 82, .7);position:absolute;top:-10000px;z-index:10001}.fb_dialog_advanced{border-radius:8px;padding:10px}.fb_dialog_content{background:#fff;color:#373737}.fb_dialog_close_icon{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 0 transparent;cursor:pointer;display:block;height:15px;position:absolute;right:18px;top:17px;width:15px}.fb_dialog_mobile .fb_dialog_close_icon{left:5px;right:auto;top:5px}.fb_dialog_padding{background-color:transparent;position:absolute;width:1px;z-index:-1}.fb_dialog_close_icon:hover{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -15px transparent}.fb_dialog_close_icon:active{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -30px transparent}.fb_dialog_iframe{line-height:0}.fb_dialog_content .dialog_title{background:#6d84b4;border:1px solid #365899;color:#fff;font-size:14px;font-weight:bold;margin:0}.fb_dialog_content .dialog_title>span{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yd/r/Cou7n-nqK52.gif) no-repeat 5px 50%;float:left;padding:5px 0 7px 26px}body.fb_hidden{height:100%;left:0;margin:0;overflow:visible;position:absolute;top:-10000px;transform:none;width:100%}.fb_dialog.fb_dialog_mobile.loading{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ya/r/3rhSv5V8j3o.gif) white no-repeat 50% 50%;min-height:100%;min-width:100%;overflow:hidden;position:absolute;top:0;z-index:10001}.fb_dialog.fb_dialog_mobile.loading.centered{background:none;height:auto;min-height:initial;min-width:initial;width:auto}.fb_dialog.fb_dialog_mobile.loading.centered #fb_dialog_loader_spinner{width:100%}.fb_dialog.fb_dialog_mobile.loading.centered .fb_dialog_content{background:none}.loading.centered #fb_dialog_loader_close{clear:both;color:#fff;display:block;font-size:18px;padding-top:20px}#fb-root #fb_dialog_ipad_overlay{background:rgba(0, 0, 0, .4);bottom:0;left:0;min-height:100%;position:absolute;right:0;top:0;width:100%;z-index:10000}#fb-root #fb_dialog_ipad_overlay.hidden{display:none}.fb_dialog.fb_dialog_mobile.loading iframe{visibility:hidden}.fb_dialog_mobile .fb_dialog_iframe{position:sticky;top:0}.fb_dialog_content .dialog_header{background:linear-gradient(from(#738aba), to(#2c4987));border-bottom:1px solid;border-color:#043b87;box-shadow:white 0 1px 1px -1px inset;color:#fff;font:bold 14px Helvetica, sans-serif;text-overflow:ellipsis;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0;vertical-align:middle;white-space:nowrap}.fb_dialog_content .dialog_header table{height:43px;width:100%}.fb_dialog_content .dialog_header td.header_left{font-size:12px;padding-left:5px;vertical-align:middle;width:60px}.fb_dialog_content .dialog_header td.header_right{font-size:12px;padding-right:5px;vertical-align:middle;width:60px}.fb_dialog_content .touchable_button{background:linear-gradient(from(#4267B2), to(#2a4887));background-clip:padding-box;border:1px solid #29487d;border-radius:3px;display:inline-block;line-height:18px;margin-top:3px;max-width:85px;padding:4px 12px;position:relative}.fb_dialog_content .dialog_header .touchable_button input{background:none;border:none;color:#fff;font:bold 12px Helvetica, sans-serif;margin:2px -12px;padding:2px 6px 3px 6px;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog_content .dialog_header .header_center{color:#fff;font-size:16px;font-weight:bold;line-height:18px;text-align:center;vertical-align:middle}.fb_dialog_content .dialog_content{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/y9/r/jKEcVPZFk-2.gif) no-repeat 50% 50%;border:1px solid #4a4a4a;border-bottom:0;border-top:0;height:150px}.fb_dialog_content .dialog_footer{background:#f5f6f7;border:1px solid #4a4a4a;border-top-color:#ccc;height:40px}#fb_dialog_loader_close{float:left}.fb_dialog.fb_dialog_mobile .fb_dialog_close_button{text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog.fb_dialog_mobile .fb_dialog_close_icon{visibility:hidden}#fb_dialog_loader_spinner{animation:rotateSpinner 1.2s linear infinite;background-color:transparent;background-image:url(https://static.xx.fbcdn.net/rsrc.php/v3/yD/r/t-wz8gw1xG1.png);background-position:50% 50%;background-repeat:no-repeat;height:24px;width:24px}@keyframes rotateSpinner{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}
.fb_iframe_widget{display:inline-block;position:relative}.fb_iframe_widget span{display:inline-block;position:relative;text-align:justify}.fb_iframe_widget iframe{position:absolute}.fb_iframe_widget_fluid_desktop,.fb_iframe_widget_fluid_desktop span,.fb_iframe_widget_fluid_desktop iframe{max-width:100%}.fb_iframe_widget_fluid_desktop iframe{min-width:220px;position:relative}.fb_iframe_widget_lift{z-index:1}.fb_iframe_widget_fluid{display:inline}.fb_iframe_widget_fluid span{width:100%}</style><script id="_bsa_srv-CKYDL2JJ_0" type="text/javascript" src="./del_files/CKYDL2JJ.json"></script><script type="text/javascript" async="" src="./del_files/embed.js"></script><link rel="prefetch" as="style" href="https://c.disquscdn.com/next/embed/styles/lounge.953a2bd009935f47a8e815c3ee2bfc5a.css"><link rel="prefetch" as="script" href="https://c.disquscdn.com/next/embed/common.bundle.f91bb4d435d2d5726fa104d427b9c213.js"><link rel="prefetch" as="script" href="https://c.disquscdn.com/next/embed/lounge.bundle.99b8255f469d4d97b3f3816dc396fc40.js"><link rel="prefetch" as="script" href="https://disqus.com/next/config.js"></head> 

    <!-- mobile/tab screen js and css -->  
    


    <body style="position: relative;" class=""><div role="dialog" aria-live="polite" aria-label="cookieconsent" aria-describedby="cookieconsent:desc" class="cc-window cc-banner cc-type-info cc-theme-classic cc-bottom cc-color-override-74746687 cc-invisible" style="display: none;"><!--googleoff: all--><span id="cookieconsent:desc" class="cc-message">We use cookies to ensure you have the best browsing experience on our website. By using our site, you acknowledge that you have read and understood our <a href="https://www.geeksforgeeks.org/cookie-policy/" class="cc-link" target="_blank">Cookie Policy</a> &amp;  <a aria-label="learn more about cookies" role="button" tabindex="0" class="cc-link" href="https://www.geeksforgeeks.org/privacy-policy/" target="_blank">Privacy Policy</a></span><div class="cc-compliance"><a aria-label="dismiss cookie message" role="button" tabindex="0" class="cc-btn cc-dismiss">Got it!</a></div><!--googleon: all--></div>
        <i id="utoken" style="display:none">959c3687ba0f95f58725c8a6e94ee5eeab76bc4431353730303331303537</i>
        <header class="header--main">
        <div class="header--search">
            <div class="header--container">
                <div class="header--sidebar">
                    <div class="header--practice__logo">
                        <a href="https://practice.geeksforgeeks.org/">Practice</a>
                    </div>
                </div>
                <div class="header--search__div">
                    <div style="width:80%;position: absolute;"><div id="___gcse_0"><div class="gsc-control-cse gsc-control-cse-en"><div class="gsc-control-wrapper-cse" dir="ltr"><form class="gsc-search-box gsc-search-box-tools" accept-charset="utf-8"><table cellspacing="0" cellpadding="0" class="gsc-search-box"><tbody><tr><td class="gsc-input"><div class="gsc-input-box" id="gsc-iw-id1"><table cellspacing="0" cellpadding="0" id="gs_id50" class="gstl_50 gsc-input" style="width: 100%; padding: 0px;"><tbody><tr><td id="gs_tti50" class="gsib_a"><input autocomplete="off" type="text" size="10" class="gsc-input" name="search" title="search" id="gsc-i-id1" placeholder="Custom Search" dir="ltr" spellcheck="false" x-webkit-grammar="builtin:search" lang="en" style="width: 100%; padding: 0px; border: none; margin: 0px; height: auto; background: url(&quot;https://www.google.com/cse/static/images/1x/googlelogo_lightgrey_46x16dp.png&quot;) left center no-repeat rgb(255, 255, 255); text-indent: 48px; outline: none;"></td><td class="gsib_b"><div class="gsst_b" id="gs_st50" dir="ltr"><a class="gsst_a" href="javascript:void(0)" title="Clear search box" role="button" style="display: none;"><span class="gscb_a" id="gs_cb50" aria-hidden="true">×</span></a></div></td></tr></tbody></table></div></td><td class="gsc-search-button"><button class="gsc-search-button gsc-search-button-v2"><svg width="13" height="13" viewBox="0 0 13 13"><title>search</title><path d="m4.8495 7.8226c0.82666 0 1.5262-0.29146 2.0985-0.87438 0.57232-0.58292 0.86378-1.2877 0.87438-2.1144 0.010599-0.82666-0.28086-1.5262-0.87438-2.0985-0.59352-0.57232-1.293-0.86378-2.0985-0.87438-0.8055-0.010599-1.5103 0.28086-2.1144 0.87438-0.60414 0.59352-0.8956 1.293-0.87438 2.0985 0.021197 0.8055 0.31266 1.5103 0.87438 2.1144 0.56172 0.60414 1.2665 0.8956 2.1144 0.87438zm4.4695 0.2115 3.681 3.6819-1.259 1.284-3.6817-3.7 0.0019784-0.69479-0.090043-0.098846c-0.87973 0.76087-1.92 1.1413-3.1207 1.1413-1.3553 0-2.5025-0.46363-3.4417-1.3909s-1.4088-2.0686-1.4088-3.4239c0-1.3553 0.4696-2.4966 1.4088-3.4239 0.9392-0.92727 2.0864-1.3969 3.4417-1.4088 1.3553-0.011889 2.4906 0.45771 3.406 1.4088 0.9154 0.95107 1.379 2.0924 1.3909 3.4239 0 1.2126-0.38043 2.2588-1.1413 3.1385l0.098834 0.090049z"></path></svg></button></td><td class="gsc-clear-button"><div class="gsc-clear-button" title="clear results">&nbsp;</div></td></tr></tbody></table></form><div class="gsc-results-wrapper-overlay"><div class="gsc-results-close-btn" tabindex="0"></div><div class="gsc-positioningWrapper"><div class="gsc-tabsAreaInvisible"><div class="gsc-tabHeader gsc-inline-block gsc-tabhActive">Custom Search</div><span class="gs-spacer"> </span></div></div><div class="gsc-positioningWrapper"><div class="gsc-tabsAreaInvisible"></div></div><div class="gsc-above-wrapper-area-invisible"><table cellspacing="0" cellpadding="0" class="gsc-above-wrapper-area-container"><tbody><tr><td class="gsc-result-info-container"><div class="gsc-result-info-invisible"></div></td><td class="gsc-orderby-container"><div class="gsc-orderby-invisible"><div class="gsc-orderby-label gsc-inline-block">Sort by:</div><div class="gsc-option-menu-container gsc-inline-block"><div class="gsc-selected-option-container gsc-inline-block"><div class="gsc-selected-option">Relevance</div><div class="gsc-option-selector"></div></div><div class="gsc-option-menu-invisible"><div class="gsc-option-menu-item gsc-option-menu-item-highlighted"><div class="gsc-option">Relevance</div></div><div class="gsc-option-menu-item"><div class="gsc-option">Date</div></div></div></div></div></td></tr></tbody></table></div><div class="gsc-adBlockInvisible"></div><div class="gsc-wrapper"><div class="gsc-adBlockInvisible"></div><div class="gsc-resultsbox-invisible"><div class="gsc-resultsRoot gsc-tabData gsc-tabdActive"><div><div class="gsc-expansionArea"></div></div></div></div></div></div><div class="gsc-modal-background-image" tabindex="0"></div></div></div></div></div>
                    <input id="header--search__input" placeholder="Search..." type="search" name="header--search__input">
                    <div class="header--icon_close">x</div>
                </div>
            </div>
        </div>
        <script>
            window.fbAsyncInit = function() {
                FB.init({
                  appId      : '534961220012939',
                  xfbml      : true,
                  version    : 'v2.5'
                });
            };

            (function(d, s, id) {
                var js, fjs = d.getElementsByTagName(s)[0];
                if (d.getElementById(id)) {return;}
                js = d.createElement(s); js.id = id;
                js.src = "//connect.facebook.net/en_US/sdk.js";
                fjs.parentNode.insertBefore(js, fjs);
            }(document, 'script', 'facebook-jssdk'));
        </script>
        <script>
          (function() {
            var cx = '005855190823060106138:ggjtcjog1xu';
            var gcse = document.createElement('script');
            gcse.type = 'text/javascript';
            gcse.async = true;
            gcse.src = 'https://cse.google.com/cse.js?cx=' + cx;
            var s = document.getElementsByTagName('script')[0];
            s.parentNode.insertBefore(gcse, s);
          })();
        </script>

        <!-- Global site tag (gtag.js) - Google Ads: 796001856 -->
        <script async="" src="./del_files/js"></script>
        <script>
          window.dataLayer = window.dataLayer || [];
          function gtag(){dataLayer.push(arguments);}
          gtag('js', new Date());

          gtag('config', 'AW-796001856');
        </script>

        <!-- <div style="width: 100%;display: flex;margin: auto;z-index: 100"><div style="position:absolute;width:100%;"></div></div> -->
        <div class="header--navbar">
            <div class="header--container">
                <div id="header--menu__icon"><i class="fa fa-bars"></i></div>
                <nav class="header--nav">
                    <div class="header--practice__logo">
                        <a href="https://practice.geeksforgeeks.org/">Practice</a>
                    </div>
                                        <ul class="header--sidebar header--dropdown__menu header--dropdown__profile">
                        <li class="header--dropdown__item">
                            <img class="header--user__avatar" src="./del_files/avatar.png">
                            <div class="header--username">manish kumar 64</div>
                        </li>
                        <li class="header--dropdown__item">
                            <a href="https://auth.geeksforgeeks.org/user/manish%20kumar%2064/practice/" class="header--profile__link">
                                <i class="fa fa-user" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;My Profile
                            </a>
                        </li>
                        <li class="header--dropdown__item">
                            <a href="https://practice.geeksforgeeks.org/transactions">
                                <i class="fa fa-history" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;My Transactions
                            </a>
                        </li>
                        <li class="header--dropdown__item">
                            <a href="https://auth.geeksforgeeks.org/logout.php?to=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Fdelete-without-head-pointer%2F1">
                               <i class="fas fa-sign-out-alt" aria-hidden="true"></i>&nbsp;&nbsp;Logout
                            </a>
                        </li>
                    </ul> 
                                        <ul class="header--sidebar header--nav__items--left">
                        <li class="header--nav__item">
                            <a class="header--nav__link" href="https://practice.geeksforgeeks.org/explore/">
                                Explore
                            </a>
                        </li>
                        <li class="header--nav__item">
                            <a class="header--nav__link" href="https://practice.geeksforgeeks.org/courses/">
                                Courses
                            </a>
                        </li>
                        <li class="header--nav__item">
                            <a class="header--nav__link" href="https://practice.geeksforgeeks.org/jobs/">
                                Get Hired
                            </a>
                        </li>
                                            </ul>
                    <ul class="header--nav__items--right">
                        <li class="header--nav__item">
                            <a class="header--search__trigger header--nav__link" style="font-size:18px;"><i class="fa fa-search"></i></a>
                        </li>
                                                    <li class="header--nav__item">
                                <a class="header--notification__trigger header--nav__link" style="font-size:18px;"><i class="fa fa-bell"></i></a>
                                <div class="header--notification__badge" style="display:block">3</div>
                                <div class="header--notification__content" style="display: none;">
                                    <div class="header--notification__top">
                                        <strong>Notifications</strong>
                                        <a class="notification--archive pull-right">Archive All</a>
                                    </div>
                                    <div class="header--notification__list">
                                        <center><div class="header--loader"></div></center>
                                    </div>
                                    <div class="notifications--show__all">
                                        <a class="notifications--showMore" href="https://practice.geeksforgeeks.org/notifications/">Show All</a>
                                    </div>
                                </div>
                            </li>
                                                                            <li class="header--nav__item header--profile__dropdown">
                                <a class="header--nav__link">
                                    <img class="header--user__avatar" src="./del_files/avatar.png">
                                    <i class="header--icon__caret"></i>
                                </a>
                            </li>
                                            </ul>
                                    </nav>
            </div>
        </div>
        <div class="header--scrollTop__btn" style="display: block; opacity: 1;">
            <span class="glyphicon glyphicon-chevron-up"></span>
        </div>
            </header>
        <div class="header--batches__button">
        LIVE&nbsp;&nbsp;&nbsp;BATCHES
    </div>
    <div class="header--batches__content">
    </div>
        <div id="sidr"></div>
    <div class="modal fade" id="commentModalHeader" role="success">
        <div class="modal-dialog ">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Message </h4>
                </div>
                <div class="modal-body">
                    <div class="form-group">
                        <div class="modal-body">
                            <p>Error</p>
                        </div>
                    </div>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">OK</button>
                </div>
            </div>
        </div>
    </div>
    <div class="modal fade" id="reportIssueHeader" tabindex="-1" role="dialog">
        <div class="modal-dialog modal-lg" role="document">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                    <h4 class="modal-title text-center" id="myModalLabel">Note: For issues in your code/test-cases, please use Comment-System of that particular problem.</h4>
                </div>
                <div class="modal-body">
                    <form class="form-horizontal" role="form">
                        <div class="form-group">
                          <label class="col-sm-1 control-label" for="inputTestCase">Details</label>
                            <div class="col-sm-11">
                              <textarea id="issueDescription" class="form-control" rows="7" cols="100" name="issueDescription"></textarea>
                          </div>
                        </div>
                    </form>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal" style="float:left;">Cancel</button>
                    <button type="button" class="btn btn-default" data-dismiss="modal" id="reportIssueHeaderMail" style="float:right;">Send</button>
                </div>
            </div>
        </div>
    </div>
     
    <div class="container-fluid">
        <div id="loaderMask" style="display:none;width: 100%;height: 100%;top: 0;left: 0;background: #0006;padding: 20em 0% 0% 48em;z-index: 1000000;position: fixed;">
            <h3><i class="fa fa-spin fa-spinner" style="font-size: 2em;"></i></h3>
        </div>        

    
    <script> var isDefaultCode = 0;</script>
    <script> var contestId = 0;</script>
    <script> var userId = 154841;</script>
    <link href="./del_files/jquery-ui.css" rel="stylesheet">
    <script src="./del_files/jquery-ui.js"></script>

    
    <style>
        body{
            font-family: 'Nunito',sans-serif;
        }

        .aceLineHighlighter {
            position:absolute;
            background:#4286f4;
            z-index:20
        }

        .fullScreen {
          position: fixed;
          z-index: 1000;
          width: 100vw;
          height: 100vh;
          top: 0;
          left: 0;
          background: #fff;
          display:none;
        }

        .split {
          float: left;
          height: 100vh;
        }
            
        .hint-tabs > li > a{
            font-size: 14px;
            padding: 7px 9px;
        }
        .hint-tabs > li.active > a{
            cursor: pointer;
        }
        .sol-tabs > li > a{
            font-size: 14px;
            padding: 7px 9px;
        }

        .full-soln-lang > div{
            padding: 5px 5px 5px 5px;
        }

        .nav{padding-left:0;margin-bottom:0;list-style:none;}.nav>li{position:relative;display:block}.nav>li>a{position:relative;display:block;padding:10px 15px;background-color:transparent;color:#555;}.nav>li>a:focus,.nav>li>a:hover{text-decoration:none;background-color:#eee}.nav>li.disabled>a{color:#777}.nav>li.disabled>a:focus,.nav>li.disabled>a:hover{color:#777;text-decoration:none;cursor:not-allowed;background-color:transparent}.nav .open>a,.nav .open>a:focus,.nav .open>a:hover{background-color:#eee;border-color:#337ab7}.nav .nav-divider{height:1px;margin:9px 0;overflow:hidden;background-color:#e5e5e5}.nav>li>a>img{max-width:none}.nav-tabs{border-bottom:1px solid #ddd}.nav-tabs>li{float:left;margin-bottom:-1px}.nav-tabs>li>a{margin-right:2px;line-height:1.42857143;border:1px solid transparent;border-radius:4px 4px 0 0}.nav-tabs>li>a:hover{border-color:#eee #eee #ddd}.nav-tabs>li.active>a,.nav-tabs>li.active>a:focus,.nav-tabs>li.active>a:hover{font-weight:600;color:#0b8043;cursor:default;background-color:#fff;border:1px solid #ddd;border-bottom-color:transparent}

        .editor-action-hint{
            float: right; 
            font-size:13px; 
            margin-top:0px !important; 
            margin-bottom:3px; 
            border-radius: 0.3rem;
            margin-right:3px;
        }

        .editor-action{
            float: right; 
            font-size:13px; 
            margin-top:0px !important; 
            margin-bottom:3px; 
            border-radius: 0.3rem;
            margin-right:3px;
            background-color:#fff;
            border-color:darkgray;
            color: #333535
        }
        .subact{
            float: right; 
            font-size:13px; 
            margin-top:0px !important; 
            margin-bottom:3px; 
            border-radius: 0.3rem;
            margin-right:3px;
            padding:6px 20px; 
            background-color:#3a484e; 
            border-color:#3a484e; 
            color:white;
        }        

        .subact:hover{
            background-color:#49585f; 
            border-color:#3a484e; 
        }

        .sub-action{
            font-size:14px; 
        }
        
        .dark-icon{
            color: #3a484e;
        }
    
        .make-sticky{
          top:0;
          position: sticky;
          position: -webkit-sticky; /* Safari */
          z-index: 15;
        }
    .nav{padding-left:0;margin-bottom:0;list-style:none;}.nav-batch{/*background: linear-gradient(to right, #4cb96b, #32a176);*/padding: 5px 5px 0px 5px;}.nav>li{position:relative;display:block}.nav>li>a{position:relative;display:block;padding:10px 15px;background-color:transparent;color:#555;}.nav>li>a:focus,.nav>li>a:hover{text-decoration:none;background-color:#eee}.nav>li.disabled>a{color:#777}.nav>li.disabled>a:focus,.nav>li.disabled>a:hover{color:#777;text-decoration:none;cursor:not-allowed;background-color:transparent}.nav .open>a,.nav .open>a:focus,.nav .open>a:hover{background-color:#eee;border-color:#337ab7}.nav .nav-divider{height:1px;margin:9px 0;overflow:hidden;background-color:#e5e5e5}.nav>li>a>img{max-width:none}.nav-tabs{border-bottom:1px solid #ddd}.nav-tabs>li{float:left;margin-bottom:-1px}.nav-tabs>li>a{margin-right:2px;line-height:1.42857143;border:1px solid transparent;border-radius:4px 4px 0 0}.nav-tabs>li>a:hover{border-color:#eee #eee #ddd}.nav-tabs>li.active>a,.nav-tabs>li.active>a:focus,.nav-tabs>li.active>a:hover{font-weight:600;color:#0b8043;cursor:default;background-color:#fff;border:1px solid #ddd;border-bottom-color:transparent}

        .nav-problem > li.active {
            box-shadow: 0px 0px 5px 0px #AAAAAA;
            -moz-box-shadow: 0px 0px 5px 0px #AAAAAA;
            -webkit-box-shadow: 0px 0px 5px 0px #AAAAAA;
            border-radius: 4px 4px 0 0;
        }

        .nav-problem > li > a {
            margin-right:0px;
        }

        .out pre {
            border      :   0px !important;
            padding     :   15px !important;
            line-height :   1.5;
            font-family :   Nunito !important;
            display     :   none;
            background-color: #ccc;
        }
        
    </style>

    <div class="fullScreen" style="z-index:1000;overflow-x:hidden;display:none">
        <div class="leftDiv split" style="overflow-y:auto;width:48%;padding:10px 20px 100px 20px;outline: 10px solid #f1f1f1;">
            <div class="problemTitle" style="font-weight:bold; font-size:20px">Delete without head pointer                <a style="cursor:pointer" id="half" class="screen-resize">
                    <span class="pull-right glyphicon glyphicon-resize-small"></span>
                </a>
            </div>
        </div>
        <div class="rightDiv split" style="overflow-y:auto;width:52%;padding:10px 20px 100px 35px"></div>
    </div>
   
    <div class="row fullPageDiv">
        
        <!-- ProblemPage Left Sidebar START -->

                                    <div class="col-xs-12 col-sm-2 text-center leftTreeDiv">
                <!-- get top 10 company and problem tags name here -->

<div class="whiteBgColor">
	<ul class="tree text-left">
		<li class="branch">
			<i class="indicator glyphicon glyphicon-minus-sign toggleTree"></i>
			<a class="toggleTree">Popular Company Tags</a>
			<ul class="treeElements">
		        
			      <li><a href="https://practice.geeksforgeeks.org/company/Amazon/">Amazon</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/company/Microsoft/">Microsoft</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/company/Oracle/">Oracle</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/company/Samsung/">Samsung</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/company/Adobe/">Adobe</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/company/Synopsys/">Synopsys</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/company/Infosys/">Infosys</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/company/Cisco/">Cisco</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/company/Wipro/">Wipro</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/company/Ola-Cabs/">Ola-Cabs</a></li>
							  <li><a href="https://practice.geeksforgeeks.org/company/Morgan-Stanley/">Morgan-Stanley</a></li>
							  <li><a href="https://practice.geeksforgeeks.org/company/Goldman-Sachs/">Goldman-Sachs</a></li>


			<a href="https://practice.geeksforgeeks.org/company-tags" style="color:#4cb96b;text-shadow: 1px 1px #ccc;">show more</a>
    	    </ul>
		</li>
	</ul>
</div>
  	<div style="margin:10px 0px;">
       <!-- /27823234/Practice/Vertical_W<270 -->
    <div id="div-gpt-ad-1523612657686-0" data-google-query-id="CPTTsOOw_uQCFdqCcAodQ_kHIg">
    
    <div id="google_ads_iframe_/27823234/Practice/Vertical_W&lt;270_0__container__" style="border: 0pt none; display: inline-block; width: 160px; height: 600px;"><iframe frameborder="0" src="./del_files/container.html" id="google_ads_iframe_/27823234/Practice/Vertical_W&lt;270_0" title="3rd party ad content" name="" scrolling="no" marginwidth="0" marginheight="0" width="160" height="600" data-is-safeframe="true" sandbox="allow-forms allow-pointer-lock allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" data-google-container-id="1" style="border: 0px; vertical-align: bottom;" data-load-complete="true"></iframe></div></div>

	</div>
<div class="whiteBgColor">
	<ul class="tree text-left">
		<li class="branch">
			<i class="indicator glyphicon glyphicon-minus-sign toggleTree"></i>
			<a class="toggleTree">Popular Topic Tags</a>
			<ul class="treeElements">
			      <li><a href="https://practice.geeksforgeeks.org/topics/maths/">Maths</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/topics/array/">Array</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/topics/Dynamic-Programming/">Dynamic-Programming</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/topics/Greedy-Algorithm/">Greedy-Algorithm</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/topics/hashing/">Hashing</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/topics/tree/">Tree</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/topics/bit-algorithm/">Bit-Algorithm</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/topics/matrix/">Matrix</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/topics/backtracking/">Backtracking</a></li>
                              <li><a href="https://practice.geeksforgeeks.org/topics/Operating%20Systems/">Operating System</a></li>
							  <li><a href="https://practice.geeksforgeeks.org/topics/Linked-List/">Linked-List</a></li>
							  <li><a href="https://practice.geeksforgeeks.org/topics/Graph/">Graph</a></li>

		        <a href="https://practice.geeksforgeeks.org/topic-tags" style="color:#4cb96b;text-shadow: 1px 1px #ccc;">show more</a>
    	    </ul>
		</li>
	</ul>
</div>
<br>

            </div>
            
    <!-- ProblemPage Left Sidebar END -->


    <!-- ProblemPage Center Content Part START -->
                    <div class="col-sm-7 col-xs-12" style="padding-right:2px; padding-left:2px;">
                    <!-- ProblemStatement Header START -->
            <div class="container-fluid">
                <div class="row">
                    <div id="border" class="well whiteBgColor">
                        <div class="row">   
                            <div class="col-lg-12" style="font-size:25px;">
                                <strong>Delete without head pointer                                                                    </strong>
                                                            </div>
 
                            <div class="col-sm-8 col-xs-12">                          
                                <h5 style="float:left; margin-top: 0px;">
                                    Submissions:   
                                        <a style="color:green;text-decoration:none;" href="https://practice.geeksforgeeks.org/problem_submissions.php?pid=700161">
                                        45107                                        </a>
                                         
                                      Accuracy: <p style="color:green; display:inline">69.01%</p>
                                                                              Difficulty: <a href="https://practice.geeksforgeeks.org/Medium/1/0/" style="text-decoration:none;color:green; display:inline;">Medium</a>
                                          Marks: 4 
                                                                     </h5>
                            </div>

                                                    </div>

                        <div class="row" style="padding-bottom:5px;">
                                                            <div class="col-sm-12">
                                    Associated Course(s):
                                                                                <a href="https://practice.geeksforgeeks.org/courses/must-do-interview-prep/" style=" text-decoration:none;color:green"> &nbsp; 
                                                Must Do Interview Preparation                                            </a>
                                                                                        <a href="https://practice.geeksforgeeks.org/courses/dsa-doubt-assistance/" style=" text-decoration:none;color:green"> &nbsp; 
                                                DSA-Self Paced with Doubt Assistance                                            </a>
                                                                                        <a class="hiddenCourses" href="https://practice.geeksforgeeks.org/courses/placement-100-2019/" style=" text-decoration:none;color:green;display:none"> &nbsp; 
                                                Placement 100                                            </a>
                                                                                        <a class="hiddenCourses" href="https://practice.geeksforgeeks.org/courses/geeks-classes-live/" style=" text-decoration:none;color:green;display:none"> &nbsp; 
                                                Geeks Classes - Live Session                                            </a>
                                                                                        <a class="hiddenCourses" href="https://practice.geeksforgeeks.org/courses/geeks-classes/" style=" text-decoration:none;color:green;display:none"> &nbsp; 
                                                Geeks Classes                                            </a>
                                                                                    <a class="showAllCourses" style="cursor:pointer">More</a>
                                                                        </div>
                                                        </div>

                        <div class="row">
                                                            <div class="col-md-6">
                                                                            <a class="btn btn-warning btn-xs showTag" style="border-radius:3px;background-color:#3a484e;border-color:#3a484e; padding:3px 7px;">Show Topic Tags</a>
                                                                                    <a href="https://practice.geeksforgeeks.org/topics/Linked%20List/" class="btn btn-info btn-xs topicTags" style="display:none;">Linked List</a>&nbsp;
                                             
                                        <a class="btn btn-warning btn-xs hideTag" style="border-radius:3px;display:none;background-color:#3a484e;border-color:#3a484e; padding: 3px 7px;">Hide Topic Tags</a>&nbsp; 
                                                                        </div>

                                <div class="col-md-6">
                                                                            <a class="btn btn-warning btn-xs" style="border-radius:3px;background-color:#3a484e;border-color:#3a484e; padding:3px 7px;cursor:text;">Company Tags</a>
                                                                                    <a href="https://practice.geeksforgeeks.org/company/Amazon/" class="btn btn-info btn-xs" style="text-decoration:none;">Amazon</a>&nbsp;
                                                                                        <a href="https://practice.geeksforgeeks.org/company/Goldman%20Sachs/" class="btn btn-info btn-xs" style="text-decoration:none;">Goldman Sachs</a>&nbsp;
                                                                                        <a href="https://practice.geeksforgeeks.org/company/Kritikal%20Solutions/" class="btn btn-info btn-xs" style="text-decoration:none;">Kritikal Solutions</a>&nbsp;
                                                                                        <a href="https://practice.geeksforgeeks.org/company/Microsoft/" class="btn btn-info btn-xs" style="text-decoration:none;">Microsoft</a>&nbsp;
                                                                                        <a href="https://practice.geeksforgeeks.org/company/Samsung/" class="btn btn-info btn-xs" style="text-decoration:none;">Samsung</a>&nbsp;
                                                                                        <a href="https://practice.geeksforgeeks.org/company/Visa/" class="btn btn-info btn-xs" style="text-decoration:none;">Visa</a>&nbsp;
                                                                            </div>
                                                        </div>
                    </div>
                </div>
            </div>

            <!-- ProblemStatement Header END -->


            <div id="tabs">
                <ul class="nav nav-tabs nav-problem" role="tablist">
                    <li role="presentation" class="active">
                        <a id="problems" href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1#problems" data-toggle="tab" aria-controls="problems" role="tab">Problems</a>
                    </li>
                                    </ul>
            </div>

            <div class="tab-content">
                <div class="tab-pane active" role="tabpanel" id="problems">
                    <div class="container-fluid">

                        <!-- ProblemStatement Content START -->

                        <div class="row">
                            <div id="border" class="well whiteBgColor">

                                <div class="problemQuestion" style="padding-left: 15px;padding-right: 15px;">
                                    <p><span style="font-size:18px">You are given a pointer/ reference to the node which is to be deleted from the&nbsp;linked list of <strong>N&nbsp;</strong>nodes. The task is to delete the node. Pointer/ reference to head node is not given.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> No head reference is given to you.</span></p>

<p><span style="font-size:18px"><strong>Input Format:</strong></span><br>
<span style="font-size:18px">First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line contains the data of the linked list. The last line contains the node to be deleted.</span></p>

<p><span style="font-size:18px"><strong>Output Format:</strong><br>
For each testcase, in a newline, print the linked list after deleting the given node.</span></p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a <strong>function </strong>problem. You only need to complete the <strong>function deleteNode </strong>that takes <strong>reference </strong>to the node that needs to be <strong>deleted</strong>. The <strong>printing </strong>is done <strong>automatically </strong>by the<strong> driver code</strong>.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= T &lt;= 100<br>
1 &lt;= N &lt;= 10<sup>3</sup></span></p>

<p><span style="font-size:18px"><strong>Example:</strong><br>
<strong>Input</strong>:<br>
2<br>
2<br>
1 2<br>
1<br>
4<br>
10 20 4 30<br>
20</span></p>

<p><span style="font-size:18px"><strong>Output</strong>:<br>
2<br>
10 4 30 </span></p>

<p><span style="font-size:18px"><strong>Explanation:<br>
Testcase 1:</strong> After deleting 20 from the linked list, we have remaining nodes as 10, 4 and 30.</span><br>
&nbsp;</p>
                                     
                                        <h4>** For More Input/Output Examples Use <a href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1#ExpectOP">'Expected Output'</a> option **</h4> 
                                                                        </div>

                                                                        <a style="text-decoration:none; color:#0b8043;">Contributor: Amit Khandelwal</a><br>
                                        <a style="text-decoration:none; color:#0b8043;" href="https://auth.geeksforgeeks.org/user/kartik/practice/">Author: kartik</a><br>
                                                                        
                                <div class="row">
                                    <div class="col-sm-12 text-right">
                                                                                        <a href="https://practice.geeksforgeeks.org/problem_submissions.php?pid=700161"><button class="btn btn-success sub-action editor-action">All Submissions</button></a>
                                                                                            <a href="https://practice.geeksforgeeks.org/problem_submissions.php?pid=700161&amp;isSolved=ALL&amp;lang=ALL&amp;user=Self"><button class="btn btn-success sub-action editor-action">My Submissions</button></a>
                                                                                                <a class="btn btn-primary sub-action editor-action" href="https://practice.geeksforgeeks.org/editorial.php?pid=700161" onclick="return confirm(&#39;We strongly recommend to solve this problem by your own before seeing its editorial.\n Do you really want to see its editorial?&#39;)">Editorial
                                            </a> 
                                                                                </div>
                                </div>
                            </div>
                        </div>

                        <!-- ProblemStatement Content END -->

                        <div class="row editorTop">                       
                            <h4 style="float:right;margin-right:15px"><u>
                                </u> 
                            </h4>
                        </div>

                                                    <div id="sampleTestCases" style="display:none">2
12
18 5 11 30 5 19 19 23 15 6 6 2 
11
2
12 26 
12</div>
                            <div class="mainRightDiv">
                                <div id="border" class="row whiteBgColor" style="display: block;padding: 10px;margin-top: 10px">
                                    <div class="col-sm-3 col-xs-6">
                                        <select class="themes form-control">
                                            <option class="themeLight">Theme Light</option>
                                            <option class="themeDark">Dark</option>
                                            <option class="themeMonokai">Monokai</option>
                                            <option class="themeGfG">GeeksforGeeks</option>
                                        </select>
                                    </div>
                                    <div class="col-sm-3 col-xs-6">
                                        <select id="languageDropdown" class="form-control">
                                                                                                <option class="lang" value="cpp">C++ (g++ 5.4)</option>
                                                                                                        <option class="lang" value="java">Java (1.8)</option>
                                                                                                        <option class="lang" value="python3">Python3</option>
                                                     
                                            <script> var displayLang = ""</script>
                                        </select>
                                    </div>

                                    <div class="col-sm-3 col-xs-12" style="float:right; padding: 5px;">
                                        <a id="full" class="screen-resize" data-toggle="tooltip" title="Click to Split" href="javascript:void(0)" style="float:right; padding: 5px;">
                                            <span class="glyphicon glyphicon-resize-full dark-icon"></span>
                                        </a>
                                        <a id="zoom" data-toggle="tooltip" title="Click to Full" href="javascript:void(0)" style="float:right; padding: 5px;">
                                            <span class="glyphicon glyphicon-fullscreen dark-icon"></span>
                                        </a>
                                        <a id="resetEditor" title="Reset Code" style="float:right; padding:5px;">
                                            <span class="glyphicon glyphicon-refresh dark-icon"></span>
                                        </a>
                                                                            </div>
                                </div>

                                                                    <script>
                                        var isDefaultCode = 0;
                                        var currentUser = 'manish kumar 64';
                                        var sampleTestCases = $('#sampleTestCases').text();
                                        var track = '';
                                    </script>

                                           
             
                                <div class="row">
                                    <div id="border">
                                        <div class="editorBlock">    
                                            <pre id="editor" class=" ace_editor ace_hidpi ace-chrome ace_focus" draggable="false"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" style="opacity: 0; font-size: 1px; height: 1px; width: 1px; transform: translate(288px, 211px);"></textarea><div class="ace_gutter" aria-hidden="true" style="left: 0px; width: 59px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; transform: translate(0px, -1455px); width: 59px;"><div class="ace_gutter-cell " style="height: 17px; top: 1445px;">86<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1462px;">87<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1479px;">88<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1496px;">89<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1513px;">90<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1530px;">91<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1547px;">92<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1564px;">93<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1581px;">94<span class="ace_fold-widget ace_start ace_open" style="display: none; height: 17px;"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1598px;">95<span style="display: inline-block; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1615px;">96<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1632px;">97<span style="display: inline-block; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell ace_gutter-active-line " style="height: 17px; top: 1649px;">98<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1666px;">99<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1683px;">100<span class="ace_fold-widget ace_start ace_open" style="display: none; height: 17px;"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1700px;">101<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1717px;">102<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1734px;">103<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1751px;">104<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1768px;">105<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1785px;">106<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1802px;">107<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1819px;">108<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1836px;">109<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1853px;">110<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1870px;">111<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1887px;">112<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1904px;">113<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 17px; top: 1921px;">114<span style="display: none; height: 17px;" class="ace_fold-widget ace_start ace_open"></span></div></div></div><div class="ace_scroller" style="left: 58.9922px; right: 15px; bottom: 0px;"><div class="ace_content" style="transform: translate(0px, -10px); width: 710px; height: 517px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 697px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height: 17px; top: 204px; left: 0px; right: 0px;"></div></div><div class="ace_layer ace_text-layer" style="height: 1e+06px; margin: 0px 4px; transform: translate(0px, -1445px);"><div class="ace_line" style="height: 17px; top: 1445px;"><span class="ace_comment">    data = x;</span></div><div class="ace_line" style="height: 17px; top: 1462px;"><span class="ace_comment">    next = NULL;</span></div><div class="ace_line" style="height: 17px; top: 1479px;"><span class="ace_comment">  }</span></div><div class="ace_line" style="height: 17px; top: 1496px;"><span class="ace_comment">}*head;</span></div><div class="ace_line" style="height: 17px; top: 1513px;"><span class="ace_comment">*/</span></div><div class="ace_line" style="height: 17px; top: 1530px;"><span class="ace_comment">// This function should delete node from linked list. The function</span></div><div class="ace_line" style="height: 17px; top: 1547px;"><span class="ace_comment">// may assume that node exists in linked list and is not last node</span></div><div class="ace_line" style="height: 17px; top: 1564px;"><span class="ace_comment">// node: reference to the node which is to be deleted</span></div><div class="ace_line" style="height: 17px; top: 1581px;"><span class="ace_storage ace_type">void</span> <span class="ace_identifier">deleteNode</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">Node</span> <span class="ace_keyword ace_operator">*</span><span class="ace_identifier">node</span><span class="ace_paren ace_rparen">)</span></div><div class="ace_line" style="height: 17px; top: 1598px;"><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 17px; top: 1615px;"><span class="ace_indent-guide">    </span> </div><div class="ace_line" style="height: 17px; top: 1632px;"><span class="ace_indent-guide">    </span> <span class="ace_keyword ace_control">while</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">head</span> <span class="ace_keyword ace_operator">!=</span> <span class="ace_constant ace_language">NULL</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 17px; top: 1649px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span> <span class="ace_keyword ace_control">if</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">head</span><span class="ace_keyword ace_operator">-&gt;</span><span class="ace_identifier">data</span> <span class="ace_keyword ace_operator">==</span> <span class="ace_paren ace_rparen">)</span></div><div class="ace_line" style="height: 17px; top: 1666px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span> <span class="ace_identifier">head</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">node</span><span class="ace_keyword ace_operator">-&gt;</span><span class="ace_identifier">next</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 17px; top: 1683px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span> <span class="ace_keyword ace_control">else</span></div><div class="ace_line" style="height: 17px; top: 1700px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">head</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">head</span><span class="ace_keyword ace_operator">-&gt;</span><span class="ace_identifier">next</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 17px; top: 1717px;"><span class="ace_indent-guide">    </span> <span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 17px; top: 1734px;"><span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 17px; top: 1751px;"></div><div class="ace_line" style="height: 17px; top: 1768px;"></div><div class="ace_line" style="height: 17px; top: 1785px;"></div><div class="ace_line" style="height: 17px; top: 1802px;"></div><div class="ace_line" style="height: 17px; top: 1819px;"></div><div class="ace_line" style="height: 17px; top: 1836px;"></div><div class="ace_line" style="height: 17px; top: 1853px;"></div><div class="ace_line" style="height: 17px; top: 1870px;"></div><div class="ace_line" style="height: 17px; top: 1887px;"></div><div class="ace_line" style="height: 17px; top: 1904px;"></div><div class="ace_line" style="height: 17px; top: 1921px;"></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_animate-blinking"><div class="ace_cursor" style="display: block; transform: translate(229px, 204px); width: 9px; height: 17px; animation-duration: 1000ms;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 20px; bottom: 15px;"><div class="ace_scrollbar-inner" style="width: 20px; height: 1938px;"></div></div><div class="ace_scrollbar ace_scrollbar-h" style="height: 20px; left: 58.9922px; right: 15px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 805px;"></div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></pre>
                                        </div>
                                        <script type="text/javascript">
                                            var pid = "700161";
                                            var userid = "154841";
                                        </script>
                                        <script src="./del_files/ace.js" type="text/javascript" charset="utf-8"></script>
                                        <script src="./del_files/ext-language_tools.js"></script>
                                        <script>window.urlCdn = "https://cdnpractice.geeksforgeeks.org";</script>
                                        <script src="./del_files/problemPage.js"></script>
                                    </div>
                                </div>

                                <div id="border" class="row" style="display: block; padding: 10px; background: #fff; margin-top: 1px">
                                    <i id="ptoken" style="display:none">2b4b66be3e3034c0dde40b6957a8196c26526220c7943f4d9d79a139a4506cac</i>
                                    <div class="col-sm-4 col-xs-12">
                                        <input style="float: left; margin: 0px !important" type="checkbox" id="customInputCheckbox">
                                        <span style="float: left; padding-left: 10px;">Test against custom input</span> 
                                    </div>
                                    <div class="col-sm-8 col-xs-12" style="float:right;">
                                                                                    <input type="submit" class="btn btn-danger subact" id="run" value="Submit">
                                            <input type="submit" class="btn btn-primary editor-action" id="testRun" value="Compile &amp; Test">
                                                                                        <button id="show-hints" class="btn btn-warning editor-action-hint">See Hints</button>
                                                                                    <input type="submit" class="btn btn-success editor-action" id="expectedRun" value="Expected Outcome">
                                                                            </div>
                                </div>
                                <br>

                                
                                <div class="row" style="margin-top: 10px;">
                                    <div class="out"><pre style="font-size: 17px; display: block;"><span style="color:green">For Input:</span>
2
12
18 5 11 30 5 19 19 23 15 6 6 2 
11
2
12 26 
12
<span style="color:green">Your Output is:</span>


</pre></div>
                                </div>
                            </div>  
                            
                        <br>

                                                    <p>If you have purchased any <a href="https://practice.geeksforgeeks.org/courses">course</a> from GeeksforGeeks then please ask your doubt on course discussion forum. You will get quick replies from GFG Moderators there.</p><br><br>
                            <b>Need help with your code? Please use </b><a href="https://ide.geeksforgeeks.org/">ide.geeksforgeeks.org</a><b>, generate link and share the link here.</b>
                            <br><br>

                            <div style="display:flex">
                                <button id="comment" class="action-button" style="width: 45%; cursor: pointer; box-shadow: rgba(0, 0, 0, 0.4) 0px 2px 5px 0px, rgba(0, 0, 0, 0) 0px 6px 20px 0px; border-color: rgb(76, 185, 107); border-radius: 4px; display: none;">Load Comments</button>
                            </div>

                            <div class="container-fluid">
                                <div class="col-sm-12 col-xs-12" style="margin-top: 10px;">
                                    <div class="col-sm-12 col-xs-12">
                                        <div id="disqus_thread"><iframe id="dsq-app5755" name="dsq-app5755" allowtransparency="true" frameborder="0" scrolling="no" tabindex="0" title="Disqus" width="100%" src="./del_files/saved_resource(2).html" style="width: 1px !important; min-width: 100% !important; border: none !important; overflow: hidden !important; height: 0px !important;" horizontalscrolling="no" verticalscrolling="no"></iframe><div dir="ltr" style="overflow: hidden;"><svg style="background: url(&quot;https://c.disquscdn.com/next/embed/assets/img/disqus-social-icon-dark.9a297ec866f5b7eed39d90aa34a38e85.svg&quot;) center center / contain no-repeat; display: block; margin: auto; width: 80px; height: 80px;"></svg><p align="center">Disqus seems to be taking longer than usual. <a href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1#" onclick="DISQUS.reset({reload: true}); return false;">Reload</a>?</p></div></div>
                                        <script>
                                         /**
                                             *  RECOMMENDED CONFIGURATION VARIABLES: EDIT AND UNCOMMENT THE SECTION BELOW TO INSERT DYNAMIC VALUES FROM YOUR PLATFORM OR CMS.
                                             *  LEARN WHY DEFINING THESE VARIABLES IS IMPORTANT: https://disqus.com/admin/universalcode/#configuration-variables
                                             */
                                            
                                            var disqus_config = function () {
                                                this.page.url = 'https://practice.geeksforgeeks.org/problem-page.php?pid=700161';  // Replace PAGE_URL with your page's canonical URL variable
                                                this.page.identifier = 'problem-page.php?pid=700161'; // Replace PAGE_IDENTIFIER with your page's unique identifier variable
                                                this.callbacks.onNewComment = [function(comment) { 
                                                    var author = 'kartik';
                                                    var problem ='Delete without head pointer'; 
                                                    var requestType = 'notifyProblemAuthor';
                                                    var problemLink = window.location.href;
                                                    var sendMail = '';  // don't send mail if problem is older than a month
                                                    if(sendMail) {
                                                        $.ajax({
                                                          type:"POST",
                                                          url:"/ajax/monitorDisqusAjax.php",
                                                          data: {requestType: requestType, author: author, problemLink: problemLink, problem: problem, comment: comment},
                                                          dataType: "json",
                                                       });
                                                   }
                                                }];
                                            };
                    
                                            $(function() {
                                                var disqus_div = $("#disqus_thread");
                                                if (disqus_div.size() > 0 ) {
                                                    var ds_loaded = false,
                                                    top = disqus_div.offset().top, // WHERE TO START LOADING
                                                    disqus_data = disqus_div.data(),
                                                    check = function(){
                                                        if ( !ds_loaded && $(window).scrollTop() + $(window).height()+200 > top ) {
                                                            ds_loaded = true;
                                                            for (var key in disqus_data) {
                                                                if (key.substr(0,6) == 'disqus') {
                                                                    window['disqus_' + key.replace('disqus','').toLowerCase()] = disqus_data[key];
                                                                }
                                                            }
                                                    
                                                            var dsq = document.createElement('script'); 
                                                            dsq.type = 'text/javascript';
                                                            dsq.async = true;
                                                            dsq.src = 'https://geeksforgeekspractice.disqus.com/embed.js';
                                                            (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(dsq);
                                                        }
                                                        $("#comment").css("display", "none");
                                                    };

                                                    $(window).scroll(check);
                                                    check();
                                                }
                                            });
                                        </script>
                                        <noscript>Please enable JavaScript to view the <a href="https://disqus.com/?ref_noscript" rel="nofollow">comments powered by Disqus.</a></noscript>
                                    </div>
                                </div>
                            </div>
                                                </div>
                </div>

                
            </div>
        </div>
        <!-- ProblemPage Center Content Part END -->


        <!-- ProblemPage Right Sidebar START -->
                    <div class="col-sm-3 col-xs-12" id="col_sidebar">
                

       <!-- /27823234/Practice/Vertical_W<337 -->
    <div id="div-gpt-ad-1523612657686-1" data-google-query-id="CPXTsOOw_uQCFdqCcAodQ_kHIg">
    
    <div id="google_ads_iframe_/27823234/Practice/Vertical_W&lt;337_0__container__" style="border: 0pt none; display: inline-block; width: 160px; height: 600px;"><iframe frameborder="0" src="./del_files/container(1).html" id="google_ads_iframe_/27823234/Practice/Vertical_W&lt;337_0" title="3rd party ad content" name="" scrolling="no" marginwidth="0" marginheight="0" width="160" height="600" data-is-safeframe="true" sandbox="allow-forms allow-pointer-lock allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" data-google-container-id="2" style="border: 0px; vertical-align: bottom;" data-load-complete="true"></iframe></div></div>


   <br>
    <div class="border" id="sidebar" style="padding-right:0px;">
        <div id="leaderBoard">
            <div class="row mainLeaderBoard">
    <div class="col-sm-12">
        <ul class="nav nav-tabs navigation" role="tablist">
            <li role="presentation" class="active text-center" style="width:33.33%;">
                <a class="whiteBorder" href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1#weekly_score" aria-controls="weekly_score" role="tab" data-toggle="tab" style="margin:0;">Weekly</a>
            </li>
            <li role="presentation" class="text-center" style="width:33.33%;">
                <a class="whiteBorder" href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1#monthly_score" aria-controls="monthly_score" role="tab" data-toggle="tab" style="margin:0;">Monthly</a>
            </li>
            <li role="presentation" class="text-center" style="width:33.33%;">
                <a class="whiteBorder" href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1#overall" aria-controls="overall" role="tab" data-toggle="tab" style="margin:0;">Overall</a>
            </li>
          </ul>
          <div class="tab-content">
            <div role="tabpanel" class="tab-pane active" id="weekly_score">
                <table class="table whiteBgColor" style="margin-bottom:0px;">
                    <tbody>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/coder_1109/practice/">
                                            coder_1109                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        242                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/Pulkit__Sharma__/practice/">
                                            Pulkit__Sharma__                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        122                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/anuj%20agrawal%207/practice/">
                                            anuj agrawal 7                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        118                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/SahatPrasad1/practice/">
                                            SahatPrasad1                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        116                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/InduPriyaGutti/practice/">
                                            InduPriyaGutti                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        115                                    </td>
                                </tr>
                                            <tr id="userRow" style="background-color:#b3ffb3"><td style="text-align:center;width:60%;border:1px solid #6AA84F;padding:2px;"><a href="https://auth.geeksforgeeks.org/user/manish%20kumar%2064/practice/">manish kumar 64</a></td><td id="userScore" style="width:20%;text-align:center;border:1px solid #6AA84F;padding:2px;">1</td></tr></tbody>
                </table>
            </div>
            <div role="tabpanel" class="tab-pane" id="monthly_score">
                <table class="table whiteBgColor" style="margin-bottom:0px;">
                    <tbody>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/coder_1109/practice/">
                                            coder_1109                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        188                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/Pulkit__Sharma__/practice/">
                                            Pulkit__Sharma__                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        114                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/SahatPrasad1/practice/">
                                            SahatPrasad1                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        96                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/InduPriyaGutti/practice/">
                                            InduPriyaGutti                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        96                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/Piyuli/practice/">
                                            Piyuli                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        91                                    </td>
                                </tr>
                                            <tr id="userRow" style="background-color:#b3ffb3"><td style="text-align:center;width:60%;border:1px solid #6AA84F;padding:2px;"><a href="https://auth.geeksforgeeks.org/user/manish%20kumar%2064/practice/">manish kumar 64</a></td><td id="userScore" style="width:20%;text-align:center;border:1px solid #6AA84F;padding:2px;">1</td></tr></tbody>
                </table>
            </div>
            <div role="tabpanel" class="tab-pane" id="overall">
                <table class="table whiteBgColor" style="margin-bottom:0px;">
                    <tbody>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/blackshadows/practice/">
                                            blackshadows                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        5331                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/Ibrahim%20Nash/practice/">
                                            Ibrahim Nash                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        5219                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/akhayrutdinov/practice/">
                                            akhayrutdinov                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        5111                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/mb1973/practice/">
                                            mb1973                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        4929                                    </td>
                                </tr>
                                                        <tr style="border:1px solid #6AA84F;padding:2px;">
                                    <td style="text-align:center;width:70%;">
                                        <a href="https://auth.geeksforgeeks.org/user/Quandray/practice/">
                                            Quandray                                        </a>
                                    </td>
                                    <td style="text-align:center;width:30%;">
                                        4555                                    </td>
                                </tr>
                                            <tr id="userRow" style="background-color:#b3ffb3"><td style="text-align:center;width:60%;border:1px solid #6AA84F;padding:2px;"><a href="https://auth.geeksforgeeks.org/user/manish%20kumar%2064/practice/">manish kumar 64</a></td><td id="userScore" style="width:20%;text-align:center;border:1px solid #6AA84F;padding:2px;">3</td></tr></tbody>
                </table>
            </div>
          </div>
    </div>
    <div class="col-sm-12">
        <a class="whiteLink btn btn-success hoverDarkGreen" href="https://practice.geeksforgeeks.org/ranking.php" data-toggle="tooltip" data-placement="top" title="Click to view Overall Leaderboard" style="color:white;display:block;">Leaderboard (Overall) <span class="glyphicon glyphicon-forward"></span></a>
    </div>
</div>
<script>
    var weeklyTopUsers = ["coder_1109","Pulkit__Sharma__","anuj agrawal 7","SahatPrasad1","InduPriyaGutti"];
    var monthlyTopUsers = ["coder_1109","Pulkit__Sharma__","SahatPrasad1","InduPriyaGutti","Piyuli"];
    var overallTopUsers = ["blackshadows","Ibrahim Nash","akhayrutdinov","mb1973","Quandray"];
</script>
        </div>
        <br><br>

        
            <script>
                $(window).load(function(){
                    var userRow = '<tr id="userRow" style="background-color:#b3ffb3">';
                    userRow += '<td style="text-align:center;width:60%;border:1px solid #6AA84F;padding:2px;">';
                    userRow += '<a href="https://auth.geeksforgeeks.org/user/'+'manish kumar 64'+'/practice/">'+'manish kumar 64'+'</a>';
                    userRow += '</td>';
                    userRow += '<td id="userScore" style="width:20%;text-align:center;border:1px solid #6AA84F;padding:2px;">'+''+'</td>';
                    userRow += '</tr>';
                    if ( overallTopUsers.indexOf('manish kumar 64') <= -1 ) {
                        $('body').find('#overall').find('table').find('tbody').append(userRow);
                        $('body').find('#overall').find('table').find('tr#userRow').find('td#userScore').html('3');
                    }
                    if ( weeklyTopUsers.indexOf('manish kumar 64') <= -1) {
                        $('body').find('#weekly_score').find('table').find('tbody').append(userRow);
                        $('body').find('#weekly_score').find('table').find('tr#userRow').find('td#userScore').html('1');
                    }
                    if ( monthlyTopUsers.indexOf('manish kumar 64')<= -1) {
                        $('body').find('#monthly_score').find('table').find('tbody').append(userRow);
                        $('body').find('#monthly_score').find('table').find('tr#userRow').find('td#userScore').html('1');
                    }

                    $('.mainLeaderBoard').find("td:contains('manish kumar 64')").parent().css('background-color','#b3ffb3');
                }); 
            </script>
                    <br>
      
        <div style="margin:6px 0px;">
            <!-- /27823234/Practice/Vertical_W<337 -->
            <div id="div-gpt-ad-1523612657686-2" data-google-query-id="CPbTsOOw_uQCFdqCcAodQ_kHIg">
                <div id="google_ads_iframe_/27823234/Practice/Vertical_W&lt;337_1__container__" style="border: 0pt none; display: inline-block; width: 160px; height: 600px;"><iframe frameborder="0" src="./del_files/container(2).html" id="google_ads_iframe_/27823234/Practice/Vertical_W&lt;337_1" title="3rd party ad content" name="" scrolling="no" marginwidth="0" marginheight="0" width="160" height="600" data-is-safeframe="true" sandbox="allow-forms allow-pointer-lock allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" data-google-container-id="3" style="border: 0px; vertical-align: bottom;" data-load-complete="true"></iframe></div>
            </div>
        </div>
        <br>
   
            </div>

    <style>
        .tab-pane>.table>tbody>tr>td {
            border-top: none;
        }
    </style>

            </div> 
            
        <!-- ProblemPage Right Sidebar END -->

    </div>
    <!-- END Full Page Div -- >

    <!--Edit Modal -->
    <div class="modal fade" id="editProblemModal">
        <div class="modal-dialog ">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Select Operation Mode</h4>
                </div>
                <div class="modal-body">
                    <p>Please choose 'ReadOnlyMode' if you needn't to 'Edit' the problem e.g. viewing OJ's solution, TestCase Files (TCFs), TimeLimit etc.</p>
                </div>
                <div class="modal-footer">
                    <a href="https://practice.geeksforgeeks.org/addEditProblem.php?problemId=700161" class="btn btn-warning" role="button" target="_blank">EditMode</a>
                    <a href="https://practice.geeksforgeeks.org/addEditProblem.php?problemId=700161&amp;viewMode=1" class="btn btn-info" role="button" target="_blank">ReadOnlyMode</a>
                </div>
            </div>
        </div>
    </div>
    
    <div class="modal fade" id="customInputTestModal">
        <div class="modal-dialog ">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Enter Custom Input</h4>
                </div>
                <div class="modal-body">
                    <p>Please note that Custom Input(s) should be mentioned in the same order (format) as stated in the problem description.</p>
                    <textarea id="testArea" rows="4" style="width:100%;max-width:100%" maxlength="15000"></textarea>
                </div>
                <div class="modal-footer">
                    <button class="btn btn-default" type="button" data-dismiss="modal">Close
                    </button><button class="btn btn-warning" type="button" id="customInputTestRun">Run Code
                </button></div>
            </div>
        </div>
    </div>

    <div class="modal fade" id="customInputExpectedModal">
        <div class="modal-dialog ">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Enter Custom Input</h4>
                </div>
                <div class="modal-body">
                    <p>Please note that Custom Input(s) should be mentioned in the same order (format) as stated in the problem description.</p>
                    <textarea id="expectedArea" rows="4" style="width:100%;max-width:100%" maxlength="15000"></textarea>
                </div>
                <div class="modal-footer">
                    <button class="btn btn-default" type="button" data-dismiss="modal">Close
                    </button><button class="btn btn-warning" type="button" id="customInputExpectedRun">See Output
                </button></div>
            </div>
        </div>
    </div>

    <div class="text-center" style="margin-top: 50px;">
    <button id="reportIssueBtn" type="button" class="btn btn-warning btn-sm" style="font-size:12px;border-radius:0.3rem;" data-target="#reportIssue" data-toggle="modal" utoken="959c3687ba0f95f58725c8a6e94ee5eeab76bc4431353730303331303537"><i class="fa fa-bug" aria-hidden="true"></i> Report An Issue</button>
    <br><small>If you are facing any issue on this page. Please let us know.</small>
</div><br>
 
    
                <script>userHasSolvedProblemOrViewedSolution = '' </script>
            
            <div class="modal fade" id="hintsModal" style="display: none;">
                <div class="modal-dialog ">
                    <div class="modal-content">
                        <div class="modal-header">
                            <button type="button" class="close" data-dismiss="modal">×</button>
                                <ul class="nav hint-tabs nav-tabs ">
                                         
                    
                                    <li class="active"><a data-toggle="tab" class="" id="h1" marks="1.28" href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1#hint1" aria-expanded="true"><i class="fa fa-unlock"></i> Hint 1</a> </li>
                                         
                    
                                    <li class=""><a data-toggle="tab" class="" id="h2" marks="3.2" href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1#hint2" aria-expanded="false"><i class="fa fa-unlock"></i> Hint 2</a> </li>
                                                                <li class="" data-toggle="tooltip" title="Click to unlock"><a id="fullSolnTab" data-toggle="tab" href="https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1#fullSoln"> <i class="fa fa-lock"></i> Full Solution</a> </li>
                                </ul>
                        </div>
                        <div class="modal-body" style="max-height:70vh; overflow-y:scroll;">
                            <div class="tab-content">
                                          
                                    <div id="hint1" class="tab-pane fade active in">
                                        <p>1. You can do this by swapping the values.</p>                                    </div>
                                          
                                    <div id="hint2" class="tab-pane fade">
                                        <p>2. Since you only have pointer to the node that you need to delete, you can swap the value of node with the value of next node. Keep on swapping till the value of the original node reaches the last node. Now, you can easily delete the last node by setting the second last node's next to null.</p>                                    </div>
                                                                <div id="fullSoln" class="tab-pane fade  ">
                                            <p>Nothing Here! <br> Click on Full solution to get the solution.</p>
                                  </div>
                            </div>
                        </div>
                        <div class="modal-footer">
                            <button class="btn btn-default" type="button" data-dismiss="modal">Close
                        </button></div>
                    </div>
                </div>
            </div>
            
    <link rel="stylesheet" href="./del_files/pretify.css" type="text/css">
    

    
</div>
		
    <!--Comment Modal -->
    <div class="modal fade" id="commentModal" role="success">
        <div class="modal-dialog ">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Message </h4>
                </div>
                <div class="modal-body">
                    <div class="form-group">
                         <div class="modal-body text-center">
                            <p>Error</p>
                        </div>
                    </div>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" style="border-radius:0.3rem;" data-dismiss="modal">Okay!</button>
                </div>
            </div>
        </div>
    </div>

    <div class="modal fade" id="reportIssue" tabindex="-1" role="dialog">
        <div class="modal-dialog modal-lg" role="document">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                    <h4 class="modal-title text-center" id="myModalLabel">Please report if you are facing any issue on this page.<br> <small><script>document.write(window.location.href)</script>https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1</small>  </h4>
                    <span><strong>Note: </strong>Please use this button to report only <strong>Software related issues</strong>. For queries regarding questions and quizzes, use the comment area below respective pages.</span>
                </div>
                <div class="modal-body">
                    <form class="form-horizontal" role="form">
                        <div class="form-group">
                            <label class="col-sm-1 control-label" style="text-align:left;" for="inputTestCase">Describe Your Issue</label>
                            <div class="col-sm-11">
                                <textarea id="reportIssueDescription" class="form-control" rows="7" cols="100" name="issueDescription" style="max-width: 100%;min-width: 100%;"></textarea>
                            </div>
                        </div>
                   </form>
               </div>
               <div class="modal-footer">
                  <button type="button" class="btn btn-warning" data-dismiss="modal" id="reportIssueMail" style="float:right;margin-left:5px;border-radius:0.3rem;">Send</button>
                  <button type="button" class="btn btn-default" data-dismiss="modal" style="float:right; border-radius:0.3rem;">Close</button>
               </div>
            </div>
        </div>
    </div>

<footer>
    <div id="container-g4g-footer">

        <div id="footer">
            <div class="logo">
                <ul class="gfg-logo-ul">
                    <li>
                        <a href="https://www.geeksforgeeks.org/">
                            <img src="./del_files/GeeksforGeeksLogoFooterSmall.png" alt="GeeksforGeeks">
                        </a>
                    </li>
                </ul>
                <ul class="social-ul">
                    <li>5th Floor, A-118,</li>
                    <li>Sector-136, Noida, Uttar Pradesh - 201305</li>
        <li>feedback@geeksforgeeks.org</li>
                </ul>
                
            </div>
            <div class="footer-column">
                <ul>
                    <li><b>COMPANY</b></li>
                    <li><a href="https://www.geeksforgeeks.org/about/">About Us</a></li>
                    <li><a href="https://www.geeksforgeeks.org/careers/">Careers</a></li>
                    <li><a href="https://www.geeksforgeeks.org/privacy-policy/">Privacy Policy</a></li>
                    <li><a href="https://www.geeksforgeeks.org/about/contact-us/">Contact Us</a></li>
                </ul>
            </div>


            <div class="footer-column">
                <ul>
                    <li><b>LEARN</b></li>
                    <li><a href="https://www.geeksforgeeks.org/fundamentals-of-algorithms/">Algorithms</a></li>
                    <li><a href="https://www.geeksforgeeks.org/data-structures/">Data Structures</a></li>
                    <li><a href="https://www.geeksforgeeks.org/category/program-output/">Languages</a></li>
                    <li><a href="https://www.geeksforgeeks.org/articles-on-computer-science-subjects-gq/">CS Subjects</a></li>
                    <li><a href="https://www.youtube.com/geeksforgeeksvideos/">Video Tutorials</a></li>
                </ul>
            </div>

            <div class="footer-column">
                <ul>
                    <li><b>PRACTICE</b></li>
                    <li><a href="https://practice.geeksforgeeks.org/courses/">Courses</a></li>
                    <li><a href="https://practice.geeksforgeeks.org/company-tags/">Company-wise</a></li>
                    <li><a href="https://practice.geeksforgeeks.org/topic-tags/">Topic-wise</a></li>
                    <li><a href="https://practice.geeksforgeeks.org/faq.php">How to begin?</a></li>
                </ul>
            </div>

            <div class="footer-column">
                <ul>
                    <li><b>CONTRIBUTE</b>
                    </li><li><a href="https://www.geeksforgeeks.org/contribute/">Write an Article</a></li>
                    <li><a href="https://www.geeksforgeeks.org/write-interview-experience/">Interview Experience</a></li>
                    <li><a href="https://www.geeksforgeeks.org/internship/">Internships</a></li>
                    <li><a href="https://www.geeksforgeeks.org/how-to-contribute-videos-to-geeksforgeeks/">Videos</a></li>
                </ul>
            </div>

        </div>

        <div class="footer-bottom-div footer-bottom-social">
    <ul class="social-ul" style="padding-left: 0px;">
                    <li>
                        <a class="social-link" href="https://www.facebook.com/geeksforgeeks.org/"><div class="social-img-div"></div></a>
                        <a class="social-link" href="https://in.linkedin.com/company/geeksforgeeks"><div class="social-img-div"></div></a>
                        <a class="social-link" href="https://play.google.com/store/apps/details?id=free.programming.programming&amp;hl=en"><div class="social-img-div"></div></a>
                        <a class="social-link" href="https://twitter.com/geeksforgeeks"><div class="social-img-div"></div></a>
                        <a class="social-link" href="https://www.youtube.com/geeksforgeeksvideos"><div class="social-img-div"></div></a>
                    </li>
                </ul>
  </div>
  <div class="footer-bottom-div">
            @geeksforgeeks, <a href="https://creativecommons.org/licenses/by-sa/4.0/" style="color:#fff;">Some rights reserved</a>
        </div>

    </div>
</footer>
<div id="gfg-snackbar" style="z-index:10000"></div>
<script async="" type="text/javascript" src="./del_files/fancybar.js" id="_fancybar_js"></script>
<link rel="stylesheet" href="./del_files/jquery-ui.min.css">
<script async="" type="text/javascript" src="./del_files/jquery-ui.min.js"></script>

	
	

	

    
    <script>
        var problemTimer = null;
        $(".showTag").click(function(){
                 $(".showTag").css('display','none'); 
                 $(".hideTag").css('display','');
                 $(".topicTags").css('display','');
                
        });
        $(".hideTag").click(function(){
                 $(".hideTag").css('display','none'); 
                 $(".showTag").css('display','');
                 $(".topicTags").css('display','none');
                
        });
        $(".showAllCourses").click(function(){
            $(".hiddenCourses").toggle(); 
            if($(this).text()== "More") {
                $(this).text("Less");
            } else {
                $(this).text("More");
            }   
        });
            </script>

    
<table cellspacing="0" cellpadding="0" class="gstl_50 gssb_c" style="width: 863px; display: none; top: 55px; position: absolute; left: 213px;"><tbody><tr><td class="gssb_f"></td><td class="gssb_e" style="width: 100%;"></td></tr></tbody></table><div id="fb-root" class=" fb_reset"><div style="position: absolute; top: -10000px; width: 0px; height: 0px;"><div><iframe name="fb_xdm_frame_https" id="fb_xdm_frame_https" aria-hidden="true" title="Facebook Cross Domain Communication Frame" tabindex="-1" frameborder="0" allowtransparency="true" allowfullscreen="true" scrolling="no" allow="encrypted-media" src="./del_files/xd_arbiter.html" style="border: none;"></iframe></div><div></div></div></div><iframe id="google_osd_static_frame_1960958170386" name="google_osd_static_frame" style="display: none; width: 0px; height: 0px;" src="./del_files/saved_resource(3).html"></iframe><iframe style="display: none;" src="./del_files/saved_resource(4).html"></iframe></body></html>