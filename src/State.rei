type star = bool;

type level = {
    stars: (star, star, star, star, star, star),
    cannon: bool,
    hundo: bool,
    coins: int,
};

type secret = bool;

type secrets =
    (secret, secret, secret, secret, secret, secret, secret, secret,
    secret, secret, secret, secret, secret, secret, secret);

type state = {
    bob: level,
    wf: level,
    jrb: level,
    ccm: level,
    bbh: level,
    hmc: level,
    lll: level,
    ssl: level,
    ddd: level,
    sl: level,
    wdw: level,
    ttm: level,
    thi: level,
    ttc: level,
    rr: level,
    secrets: secrets,
    noHat: bool,
    lives: int,
};

let initial: state;
