type star = bool;

type levelState = {
    stars: (star, star, star, star, star, star),
    cannon: bool,

    // hundo and coins must be separate – hundo doesn't require finishing the level while coins does
    hundo: bool,
    coins: int,
};

type secret = bool;

type secrets =
    (secret, secret, secret, secret, secret, secret, secret, secret, secret, secret,
     secret, secret, secret, secret, secret);

type state = {
    levels: Belt.HashMap.t(Defs.level, levelState, int),
    secrets: secrets,
    noHat: bool,
    lives: int,
};

let initialLevel = {
    stars: (false, false, false, false, false, false),
    cannon: false,
    hundo: false,
    coins: 0,
};

let initial = {
    levels: Belt.HashMap.fromArray(),
    secrets:
        (false, false, false, false, false, false, false, false, false, false,
        false, false, false, false, false),
    noHat: false,
    lives: 5,
};
