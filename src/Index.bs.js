'use strict';

var React = require("react");
var ReactDom = require("react-dom");
var App$ReasonReactExamples = require("./App.bs.js");

function makeContainer(param) {
  var container = document.createElement("div");
  document.body.appendChild(container);
  return container;
}

ReactDom.render(React.createElement(App$ReasonReactExamples.make, { }), makeContainer(undefined));

exports.makeContainer = makeContainer;
/*  Not a pure module */
