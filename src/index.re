open Reprocessing;
let _DIMENSION = 600.0;
let c = 4.0;

let setup = (env) => {
    Env.size(~width=int_of_float(_DIMENSION), ~height=int_of_float(_DIMENSION), env);
    0.
};

let draw = (state: float, env) => {
    let a = state *. 137.5;
    let r = c *. sqrt(state);

    let x = r *. cos(a) +. _DIMENSION /. 2.;
    let y = r *. sin(a) +. _DIMENSION /. 2.;

    let stateAsInt = int_of_float(state);

    let red = stateAsInt mod 255 + 100;
    let green = stateAsInt mod 255 - 100;
    let blue = stateAsInt mod 255;

    Draw.fill(Utils.color(~r=red, ~g=green, ~b=blue, ~a=255), env);
    Draw.noStroke(env);
    let rad = 2;
    Draw.ellipse(~center=(int_of_float(x), int_of_float(y)), ~radx=rad, ~rady=rad, env);

    state +. 1.
};

run(~setup, ~draw, ());
