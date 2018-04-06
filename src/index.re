open Reprocessing;
let _DIMENSION = 600.0;
let n = ref(0.0);
let c = 4.0;

let setup = (env) => Env.size(~width=int_of_float(_DIMENSION), ~height=int_of_float(_DIMENSION), env);

let draw = (_state, env) => {
    let deRefN = n^;
    let a = deRefN *. 137.5;
    let r = c *. sqrt(deRefN);

    let x = r *. cos(a) +. _DIMENSION /. 2.;
    let y = r *. sin(a) +. _DIMENSION /. 2.;

    let nAsInt = int_of_float(deRefN);

    let red = nAsInt mod 255 + 100;
    let green = nAsInt mod 255 - 100;
    let blue = nAsInt mod 255;

    Draw.fill(Utils.color(~r=red, ~g=green, ~b=blue, ~a=255), env);
    Draw.noStroke(env);
    let rad = 2;
    Draw.ellipse(~center=(int_of_float(x), int_of_float(y)), ~radx=rad, ~rady=rad, env);

    n := deRefN +. 1.;
};

run(~setup, ~draw, ());
