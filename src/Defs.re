type star = {
    name: string,
    reds: bool,
    race: bool,
    boss: bool,
};

type level = Bob | Wf | Jrb | Ccm | Bbh | Hmc | Lll | Ssl | Ddd | Sl | Wdw | Ttm | Thi | Ttc | Rr;

Js.log2("!!!",Hashtbl.hash(Bob));
module LevelHashable = Belt.Id.MakeHashable({
    type t = level;
    let hash = Hashtbl.hash;
    let eq = (===);
});

type levelDef = {
    name: string,
    stars: (star, star, star, star, star, star),
    hasCannon: bool,
};

type secretCategory = Cap | Slide | Bowser | MIPS | BonusLevel | Toad;

type secret = {
    name: string,
    category: secretCategory,
}

type secrets =
    (secret, secret, secret, secret, secret, secret, secret, secret, secret, secret,
     secret, secret, secret, secret, secret);

type t = {
    levels: Belt.HashMap.t(level, levelDef, LevelHashable.identity),
    secrets: secrets,
};

let bob = {
    name: "Bob-omb Battlefield",
    stars: (
        {
            name: "Big Bomb-omb on the Summit",
            reds: false,
            race: false,
            boss: true,
        },
        {
            name: "Footrace with Koopa the Quick",
            reds: false,
            race: true,
            boss: false,
        },
        {
            name: "Shoot to the Island in the Sky",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Find the 8 Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Mario Wings to the Sky",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Behind Chomp's Gate",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: true,
};
let wf = {
    name: "Whomp's Fortress",
    stars: (
        {
            name: "Chip Off Whomp's Block",
            reds: false,
            race: false,
            boss: true,
        },
        {
            name: "To the Top of the Fortress",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Shoot Into the Wild Blue",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Red Coins on the Floating Isle",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Fall Onto the Caged Island",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Blast Away the Wall",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: true,
};
let jrb = {
    name: "Jolly Roger Bay",
    stars: (
        {
            name: "Plunder in the Sunken Ship",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Can the Eel Come out to Play?",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Treasure of the Ocean Cave",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Red Coins on the Ship Afloat",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Blast to the Stone Pillar",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Through the Jet Stream",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: true,
};
let ccm = {
    name: "Cool, Cool Mountain",
    stars: (
        {
            name: "Slip Slidin' Away",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Li'l Penguin Lost",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Big Penguin Race",
            reds: false,
            race: true,
            boss: false,
        },
        {
            name: "Frosty Slide for 8 Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Snowman's Lost his Head",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Wall Kicks Will Work",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: true,
};
let bbh = {
    name: "Big Boo's Haunt",
    stars: (
        {
            name: "Go on A Ghost Hunt",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Ride Big Boo's Merry-go-Round",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Secret of the Haunted Books",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Seek the 8 Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Big Boo's Balcony",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Eye to Eye in the Secret Room",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: false,
};
let hmc = {
    name: "Hazy Maze Cave",
    stars: (
        {
            name: "Swimming Beast in the Cavern",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Elevate for 8 Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Metal Head Mario Can Move!",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Navigating the Toxic Maze",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "A-maze-ing Emergency Exit",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Watch for Falling Rocks",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: false,
};
let lll = {
    name: "Lethal Lava Land",
    stars: (
        {
            name: "Boil the Big Bully",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Bully the Bullies",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "8-Coin Puzzle with 15 Pieces",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Red-Hot Log Rolling",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Hot-Foot-It Into the Volcano",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Elevator Tour in the Volcano ",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: false,
};
let ssl = {
    name: "Shifting Sand Land",
    stars: (
        {
            name: "In the Talons of the Big Bird",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Shining Atop the Pyramid",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Inside the Ancient Pyramid",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Stand Tall on the Four Pillars",
            reds: false,
            race: false,
            boss: true,
        },
        {
            name: "Free Flying for 8 Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Pyramid Puzzle",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: true,
};
let ddd = {
    name: "Dire, Dire Docks",
    stars: (
        {
            name: "Board Bowser's Sub",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Chests in the Current",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Pole-Jumping for Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Through the Jet Stream",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "The Manta Ray's Reward",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Collect the Caps",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: false,
};
let sl = {
    name: "Snowman's Land",
    stars: (
        {
            name: "Snowman's Big Head",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Chill With the Bully",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "In the Deep Freeze",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Whirl From the Freezing Pond",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Shell Shreddin' for Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Into the Igloo",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: false,
};
let wdw = {
    name: "Wet-Dry World",
    stars: (
        {
            name: "Shocking Arrow Lifts",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Top o' the Town",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Secrets in the Shallows & Sky",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Express Elevator--Hurry Up",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Go to Town for Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Quick Race Through Downtown",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: true,
};
let ttm = {
    name: "Tall, Tall Mountain",
    stars: (
        {
            name: "Scale the Mountain",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Mystery of the Monkey Cage",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Scary 'Shrooms, Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Mysterious Mountainside",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Breathtaking View From Bridge",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Blast to the Lonely Mushroom",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: true,
};
let thi = {
    name: "Tiny, Huge Island",
    stars: (
        {
            name: "Pluck the Piranha Flower",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "The Tip Top of the Huge Island",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Rematch With Koopa the Quick",
            reds: false,
            race: true,
            boss: false,
        },
        {
            name: "Five Itty Bitty Secrets",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Wiggler's Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Make Wiggler Squim",
            reds: false,
            race: false,
            boss: true,
        },
    ),
    hasCannon: true,
};
let ttc = {
    name: "Tick Tock Clock",
    stars: (
        {
            name: "Roll Into the Cage",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "The Pit and the Pendulum",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Get a Hand",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Stomp on a Thwomp",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Timed Jumps on Moving Bars",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Stop Time for Red Coins",
            reds: true,
            race: false,
            boss: false,
        },
    ),
    hasCannon: false,
};
let rr = {
    name: "Rainbow Ride",
    stars: (
        {
            name: "Cruiser Crossing the Rainbow",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "The Big House in the Sky",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Coins Amassed in a Maze",
            reds: true,
            race: false,
            boss: false,
        },
        {
            name: "Swingin' in the Breeze",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Tricky Triangles!",
            reds: false,
            race: false,
            boss: false,
        },
        {
            name: "Somewhere Over the Rainbow",
            reds: false,
            race: false,
            boss: false,
        },
    ),
    hasCannon: true,
};

let secrets = (
    { name: "Wing Cap Red Coins", category: Cap },
    { name: "Metal Cap Red Coins", category: Cap },
    { name: "Vanish Cap Red Coins", category: Cap },
    { name: "Slide!", category: Slide },
    { name: "Slide in Under 21 Seconds!", category: Slide },
    { name: "Aquarium Red Coins", category: BonusLevel },
    { name: "Wing Over the Rainbow", category: BonusLevel },
    { name: "MIPS 1", category: MIPS },
    { name: "MIPS 2", category: MIPS },
    { name: "Basement Toad", category: Toad },
    { name: "2nd Floor Toad", category: Toad },
    { name: "Top Floor Road", category: Toad },
    { name: "Dark World Red Coins", category: Bowser },
    { name: "Fire Sea Red Coins", category: Bowser },
    { name: "BITS Red Coins", category: Bowser },
);

let defs = {
    levels: Belt.HashMap.fromArray([|
        (Bob, bob),
        (Wf, wf),
        (Jrb, jrb),
        (Ccm, ccm),
        (Bbh, bbh),
        (Hmc, hmc),
        (Lll, lll),
        (Ssl, ssl),
        (Ddd, ddd),
        (Sl, sl),
        (Wdw, wdw),
        (Ttm, ttm),
        (Thi, thi),
        (Ttc, ttc),
        (Rr, rr),
    |], ~id=(module LevelHashable)),
    secrets,
};
