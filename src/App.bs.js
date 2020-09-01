'use strict';

var React = require("react");

function s(prim) {
  return prim;
}

function App(Props) {
  return React.createElement("div", undefined, "hi");
}

var make = App;

exports.s = s;
exports.make = make;
/* react Not a pure module */
