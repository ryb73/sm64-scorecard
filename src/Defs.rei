type star = { name: string, reds: bool, race: bool, boss: bool, };

type levelDef = {
    name: string,
    stars: (star, star, star, star, star, star),
    hasCannon: bool,
};

type secretCategory = Cap | Slide | Bowser | MIPS | BonusLevel | Toad;

type secret = { name: string, category: secretCategory, };

type secrets =
    (secret, secret, secret, secret, secret, secret, secret, secret,
    secret, secret, secret, secret, secret, secret, secret);

type level = Bob | Wf | Jrb | Ccm | Bbh | Hmc | Lll | Ssl | Ddd | Sl | Wdw | Ttm | Thi | Ttc | Rr;

module LevelHashable: { type identity; };

type t = {
    levels: Belt.HashMap.t(level, levelDef, LevelHashable.identity),
    secrets: secrets,
};

let defs: t;
