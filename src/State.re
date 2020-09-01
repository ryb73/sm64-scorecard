type level = {
    stars: array(bool),
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
