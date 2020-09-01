[@bs.val] external document: Js.t({..}) = "document";

let makeContainer = () => {
  let container = document##createElement("div");
  document##body##appendChild(container) |> ignore;

  container;
};

ReactDOMRe.render(
  <App />,
  makeContainer(),
);
