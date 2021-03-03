open React;
let s = string;

type level = Bob | Wf | Jrb | Ccm | Bbh | Hmc | Lll | Ssl | Ddd | Sl | Wdw | Ttm | Thi | Ttc | Rr;
type starIndex = One | Two | Three | Four | Five | Six;

type action = GotLevelStar(level, starIndex);

let reduce = (state, action) => {
    switch action {
        | GotLevelStar(level, starIndex) => 1
    };
};

[@react.component]
let make = () => {
    let () = useReducer(reduce, State.initial);
};
